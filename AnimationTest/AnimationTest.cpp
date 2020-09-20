#include "AnimationTest.h"


AnimationTest::AnimationTest(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	m_bt1 = new QPushButton(this);
	initConnect();
	m_edit1->setText(QStringLiteral("指定移动内容1"));
	m_edit1->setStyleSheet("color:rgb(200,100,0)");
	m_bt1->setText(QStringLiteral("动画测试1"));
	m_edit2->setText(QStringLiteral("指定移动内容2"));
	m_edit2->move(this->width()*0.3, this->height()*0.3);
	m_edit1->move(this->width()*0.5, this->height()*0.5);
	m_bt1->move(100, 100);
}

void AnimationTest::initConnect()
{
	connect(m_bt1, &QPushButton::clicked, this, &AnimationTest::startAnimation);
	QPropertyAnimation *pAnimation1 = new QPropertyAnimation(m_edit1, "geometry");
	pAnimation1->setDuration(1000);
	pAnimation1->setStartValue(QRect(100, 100, 100, 30));
	pAnimation1->setEndValue(QRect(0, 0, 100, 30));
	pAnimation1->setEasingCurve(QEasingCurve::OutBounce);
	m_group = new QParallelAnimationGroup(this);
	QPropertyAnimation *pAnimation2 = new QPropertyAnimation(m_edit2, "geometry");
	pAnimation2->setDuration(1000);
	pAnimation2->setStartValue(QRect(200, 200, 100, 30));
	pAnimation2->setEndValue(QRect(280, 280, 100, 30));
	pAnimation2->setEasingCurve(QEasingCurve::InCirc);
	m_group = new QParallelAnimationGroup(this);
	m_group->addAnimation(pAnimation1);
	m_group->addAnimation(pAnimation2);

}

void AnimationTest::startAnimation()
{
	m_group->start();
}