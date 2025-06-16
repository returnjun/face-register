#include "qfaceobject.h"
#include<opencv.hpp>
#include<QImage>
#include<QPainter>
#include<QDebug>

QFaceObject::QFaceObject(QObject *parent) : QObject(parent)
{
    //初始化引擎
    seeta::ModelSetting  FDmode("C:/Users/24209/Desktop/bise/SeetaFace/bin/model/fd_2_00.dat",seeta::ModelSetting::CPU,0);
    seeta::ModelSetting  PDmode("C:/Users/24209/Desktop/bise/SeetaFace/bin/model/pd_2_00_pts5.dat",seeta::ModelSetting::CPU,0);
    seeta::ModelSetting  FRmode("C:/Users/24209/Desktop/bise/SeetaFace/bin/model/fr_2_10.dat",seeta::ModelSetting::CPU,0);
    this->fengineptr=new seeta::FaceEngine(FDmode,PDmode,FRmode);


    //导入已有的人脸数据库
    this->fengineptr->Load("./face.db");
}

QFaceObject::~QFaceObject()
{
    delete fengineptr;

}

int64_t QFaceObject::face_register(cv::Mat &faceImage)
{
    //需要转换 把opencv的数据转换成seetaface的数据
    if (fengineptr) {
        qDebug()<<"模块没有问题";
    }
    SeetaImageData simage;
    simage.data=faceImage.data;
    simage.width=faceImage.cols;
    simage.height=faceImage.rows;
    simage.channels=faceImage.channels();

    int64_t faceid=this->fengineptr->Register(simage);//注册返回一个人脸id  失败返回-1
    if(faceid>=0){
        qDebug()<<"注册人脸没有问题";
        fengineptr->Save("./face.db");
    }

    return faceid;
}

int QFaceObject::face_query(cv::Mat &faceImage)
{
    //需要转换 把opencv的数据转换成seetaface的数据
    SeetaImageData simage;
    simage.data=faceImage.data;
    simage.width=faceImage.cols;
    simage.height=faceImage.rows;
    simage.channels=faceImage.channels();
    float similarity=0;
    int64_t faceid=this->fengineptr->Query(simage,&similarity);//运算时间比较长
    if(similarity>0.75)//相似度大于0.75才有意义
        emit send_faceid(faceid);
    else
        emit send_faceid(-1);
    return faceid;
}
