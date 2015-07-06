#ifndef OBR_H
#define OBR_H

#include <QObject>

class Obr : public QObject
{
    Q_OBJECT
public:
    explicit Obr(QObject *parent = 0);

public slots:
    void countChanged(int newcount);
signals:
    void setcount();
};

#endif // OBR_H
