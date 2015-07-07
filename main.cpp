
#include <QCoreApplication>
#include "test_mylist.h"
#include "mylist.h"
#include "obr.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTest::qExec(new Test_MyList, argc, argv);

    MyList A;
    Obr B;
    QObject::connect(&A, SIGNAL(countChanged(int)),&B, SLOT(countChanged( int)));

    QObject::connect(&A, SIGNAL(countChanged(int)),&A, SLOT(setcount()));

    A.addLast(1);
    cout<<A.getk()<<endl;
    A.addLast(2);
    A.addLast(3);
    cout<<A.getk()<<endl;

    return 0;
}

