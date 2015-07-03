#include "test_mylist.h"
#include "mylist.h"

Test_MyList::Test_MyList(QObject *parent) : QObject(parent)
{
}

void Test_MyList::addLast()
{
       MyList A;
       A.addLast(1);
       QCOMPARE(A.getItem(0), 1);
       A.addLast(2);
       QCOMPARE(A.getItem(1), 2);
}

void Test_MyList::count()
{
    MyList B;
    B.addLast(1);
    QCOMPARE(B.count(), 1);

}

void Test_MyList::removeLast()
{
    MyList C;
    C.addLast(3);
    QCOMPARE(C.removeLast(), 3);
}
