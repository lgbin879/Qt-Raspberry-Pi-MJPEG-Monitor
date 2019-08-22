#include "mainwindow.h"
#include "ui_mainwindow.h"

#define HTTP_HEADER         "http://"
#define ACTION_STREAM       "/?action=stream"
#define ACTION_SNAP         "/?action=snapshot"
#define NULL_HTTP           "http://127.0.0.1/"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPalette palette;
    palette.setColor(QPalette::Background, QColor(20, 20, 20));

    view1 = new QWebEngineView(this);
    view1->setWindowFlags(Qt::FramelessWindowHint);
    view1->setGeometry(20, 20, 640, 480);

    view2 = new QWebEngineView(this);
    view2->setWindowFlags(Qt::FramelessWindowHint);
    view2->setGeometry(40+640, 20, 640, 480);

    view1->page()->setBackgroundColor(Qt::gray);
    view2->page()->setBackgroundColor(Qt::gray);

    ui->imgLable1->setAutoFillBackground(true);  //一定要这句，否则不行
    ui->imgLable1->setPalette(palette);
    ui->imgLable2->setAutoFillBackground(true);  //一定要这句，否则不行
    ui->imgLable2->setPalette(palette);
    ui->imgLable3->setAutoFillBackground(true);  //一定要这句，否则不行
    ui->imgLable3->setPalette(palette);

    ui->snapBtn1->setEnabled(false);
    ui->snapBtn2->setEnabled(false);
    ui->recordBtn1->setEnabled(false);
    ui->recordBtn2->setEnabled(false);
    ui->rmBtn1->setEnabled(false);
    ui->rmBtn2->setEnabled(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
void MainWindow::resizeEvent(QResizeEvent *)
{
    view1->resize((this->size()));
    view2->resize((this->size()));
}
*/

void MainWindow::on_connectBtn1_clicked(bool forceShow)
{
    if (ui->connectBtn1->text() == "connect" || forceShow == true) {
        ui->connectBtn1->setText("disconnect");

        QString ip1 = ui->serverIpEdit1->text();
        QString port1 = ui->serverPortEdit1->text();
        url1 = "http://"+ip1+":"+port1+"/?action=stream";
        snapUrl1 = "http://"+ip1+":"+port1+"/?action=snapshot";

        qDebug() << url1;
        view1->load(QUrl(url1));
        view1->show();

        ui->snapBtn1->setEnabled(true);
        ui->recordBtn1->setEnabled(true);
    } else {
        ui->connectBtn1->setText("connect");
        ui->snapBtn1->setEnabled(false);
        ui->recordBtn1->setEnabled(false);

        view1->load(QUrl(NULL_HTTP));
        view1->show();
    }
}

void MainWindow::on_connectBtn2_clicked(bool forceShow)
{
    if (ui->connectBtn2->text() == "connect"|| forceShow == true) {
        ui->connectBtn2->setText("disconnect");

        QString ip2 = ui->serverIpEdit2->text();
        QString port2 = ui->serverPortEdit2->text();
        url2 = "http://"+ip2+":"+port2+"/?action=stream";
        snapUrl2 = "http://"+ip2+":"+port2+"/?action=snapshot";

        qDebug() << url2;
        view2->load(QUrl(url2));
        view2->show();

        ui->snapBtn2->setEnabled(true);
        ui->recordBtn2->setEnabled(true);
    } else {
        ui->connectBtn2->setText("connect");
        ui->snapBtn2->setEnabled(false);
        ui->recordBtn2->setEnabled(false);

        view2->load(QUrl(NULL_HTTP));
        view2->show();
    }
}

void MainWindow::on_swapBtn_clicked()
{
    QString old_ip1 = ui->serverIpEdit1->text();
    QString old_ip2 = ui->serverIpEdit2->text();
    ui->serverIpEdit1->setText(old_ip2);
    ui->serverIpEdit2->setText(old_ip1);

    QString old_port1 = ui->serverPortEdit1->text();
    QString old_port2 = ui->serverPortEdit2->text();
    ui->serverPortEdit1->setText(old_port2);
    ui->serverPortEdit2->setText(old_port1);

    ui->serverIpEdit2->displayText();
    ui->serverIpEdit1->displayText();

    on_connectBtn1_clicked(true);
    on_connectBtn2_clicked(true);
}

void MainWindow::on_snapBtn1_clicked()
{
    QDateTime time = QDateTime::currentDateTime();
    QString timestr = time.toString("yyyyMMdd_hhmmss");
    img1 = "./capture1/img_"+timestr+".jpg";

    QString cmd = "wget "+snapUrl1+" -O "+img1;
    if (QProcess::execute(cmd) == 0) {
        QPixmap pix(img1);
        QPixmap dest=pix.scaled(ui->imgLable1->size(),Qt::KeepAspectRatio);

        ui->imgLable1->setPixmap(dest);
        ui->imgLable1->show();

        ui->rmBtn1->setEnabled(true);
        ui->statusLable1->setText(QString("Save Successed: ")+img1);
    }

    qDebug() << cmd;
}

void MainWindow::on_snapBtn2_clicked()
{
    QDateTime time = QDateTime::currentDateTime();
    QString timestr = time.toString("yyyyMMdd_hhmmss");
    img2 = "./capture2/img_"+timestr+".jpg";

    QString cmd = "wget "+snapUrl2+" -O "+img2;

    if (QProcess::execute(cmd) == 0) {
        QPixmap pix(img2);
        QPixmap dest=pix.scaled(ui->imgLable1->size(),Qt::KeepAspectRatio);

        ui->imgLable2->setPixmap(dest);
        ui->imgLable2->show();

        ui->rmBtn2->setEnabled(true);
        ui->statusLable2->setText(QString("Save Successed: ")+img2);
    }

    qDebug() << cmd;
}

void MainWindow::on_rmBtn1_clicked()
{
    QString cmd = "rm " +img1;
    QProcess::execute(cmd);

    ui->imgLable1->clear();
    ui->statusLable1->setText(QString("Delete Successed: ")+img1);
    ui->rmBtn1->setEnabled(false);
    qDebug() << cmd;
}

void MainWindow::on_rmBtn2_clicked()
{
    QString cmd = "rm " +img2;
    QProcess::execute(cmd);

    ui->imgLable2->clear();
    ui->statusLable2->setText(QString("Delete Successed: ")+img2);
    ui->rmBtn2->setEnabled(false);
    qDebug() << cmd;
}

void MainWindow::on_recordBtn1_clicked()
{
    QDateTime time = QDateTime::currentDateTime();
    QString timestr = time.toString("yyyyMMdd_hhmmss");

    QString du1 = ui->duEdit1->text();
    QString cmd = "ffmpeg -i "+ url1+ " -t "+du1+" -pix_fmt yuv420p -b:v 4000k -c:v libx264 "+"./capture1/vid_"+timestr+"_"+du1+"s.mp4";

    QProcess *process = new QProcess;
    process->start(cmd);
    qDebug() << cmd;
}

void MainWindow::on_recordBtn2_clicked()
{
    QDateTime time = QDateTime::currentDateTime();
    QString timestr = time.toString("yyyyMMdd_hhmmss");

    QString du2 = ui->duEdit2->text();
    QString cmd = "ffmpeg -i "+ url2+ " -t "+du2+" -pix_fmt yuv420p -b:v 4000k -c:v libx264 "+"./capture2/vid_"+timestr+"_"+du2+"s.mp4";

    QProcess *process = new QProcess;
    process->start(cmd);
    qDebug() << cmd;
}
