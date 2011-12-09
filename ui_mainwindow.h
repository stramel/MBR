/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Dec 1 18:31:13 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *menuUserGuide;
    QAction *menuAbout;
    QAction *menuExit;
    QAction *menuTest;
    QAction *menuLineEditTest;
    QAction *menuProcessInputTest;
    QAction *menuComputeTest;
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *runButton;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *ResultBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *labelHighPhi;
    QLabel *labelLowPhi;
    QLabel *labelLowLambda;
    QLabel *labelHighLambda;
    QLabel *resultHighLambda;
    QLabel *resultLowLambda;
    QLabel *resultHighPhi;
    QLabel *resultLowPhi;
    QGroupBox *InputBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *IlabelHighLambda;
    QLineEdit *inputHighLambda;
    QLineEdit *inputLowLambda;
    QLineEdit *inputHighPhi;
    QLineEdit *inputLowPhi;
    QLabel *IlabelLowLambda;
    QLabel *IlabelHighPhi;
    QLabel *IlabelLowPhi;
    QLabel *errorLabel;
    QLabel *okLabel;
    QMenuBar *menuBar;
    QMenu *menuMBR_Tile_Cache;
    QMenu *menuHelp;
    QMenu *menuTests;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(391, 219);
        QIcon icon;
        icon.addFile(QString::fromUtf8("D:/Downloads/Map-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        menuUserGuide = new QAction(MainWindow);
        menuUserGuide->setObjectName(QString::fromUtf8("menuUserGuide"));
        menuAbout = new QAction(MainWindow);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuExit = new QAction(MainWindow);
        menuExit->setObjectName(QString::fromUtf8("menuExit"));
        menuTest = new QAction(MainWindow);
        menuTest->setObjectName(QString::fromUtf8("menuTest"));
        menuLineEditTest = new QAction(MainWindow);
        menuLineEditTest->setObjectName(QString::fromUtf8("menuLineEditTest"));
        menuProcessInputTest = new QAction(MainWindow);
        menuProcessInputTest->setObjectName(QString::fromUtf8("menuProcessInputTest"));
        menuComputeTest = new QAction(MainWindow);
        menuComputeTest->setObjectName(QString::fromUtf8("menuComputeTest"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 150, 391, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        runButton = new QPushButton(horizontalLayoutWidget);
        runButton->setObjectName(QString::fromUtf8("runButton"));

        horizontalLayout->addWidget(runButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        ResultBox = new QGroupBox(centralWidget);
        ResultBox->setObjectName(QString::fromUtf8("ResultBox"));
        ResultBox->setGeometry(QRect(210, 10, 171, 131));
        gridLayoutWidget = new QWidget(ResultBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, 20, 151, 101));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelHighPhi = new QLabel(gridLayoutWidget);
        labelHighPhi->setObjectName(QString::fromUtf8("labelHighPhi"));
        labelHighPhi->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        gridLayout->addWidget(labelHighPhi, 2, 0, 1, 1);

        labelLowPhi = new QLabel(gridLayoutWidget);
        labelLowPhi->setObjectName(QString::fromUtf8("labelLowPhi"));
        labelLowPhi->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        gridLayout->addWidget(labelLowPhi, 3, 0, 1, 1);

        labelLowLambda = new QLabel(gridLayoutWidget);
        labelLowLambda->setObjectName(QString::fromUtf8("labelLowLambda"));
        labelLowLambda->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        gridLayout->addWidget(labelLowLambda, 1, 0, 1, 1);

        labelHighLambda = new QLabel(gridLayoutWidget);
        labelHighLambda->setObjectName(QString::fromUtf8("labelHighLambda"));
        labelHighLambda->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        gridLayout->addWidget(labelHighLambda, 0, 0, 1, 1);

        resultHighLambda = new QLabel(gridLayoutWidget);
        resultHighLambda->setObjectName(QString::fromUtf8("resultHighLambda"));
        resultHighLambda->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(resultHighLambda, 0, 1, 1, 1);

        resultLowLambda = new QLabel(gridLayoutWidget);
        resultLowLambda->setObjectName(QString::fromUtf8("resultLowLambda"));
        resultLowLambda->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(resultLowLambda, 1, 1, 1, 1);

        resultHighPhi = new QLabel(gridLayoutWidget);
        resultHighPhi->setObjectName(QString::fromUtf8("resultHighPhi"));
        resultHighPhi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(resultHighPhi, 2, 1, 1, 1);

        resultLowPhi = new QLabel(gridLayoutWidget);
        resultLowPhi->setObjectName(QString::fromUtf8("resultLowPhi"));
        resultLowPhi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(resultLowPhi, 3, 1, 1, 1);

        InputBox = new QGroupBox(centralWidget);
        InputBox->setObjectName(QString::fromUtf8("InputBox"));
        InputBox->setGeometry(QRect(10, 10, 181, 131));
        formLayoutWidget = new QWidget(InputBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 20, 161, 101));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        IlabelHighLambda = new QLabel(formLayoutWidget);
        IlabelHighLambda->setObjectName(QString::fromUtf8("IlabelHighLambda"));
        IlabelHighLambda->setStyleSheet(QString::fromUtf8("font-weight:bold;"));
        IlabelHighLambda->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, IlabelHighLambda);

        inputHighLambda = new QLineEdit(formLayoutWidget);
        inputHighLambda->setObjectName(QString::fromUtf8("inputHighLambda"));

        formLayout->setWidget(0, QFormLayout::FieldRole, inputHighLambda);

        inputLowLambda = new QLineEdit(formLayoutWidget);
        inputLowLambda->setObjectName(QString::fromUtf8("inputLowLambda"));

        formLayout->setWidget(1, QFormLayout::FieldRole, inputLowLambda);

        inputHighPhi = new QLineEdit(formLayoutWidget);
        inputHighPhi->setObjectName(QString::fromUtf8("inputHighPhi"));

        formLayout->setWidget(2, QFormLayout::FieldRole, inputHighPhi);

        inputLowPhi = new QLineEdit(formLayoutWidget);
        inputLowPhi->setObjectName(QString::fromUtf8("inputLowPhi"));

        formLayout->setWidget(3, QFormLayout::FieldRole, inputLowPhi);

        IlabelLowLambda = new QLabel(formLayoutWidget);
        IlabelLowLambda->setObjectName(QString::fromUtf8("IlabelLowLambda"));
        IlabelLowLambda->setStyleSheet(QString::fromUtf8("font-weight:bold;"));
        IlabelLowLambda->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, IlabelLowLambda);

        IlabelHighPhi = new QLabel(formLayoutWidget);
        IlabelHighPhi->setObjectName(QString::fromUtf8("IlabelHighPhi"));
        IlabelHighPhi->setStyleSheet(QString::fromUtf8("font-weight:bold;"));
        IlabelHighPhi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, IlabelHighPhi);

        IlabelLowPhi = new QLabel(formLayoutWidget);
        IlabelLowPhi->setObjectName(QString::fromUtf8("IlabelLowPhi"));
        IlabelLowPhi->setStyleSheet(QString::fromUtf8("font-weight:bold;"));
        IlabelLowPhi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, IlabelLowPhi);

        errorLabel = new QLabel(centralWidget);
        errorLabel->setObjectName(QString::fromUtf8("errorLabel"));
        errorLabel->setGeometry(QRect(0, 180, 389, 20));
        errorLabel->setStyleSheet(QString::fromUtf8("color:rgb(255,0,0);\n"
"font-weight:bold;\n"
""));
        errorLabel->setAlignment(Qt::AlignCenter);
        okLabel = new QLabel(centralWidget);
        okLabel->setObjectName(QString::fromUtf8("okLabel"));
        okLabel->setGeometry(QRect(0, 180, 391, 21));
        okLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);\n"
