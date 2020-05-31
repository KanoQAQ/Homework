#ifndef BUTTON_H
#define BUTTON_H
#include <QWidget>
class QPushButton;
class QHBoxLayout;
class pushbutton:public QWidget
{
    Q_OBJECT
public:
    pushbutton();
    QPushButton *button1;
    QPushButton *button2;
private:
};
#endif // BUTTON_H
