#include "RollPicture.h"
#include <QtWidgets/QApplication>
#include <QDir>
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QStringList list;
	QString dirstr = QCoreApplication::applicationDirPath();
	QDir dir(dirstr);
	int piccount = 0;
	for each (auto var in dir.entryInfoList(QDir::Files))
	{
		if (var.suffix() == "jpg" || var.suffix() == "png")
		{
			list.append(var.filePath());
			piccount++;
		}
	}

	RollPicture w(list,  QSize(1140, 723), piccount, 5*1000, 3*1000);
	w.start();
	w.show();

	return a.exec();
}
