#include <qapplication.h>  //这包含了QApplication类的定义，它管理了各种各样的应用程序的广泛资源（如默认字体和光标）
#include <qpushbutton.h>   //包含了QPushButton类的定义，是一个经典的图形用户界面按钮


//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

//    return a.exec();
//}
int main(int argc,char **argv)   //程序的入口
{
    QApplication a(argc,argv);  //是argc是命令行变量的数量，argv是命令行变量的数组
    QPushButton hello("Hello world!",0);  //设置按钮的内容
    hello.resize(1360,1000);        //设置按钮的大小

    hello.show();     //表示窗口是否显示
    return a.exec();  //main()把控制转交给QT，并且当应用程序退出的时候exec()就会返回
}