"font-weight:bold;\n"
""));
        okLabel->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 391, 18));
        menuMBR_Tile_Cache = new QMenu(menuBar);
        menuMBR_Tile_Cache->setObjectName(QString::fromUtf8("menuMBR_Tile_Cache"));
        menuMBR_Tile_Cache->setEnabled(true);
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuTests = new QMenu(menuBar);
        menuTests->setObjectName(QString::fromUtf8("menuTests"));
        MainWindow->setMenuBar(menuBar);
        QWidget::setTabOrder(inputHighLambda, inputLowLambda);
        QWidget::setTabOrder(inputLowLambda, inputHighPhi);
        QWidget::setTabOrder(inputHighPhi, inputLowPhi);
        QWidget::setTabOrder(inputLowPhi, runButton);

        menuBar->addAction(menuMBR_Tile_Cache->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuBar->addAction(menuTests->menuAction());
        menuMBR_Tile_Cache->addAction(menuExit);
        menuHelp->addAction(menuUserGuide);
        menuHelp->addAction(menuAbout);
        menuTests->addAction(menuLineEditTest);
        menuTests->addAction(menuProcessInputTest);
        menuTests->addAction(menuComputeTest);

        retranslateUi(MainWindow);
        QObject::connect(menuExit, SIGNAL(activated()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        menuUserGuide->setText(QApplication::translate("MainWindow", "User Guide", 0, QApplication::UnicodeUTF8));
        menuAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        menuExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        menuTest->setText(QApplication::translate("MainWindow", "Test", 0, QApplication::UnicodeUTF8));
        menuLineEditTest->setText(QApplication::translate("MainWindow", "Line Edit Validator", 0, QApplication::UnicodeUTF8));
        menuProcessInputTest->setText(QApplication::translate("MainWindow", "Test ProcessInput Function", 0, QApplication::UnicodeUTF8));
        menuComputeTest->setText(QApplication::translate("MainWindow", "Test Compute Function", 0, QApplication::UnicodeUTF8));
        runButton->setText(QApplication::translate("MainWindow", "Run", 0, QApplication::UnicodeUTF8));
        ResultBox->setTitle(QApplication::translate("MainWindow", "Results", 0, QApplication::UnicodeUTF8));
        labelHighPhi->setText(QApplication::translate("MainWindow", "<html><body>High &#966;:</body></html>", 0, QApplication::UnicodeUTF8));
        labelLowPhi->setText(QApplication::translate("MainWindow", "<html><body>Low &#966;:</body></html>", 0, QApplication::UnicodeUTF8));
        labelLowLambda->setText(QApplication::translate("MainWindow", "<html><body>Low &#955;:</body></html>", 0, QApplication::UnicodeUTF8));
        labelHighLambda->setText(QApplication::translate("MainWindow", "<html><body>High &#955;:</body></html>", 0, QApplication::UnicodeUTF8));
        resultHighLambda->setText(QString());
        resultLowLambda->setText(QString());
        resultHighPhi->setText(QString());
        resultLowPhi->setText(QString());
        InputBox->setTitle(QApplication::translate("MainWindow", "Input", 0, QApplication::UnicodeUTF8));
        IlabelHighLambda->setText(QApplication::translate("MainWindow", "<html><body>High &#955;</body></html>", 0, QApplication::UnicodeUTF8));
        IlabelLowLambda->setText(QApplication::translate("MainWindow", "<html><body>Low &#955;</body></html>", 0, QApplication::UnicodeUTF8));
        IlabelHighPhi->setText(QApplication::translate("MainWindow", "<html><body>High &#966;</body></html>", 0, QApplication::UnicodeUTF8));
        IlabelLowPhi->setText(QApplication::translate("MainWindow", "<html><body>Low &#966;</body></html>", 0, QApplication::UnicodeUTF8));
        errorLabel->setText(QString());
        okLabel->setText(QString());
        menuMBR_Tile_Cache->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuTests->setTitle(QApplication::translate("MainWindow", "Tests", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
