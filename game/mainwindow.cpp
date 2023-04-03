#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->resize(400,500);
    QTimer *main_time = new QTimer;
    main_time->setInterval(QRandomGenerator::global()->bounded(100,1000));

    auto CreateButton = [this]()
    {
        QPushButton *button = new QPushButton("*", this);
        button->resize(20,20);
        int start_x = QRandomGenerator::global()->bounded(this->width() - button->width());
        int start_y = QRandomGenerator::global()->bounded(100);
        button->move(start_x, start_y);
        button->show();

        int rand_interval = QRandomGenerator::global()->bounded(20,30);
        QTimer *timer_button = new QTimer;
        timer_button->setInterval(rand_interval);

        connect(timer_button, &QTimer::timeout, button, [button, this]()
        {
            int shift = (button->underMouse()) ? 2 : 1;
            button->move(button->x(),button->y() + shift);


            if (button->y() >= this->height() - button->height())
            {
                this->setWindowTitle("YOU LOSE");
                this->setStyleSheet("background-color: red;");
                button->deleteLater();
            }
        });

        timer_button->start();
        connect(button, &QPushButton::clicked, button, &QPushButton::deleteLater);

    };

    connect(main_time, &QTimer::timeout, this, CreateButton);
    main_time->start();
}

MainWindow::~MainWindow()
{

}
