#include  <QApplication>
#include  <QDebug>

int  main ( int argc, char ** argv) {
    QApplication aplicación (argc, argv);

    int a = 10 , b = 100 , c = 30 , d = 1 , e = 54 ;
    int m [ 10 ] = { 10 , 9 , 80 , 7 , 60 , 5 , 40 , 3 , 20 , 1 };
    int * p = & m [ 3 ], * q = & m [ 6 ];

    ++ q;
    qDebug () << a + m [d / c] + b-- / * q + 10 + e--;

    p = m;
    qDebug () << e + * p + m [ 9 ] ++;

    return  0 ;
}
