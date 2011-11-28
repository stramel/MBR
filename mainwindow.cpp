#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <QDesktopWidget>
#include <stdio.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QRect frect = frameGeometry();
    frect.moveCenter(QDesktopWidget().availableGeometry().center());
    move(frect.topLeft());

    QDoubleValidator *validator = new QDoubleValidator(-9999, 9999, 5, this);
    validator->setNotation(QDoubleValidator::StandardNotation);
    ui->inputHighLambda->setValidator(validator);
    ui->inputLowLambda->setValidator(validator);
    ui->inputHighPhi->setValidator(validator);
    ui->inputLowPhi->setValidator(validator);

    connect(ui->runButton, SIGNAL(clicked()), this, SLOT(processInput()));
    connect(ui->menuAbout, SIGNAL(triggered()), this, SLOT(showAbout()));

    connect(ui->menuLineEditTest, SIGNAL(triggered()), this, SLOT(testLineEdits()));
    connect(ui->menuProcessInputTest, SIGNAL(triggered()), this, SLOT(testProcessInput()));
    connect(ui->menuComputeTest, SIGNAL(triggered()), this, SLOT(testCompute()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::processInput()
{
    ui->okLabel->hide();
    float hL = ui->inputHighLambda->text().toFloat();
    float lL = ui->inputLowLambda->text().toFloat();
    float hP = ui->inputHighPhi->text().toFloat();
    float lP = ui->inputLowPhi->text().toFloat();

    if(hL == 0.0 || lL == 0.0 || hP == 0.0 || lP == 0.0)
    {
        ui->errorLabel->setText("Please fill in all input values");
        ui->errorLabel->show();
    }
    else if (hL < lL || hP < lP)
    {
        ui->errorLabel->setText("Make sure the values are in the corresponding spot");
        ui->errorLabel->show();
    }
    else
    {
        compute(hL, lL, hP, lP);
    }
}

void MainWindow::compute(float hL, float lL, float hP, float lP)
{
    float dL = hL - lL;
    float dP = 2 * (hP - lP);
    ui->errorLabel->hide();
    if(dP < dL)
    {
        hP = lP + (dL / 2);
        ui->okLabel->setText("New points are listed");
        ui->okLabel->show();
    }
    else if (dP > dL)
    {
        hL = lL + dP;
        ui->okLabel->setText("New points are listed");
        ui->okLabel->show();
    }
    else
    {
        ui->okLabel->setText("The points are the same");
        ui->okLabel->show();
    }
    ui->resultHighLambda->setText(QString::number(hL));
    ui->resultLowLambda->setText(QString::number(lL));
    ui->resultHighPhi->setText(QString::number(hP));
    ui->resultLowPhi->setText(QString::number(lP));
}

void MainWindow::showAbout()
{
    QDialog about(this);
    about.setWindowTitle("About");
    about.setFixedSize(245,165);
    about.setWindowModality(Qt::WindowModal);
    QVBoxLayout *layout = new QVBoxLayout;
    QLabel *label = new QLabel("BLAH");
    label->setWordWrap(true);
    QPushButton *ok = new QPushButton("Ok");
    connect(ok, SIGNAL(clicked()), &about, SLOT(hide()));
    ok->setFixedWidth(75);
    layout->addWidget(label, 0, Qt::AlignAbsolute);
    layout->addWidget(ok, 0, Qt::AlignHCenter);
    about.setLayout(layout);
    about.exec();
}
