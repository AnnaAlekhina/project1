#ifndef MYLIST_H
#define MYLIST_H

#include <QObject>

typedef int MyListData;

struct ListNode
{
    MyListData data;
    ListNode *next;
};

class MyList : public QObject
{
    Q_OBJECT
protected:
    ListNode *first;
    int k;
public:
    explicit MyList(QObject *parent = 0);

    ~MyList();

    void addLast(MyListData newData);
    MyListData removeLast();
    MyListData getItem(int index);
    int count();
    int getk();

public slots:
    void setcount();

signals:
    void countChanged(int newcount);
};

#endif // MYLIST_H
