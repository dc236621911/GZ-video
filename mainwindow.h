#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QLabel;

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
    void on_action_N_triggered();

    void on_action_Q_triggered();

    void on_action_T_triggered();

    void on_action_I_triggered();

    void on_action_P_triggered();

    void on_action_H_triggered();

    void on_action_L_triggered();

    void on_action_B_triggered();

private:
    Ui::MainWindow *ui;
    QLabel *statusLabel;
};

#endif // MAINWINDOW_H
