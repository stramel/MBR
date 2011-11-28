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
    void compute(float hL, float lL, float hP, float lP);


public slots:
    void processInput();
    void showAbout();

private:
    Ui::MainWindow *ui;

private slots:
    void testLineEdits();
    void testProcessInput();
    void testCompute();
};

#endif // MAINWINDOW_H
