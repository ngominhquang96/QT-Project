#include "phim.h"

#include <QDir>
#include <QDebug>
Phim::Phim(QObject *parent):QThread(parent)
{

}
void Phim:: run(){
    for(int i = 0 ; i <10000; i++){
        qDebug() << "phim" <<i<<"\n";
    }

}
