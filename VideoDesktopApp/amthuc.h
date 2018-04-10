#ifndef AMTHUC_H
#define AMTHUC_H

#include<QThread>
class AmThuc : public QThread
{
    Q_OBJECT;
public:
   // AmThuc();
    explicit AmThuc(QObject *parent=0);
protected:
    void run();

};




#endif // AMTHUC_H
