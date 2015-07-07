#include "obr.h"
#include <iostream>
using namespace std;

Obr::Obr(QObject *parent) : QObject(parent)
{

}

 void Obr::countChanged(int newcount){
cout<<"count "<<newcount<<endl;

}
