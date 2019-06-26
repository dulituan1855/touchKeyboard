#include "mainwnd.h"
#include "ui_mainwnd.h"

mainWnd::mainWnd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainWnd)
{
    ui->setupUi(this);
}

mainWnd::~mainWnd()
{
    delete ui;
}
