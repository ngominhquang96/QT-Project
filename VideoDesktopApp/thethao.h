#ifndef THETHAO_H
#define THETHAO_H

#include <QThread>

class TheThao : public QThread
{
    Q_OBJECT;
public:
      explicit TheThao(QObject *parent=0);

protected:
    void run();
};



#endif // THETHAO_H


