#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


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
    //! Opens a dialog for a new connection
    void openConnectDialog();
 //   void openAboutDialog();

private:
    Ui::MainWindow *ui;



};

#endif // MAINWINDOW_H
