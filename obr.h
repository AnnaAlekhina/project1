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
<<<<<<< HEAD

=======
signals:
    void setcount();
>>>>>>> 501033913c4730ab22707e43b794493f6a751b91
};

#endif // OBR_H
