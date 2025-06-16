#include "mainwindow.h"

#include <QApplication>
#include <opencv.hpp>
#include <FaceDetector.h>
using namespace cv;
using namespace seeta::v2;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    cv::namedWindow("frame");
    Mat mt=imread("./1.jpg");
    imshow("frame",mt);

    seeta::ModelSetting::Device device =seeta::ModelSetting::CPU;
    int id=0;
    seeta::ModelSetting FD_model("C:/Users/24209/Desktop/bise/SeetaFace/bin/model/fd_2_00.dat",device,id);
    seeta::FaceDetector FD(FD_model);


    return a.exec();
}
