#pragma once

#include <QWidget>
#include "ui_server.h"

class server : public QWidget
{
	Q_OBJECT

public:
	server(QWidget *parent = Q_NULLPTR);
	~server();

private:
	Ui::server ui;
};
