/********************************************************************************
** Form generated from reading UI file 'AnimationTest.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMATIONTEST_H
#define UI_ANIMATIONTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnimationTestClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AnimationTestClass)
    {
        if (AnimationTestClass->objectName().isEmpty())
            AnimationTestClass->setObjectName(QStringLiteral("AnimationTestClass"));
        AnimationTestClass->resize(600, 400);
        menuBar = new QMenuBar(AnimationTestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        AnimationTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AnimationTestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        AnimationTestClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(AnimationTestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        AnimationTestClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(AnimationTestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AnimationTestClass->setStatusBar(statusBar);

        retranslateUi(AnimationTestClass);

        QMetaObject::connectSlotsByName(AnimationTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *AnimationTestClass)
    {
        AnimationTestClass->setWindowTitle(QApplication::translate("AnimationTestClass", "AnimationTest", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AnimationTestClass: public Ui_AnimationTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMATIONTEST_H
