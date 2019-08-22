# Qt-Raspberry-Pi-MJPEG-Monitor

Test enviroment: Ubuntu16.04 + Raspberry PI 3 + usb Camera, Qt version 5.10.1

How to build in Ubuntu:

git clone git@github.com:lgbin879/Qt-Raspberry-Pi-MJPEG-Monitor.git

cd Qt-Raspberry-Pi-MJPEG-Monitor

1. qmake
2. make

To fully use this Qt project, you need to install ffmpeg on your ubuntu, and install mjpg-steamer on your raspberry pi.

1. start mjpg_streamer on Raspberry PI:

./mjpg_streamer -i "input_uvc.so -d /dev/video0 " -o "output_http.so -w ./www -p 8090"

2. open rpiMjpegMonitor on Ubuntu, config your raspberrypi ip and port: 8090, click connect button.

3. you can click snap button to snap picture immediatlly, or click record button to save video in mp4 format, delete button to remove snap pictures.

TODO:
1. layout auto scale
2. open model image.
3. to do AI hunman face identification compare with model image.
4. openCV, tensorflow.

if you have any question, send email to "guibinli AT gmail.com"

