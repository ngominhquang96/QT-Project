#ifndef PHIM_H
#define PHIM_H
#include <QThread>

class Phim : public QThread
{
    Q_OBJECT;
public:
   // AmThuc();
    explicit Phim(QObject *parent=0);

protected:
    void run();
};




#endif // AMTHUC_H
