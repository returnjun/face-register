#ifndef REGISTERWIN_H
#define REGISTERWIN_H

#include <QWidget>
#include <opencv.hpp>

namespace Ui {
class RegisterWin;
}

class RegisterWin : public QWidget
{
    Q_OBJECT

public:
    explicit RegisterWin(QWidget *parent = nullptr);
    ~RegisterWin();
    void timerEvent(QTimerEvent *e);

private slots:
    void on_resetBT_clicked();

    void on_addpicBT_clicked();

    void on_registerBT_clicked();

    void on_videoswitchBT_clicked();

    void on_cameraBT_clicked();

private:
    Ui::RegisterWin *ui;
    int timerid;
    cv::VideoCapture cap;
    cv::Mat image;
};

#endif // REGISTERWIN_H
