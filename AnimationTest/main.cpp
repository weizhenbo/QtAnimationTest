#include "AnimationTest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	AnimationTest w;
	w.show();
	return a.exec();
}
