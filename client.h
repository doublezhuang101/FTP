#pragma once

#include <QWidget>
#include <ui_client.h>
#include <qfiledialog.h>
#include <qmessagebox.h>
#include <QAbstractSocket>

class client : public QWidget
{
	Q_OBJECT

public:
	client(QWidget *parent = Q_NULLPTR);
	~client();
private slots:
	void openFile();
	void send();
private:
	Ui::client ui;

	QFile* localFile;
	qint64 totalBytes;
	qint64 bytesWritten;
	qint64 bytesToWrite;
	qint64 payloadSize;
	QString filename;
};
