#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QNetworkReply>
#include <QNetworkRequest>
#include <QFileInfo>
#include <QProcess>
#include <QDebug>
#include <QPicture>
#include <QPixmap>

#include <QMainWindow>
#include "QtWebEngineWidgets"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    //void resizeEvent(QResizeEvent *);

private slots:
    void on_connectBtn1_clicked(bool forceShow);

    void on_connectBtn2_clicked(bool forceShow);

    void on_swapBtn_clicked();

    void on_snapBtn1_clicked();

    void on_snapBtn2_clicked();

    void on_rmBtn1_clicked();

    void on_rmBtn2_clicked();

    void on_recordBtn1_clicked();

    void on_recordBtn2_clicked();

private:
    Ui::MainWindow *ui;

    QString url1;
    QString url2;
    QString snapUrl1;
    QString snapUrl2;
    QWebEngineView* view1;
    QWebEngineView* view2;

    QString img1;
    QString img2;
};

#endif // MAINWINDOW_H
