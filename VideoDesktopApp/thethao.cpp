#include "thethao.h"

#include <QDir>
#include <QDebug>
#include <dirent.h>
#include <QString>

TheThao::TheThao(QObject *parent):QThread(parent)
{

}
void TheThao:: run(){
    qDebug() <<"da test den day"<<"\n";
    struct dirent *entry;
    DIR *dir;
    dir = opendir("G:/Video/thethao");
    QString path="G:/Video/thethao";
    if(!dir){
        qDebug() << "Folder Empty" ;
    }else{
        qDebug() <<"da test den day 2"<<"\n";
       entry=readdir(dir);
       int i=0;
        while (entry !=NULL) {
            if(entry->d_name[0]!='.'){
                QString filename=path.append("/").append(entry->d_name);
                qDebug() <<"Da test den day"<<"\n";
            }else{
                qDebug() <<"Ko test vào được"<< i<<"\n";
            }
            i++;
        }
        qDebug() <<"Da ra ngoai vong while"<<"\n";
    }
    for(int i = 0 ; i <10000; i++){
        qDebug() << "thethao" <<i<<"\n";
    }

}
