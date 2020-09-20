#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_AnimationTest.h"
#include <QPushButton>
#include <QLabel>
#include <QPropertyAnimation>
#include <QParallelAnimationGroup>

class AnimationTest : public QMainWindow
{
	Q_OBJECT

public:
	AnimationTest(QWidget *parent = Q_NULLPTR);
	void initConnect();
private:
	Ui::AnimationTestClass ui;
	QPushButton *m_bt1;
	QLabel *m_edit1 = new QLabel(this);
	QLabel *m_edit2 = new QLabel(this);
	QParallelAnimationGroup *m_group;
	
private slots:
	void startAnimation();
};
