#include "FTP.h"
#include "ui_FTP.h"
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

FTP::FTP(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setWindowTitle(QString::fromUtf8("计算机网络课设，2018023417"));
	ui.pushButton->setText("启动客户端");
	ui.pushButton_2->setText("启动监听服务器");
	ui.label->setText("计算机网络课设");
	connect(ui.pushButton, &QPushButton::clicked, this, &FTP::show_client);
	connect(ui.pushButton_2, &QPushButton::clicked, this, &FTP::show_server);
}

void FTP::show_client()
{
	client_view = new client();
	client_view->show();
}

void FTP::show_server()
{
	server_view = new server();
	server_view->show();
}

void FTP::test()
{
	for (int i = 0; i < 10; i++)
	{
		_sleep(500);
		QString tmp = QString::number(i);
		ui.label_2->setText(tmp);
	}
}
