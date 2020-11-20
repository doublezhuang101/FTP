#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_FTP.h"
#include "client.h"
#include "server.h"
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include<iostream>
using namespace std;

class FTP : public QMainWindow
{
	Q_OBJECT

public:
	FTP(QWidget *parent = Q_NULLPTR);
	void test();
private Q_SLOT:
	void show_client();
	void show_server();
private:
	Ui::FTPClass ui;
	client *client_view;
	server *server_view;
};