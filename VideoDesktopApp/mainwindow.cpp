#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    player = new QMediaPlayer(ui->widget);
    vw = new QVideoWidget(ui->widget);
    player->setVideoOutput(vw);
    QBoxLayout *layout = new QBoxLayout(QBoxLayout::TopToBottom);
    ui->widget->setLayout(layout);
    vw->resize(531,361);

    connect(player,&QMediaPlayer::positionChanged,ui->progressBar,&QProgressBar::setValue);
    connect(ui->progressBar,&QProgressBar::valueChanged,player,&QMediaPlayer::setPosition);
    amthuc = NULL;
    thethao = NULL;
    phim = NULL;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnPlay_clicked()
{
    player->play();
}

void MainWindow::on_btnPause_clicked()
{
    player->pause();
}

void MainWindow::on_btnStop_clicked()
{
    player->stop();
}

void MainWindow::on_btnFullScreen_clicked()
{
    if(this->isFullScreen() == false){
        this->showFullScreen();
    }else{
        this->showNormal();
    }
}

void MainWindow::on_actionOpen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this, "Open a File", "", "Video File (*.*)");
    on_btnStop_clicked();

    player->setMedia(QUrl::fromLocalFile(filename));

    on_btnPlay_clicked();
}

void MainWindow::on_actionPlay_triggered()
{
    player->play();
}

void MainWindow::on_actionPause_triggered()
{
    player->pause();
}

void MainWindow::on_actionStop_triggered()
{
    player->stop();
}

void MainWindow::on_actionClose_triggered()
{
    this->close();
}

void MainWindow::on_actionAdd_New_triggered()
{

}

void MainWindow::on_actionPrevious_triggered()
{

}

void MainWindow::on_actionForward_triggered()
{

}

void MainWindow::on_btnVolume_clicked()
{
    if(player->isMuted() == true){
        player->setMuted(false);
    }else{
        player->setMuted(true);
    }
}

void MainWindow::on_actionFull_Screen_triggered()
{
    if(this->isFullScreen() == false){
        this->showFullScreen();
    }else{
        this->showNormal();
    }
}

void MainWindow::on_btnTheThao_clicked()
{
    thethao = new TheThao();
    thethao->start();
}
void MainWindow::on_btnAmThuc_clicked()
{
    amthuc = new AmThuc();
    amthuc->start();
}


void MainWindow::on_btnPhim_clicked()
{
    phim = new Phim();
    phim->start();
}
