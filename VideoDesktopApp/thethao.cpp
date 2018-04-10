#include "thethao.h"

#include <QDir>
#include <QDebug>
#include <QString>
#include<QDirIterator>
#include<QStringListModel>// duoc ke thua tu QAbstractListModel nen co the su dung

TheThao::TheThao(QObject *parent):QThread(parent)
{

}
void TheThao:: run(){
    QStringListModel list= new QStringListModel();
    QDirIterator it("G:/Video/thethao", QDirIterator::Subdirectories);
    while (it.hasNext()) {
        qDebug() << it.next();
    }
    for(int i = 0 ; i <10000; i++){
        qDebug() << "thethao" <<i<<"\n";
    }

}
