#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include <QtDebug>
//#include <iostream>
#include <QTestEventList>
#include <QMessageBox>

void MainWindow::testLineEdits()
{
    if(!testlock.tryLock())
    {
        QMessageBox msgBox;
        msgBox.setText("Error: Another test is running.");
        msgBox.exec();
        return;
    }

    ui->inputHighLambda->setText("");
    ui->inputHighPhi->setText("");
    ui->inputLowLambda->setText("");
    ui->inputLowPhi->setText("");
    ui->okLabel->hide();

    QTestEventList eventsHL;
    QTestEventList eventsLL;
    QTestEventList eventsHP;
    QTestEventList eventsLP;
    QString correct("1234.56789"); //Correct Value

    eventsHL.addKeyClicks("a1b2c3d4.e5f6g7h8i9j"); //CASE: Mixed Numbers and Characters
    eventsHL.addDelay(500);
    eventsHL.simulate(ui->inputHighLambda);
    QCOMPARE(ui->inputHighLambda->text(), correct);

    eventsLL.addKeyClicks("!@#$%1234.*56(^$789"); //CASE: Mixed Numbers and Symbols
    eventsLL.addDelay(500);
    eventsLL.simulate(ui->inputLowLambda);
    QCOMPARE(ui->inputLowLambda->text(), correct);

    eventsHP.addKeyClicks("1$2d3^4vb.5@#FDR^6*$#7FD8%GF9"); //CASE: Mixed Numbers, Characters, & Symbols
    eventsHP.addDelay(500);
    eventsHP.simulate(ui->inputHighPhi);
    QCOMPARE(ui->inputHighPhi->text(), correct);

    eventsLP.addKeyClicks("1234.567890"); //CASE: More than 5 decimals
    eventsLP.addDelay(500);
    eventsLP.simulate(ui->inputLowPhi);
    QCOMPARE(ui->inputLowPhi->text(), correct);

    ui->errorLabel->hide();
    ui->okLabel->setText("TEST COMPLETED WITH NO ERRORS");
    ui->okLabel->show();

    testlock.unlock();
}

void MainWindow::testProcessInput()
{
    if(!testlock.tryLock())
    {
        QMessageBox msgBox;
        msgBox.setText("Error: Another test is running.");
        msgBox.exec();
        return;
    }

    ui->inputHighLambda->setText("");
    ui->inputHighPhi->setText("");
    ui->inputLowLambda->setText("");
    ui->inputLowPhi->setText("");
    ui->okLabel->hide();

    QTestEventList events;
    QTestEventList eventsHL;
    QTestEventList eventsLL;
    QTestEventList eventsHP;
    QTestEventList eventsLP;
    QString value1("Please fill in all input values");
    QString value2("Make sure the values are in the corresponding spot");

    events.addMouseClick(Qt::LeftButton);
    events.addDelay(1000);
    events.simulate(ui->runButton);
    QCOMPARE(ui->errorLabel->text(), value1); //CASE: Not all input fields are filled in

    eventsHL.addKeyClicks("8");
    eventsHL.addDelay(500);
    eventsHL.simulate(ui->inputHighLambda);
    eventsLL.addKeyClicks("9");
    eventsLL.addDelay(500);
    eventsLL.simulate(ui->inputLowLambda);
    eventsHP.addKeyClicks("1");
    eventsHP.addDelay(500);
    eventsHP.simulate(ui->inputHighPhi);
    eventsLP.addKeyClicks("2");
    eventsLP.addDelay(500);
    eventsLP.simulate(ui->inputLowPhi);
    events.simulate(ui->runButton);
    QCOMPARE(ui->errorLabel->text(), value2); //CASE: Values not in correct order(ie. High is not > Low)

    ui->errorLabel->hide();
    ui->okLabel->setText("TEST COMPLETED WITH NO ERRORS");
    ui->okLabel->show();

    testlock.unlock();
}

void MainWindow::testCompute()
{
    if(!testlock.tryLock())
    {
        QMessageBox msgBox;
        msgBox.setText("Error: Another test is running.");
        msgBox.exec();
        return;
    }

    ui->inputHighLambda->setText("");
    ui->inputHighPhi->setText("");
    ui->inputLowLambda->setText("");
    ui->inputLowPhi->setText("");
    ui->okLabel->hide();

    QTestEventList events;
    QTestEventList eventsHL;
    QTestEventList eventsLL;
    QTestEventList eventsHP;
    QTestEventList eventsLP;

    //CASE 1: Deltas are equal
    eventsHL.addKeyClicks("8");
    eventsHL.addDelay(500);
    eventsHL.simulate(ui->inputHighLambda);
    eventsLL.addKeyClicks("2");
    eventsLL.addDelay(500);
    eventsLL.simulate(ui->inputLowLambda);
    eventsHP.addKeyClicks("4");
    eventsHP.addDelay(500);
    eventsHP.simulate(ui->inputHighPhi);
    eventsLP.addKeyClicks("1");
    eventsLP.addDelay(500);
    eventsLP.simulate(ui->inputLowPhi);
    events.addMouseClick(Qt::LeftButton);
    events.addDelay(500);
    events.simulate(ui->runButton);
    QCOMPARE(ui->okLabel->text(), QString("The points are the same"));

    //CASE 2: Delta Lambda is Greater
    eventsLP.clear();
    eventsLP.addKeyClick(Qt::Key_Backspace);
    eventsLP.addKeyClick('3');
    eventsLP.addDelay(500);
    eventsLP.simulate(ui->inputLowPhi);
    events.simulate(ui->runButton);
    QCOMPARE(ui->okLabel->text(), QString("New points are listed"));
    QCOMPARE(ui->resultHighPhi->text(), QString("6"));

    //CASE 3: 2*Delta Phi is Greater
    eventsHP.clear();
    eventsHP.addKeyClick(Qt::Key_Backspace);
    eventsHP.addKeyClick('6');
    eventsHP.addDelay(500);
    eventsHP.simulate(ui->inputHighPhi);
    eventsLP.clear();
    eventsLP.addKeyClick(Qt::Key_Backspace);
    eventsLP.addKeyClick('2');
    eventsLP.addDelay(500);
    eventsLP.simulate(ui->inputLowPhi);
    events.simulate(ui->runButton);
    QCOMPARE(ui->okLabel->text(), QString("New points are listed"));
    QCOMPARE(ui->resultHighLambda->text(), QString("10"));

    ui->errorLabel->hide();
    ui->okLabel->setText("TEST COMPLETED WITH NO ERRORS");
    ui->okLabel->show();

    testlock.unlock();
}
