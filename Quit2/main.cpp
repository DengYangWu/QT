
#include <QApplication>
#include <qpushbutton.h>
#include <qfont.h>        //此类用于构造框字体样式
#include <QVBoxLayout>   //此类用于构造垂直框布局对象



int main(int argc,char *argv[])
{
    QApplication a(argc,argv);

    QWidget window;     //基础类中的所有的用户界面对象
    window.resize(200,120);

    QPushButton quit("Quit",&window);
    quit.setFont(QFont("微软雅黑",18,QFont::Bold));
    QObject::connect( &quit,&QPushButton::clicked,&QApplication::quit);

    QPushButton *button = new QPushButton("one");
    QVBoxLayout *layout=new QVBoxLayout;
    layout->addWidget(button);
    window.setLayout(layout);
    window.show();

    return a.exec();
}
