#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTimer * pTimerP1;
    QTimer * pTimerP2;
    short timeLeftP1;
    short timeLeftP2;
    void updateProgressBars();
    int currentPlayer;

public slots:
    void startGame();
    void stopGame();
    void pauseGame();
    void handleTimer(short);
    void handleTurns();

    void start();
    void update();

};
#endif // MAINWINDOW_H
