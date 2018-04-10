#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QFileDialog>
#include <QProgressBar>
#include <QSlider>

#include <QHBoxLayout>
#include <QBoxLayout>

#include <QThread>
#include <amthuc.h>
#include <thethao.h>
#include <phim.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnPlay_clicked();

    void on_btnPause_clicked();

    void on_btnStop_clicked();

    void on_btnFullScreen_clicked();

    void on_actionOpen_triggered();

    void on_actionPlay_triggered();

    void on_actionPause_triggered();

    void on_actionStop_triggered();

    void on_actionClose_triggered();

    void on_actionAdd_New_triggered();

    void on_actionPrevious_triggered();

    void on_actionForward_triggered();

    void on_btnVolume_clicked();

    void on_actionFull_Screen_triggered();

    void on_btnTheThao_clicked();
    void on_btnAmThuc_clicked();
    void on_btnPhim_clicked();

private:
    Ui::MainWindow *ui;

    QMediaPlayer *player;
    QVideoWidget *vw;
    QProgressBar *progress;
    QSlider *volume;
    AmThuc *amthuc;
    TheThao *thethao;
    Phim * phim;
};

#endif // MAINWINDOW_H
