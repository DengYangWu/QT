#include <qapplication.h>
#include <qpushbutton.h>
#include <qfont.h>   //Qt的字体提取和X中提供的可怕的字体提取大小不同，字体的载入和使用都已经被高度优化

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPushButton quit("Quit",0);     //表示窗口显示的内容，0表示父对象，是一个顶层窗口
    //quit.resize(100,50);
    quit.setFont(QFont("微软雅黑",28,QFont::Bold));    //来设置按钮框字体的大小和粗细

    QObject::connect(&quit,SIGNAL(clicked()),&a,SLOT(quit()));  //connect是QT中最重要的特征，是QObject中的静态函数

    quit.show();

    return a.exec();
}
