#include "amthuc.h"
#include <QDir>

AmThuc::AmThuc(QObject *parent):QThread(parent)
{

}
void AmThuc:: run(){
    QDir dir("G:/Video/amthuc");

}
