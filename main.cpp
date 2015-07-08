<<<<<<< HEAD
=======
//
//
//
>>>>>>> 501033913c4730ab22707e43b794493f6a751b91

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

<<<<<<< HEAD
    QObject::connect(&A, SIGNAL(countChanged(int)),&A, SLOT(setcount()));
=======
    QObject::connect(&A, SIGNAL(countChanged(int)),&B, SLOT(setcount()));
>>>>>>> 501033913c4730ab22707e43b794493f6a751b91

    A.addLast(1);
    cout<<A.getk()<<endl;
    A.addLast(2);
    A.addLast(3);
<<<<<<< HEAD
    cout<<A.getk()<<endl;
=======
>>>>>>> 501033913c4730ab22707e43b794493f6a751b91

    return 0;
}

