#ifndef MAINWND_H
#define MAINWND_H

#include <QWidget>

namespace Ui {
class mainWnd;
}

class mainWnd : public QWidget
{
    Q_OBJECT

public:
    explicit mainWnd(QWidget *parent = 0);
    ~mainWnd();

private:
    Ui::mainWnd *ui;
};

#endif // MAINWND_H
