#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DistantQTMainWindow.h"

class DistantQTMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    DistantQTMainWindow(QWidget *parent = nullptr);
    ~DistantQTMainWindow();

private:
    Ui::DistantQTMainWindowClass ui;
};
