#pragma once

#include <QWidget>
#include <ui_client.h>
#include <qfiledialog.h>
#include <qmessagebox.h>
#include <QAbstractSocket>
class QTcpSocket;
class QFile;

class client : public QWidget
{
	Q_OBJECT

public:
	client(QWidget *parent = Q_NULLPTR);
	~client();
private slots:
	void openFile();
	void send();
	void startTransfer();
	void updateClientProgress(qint64);
	void displayError(QAbstractSocket::SocketError);
	void openBtnClicked();
	void sendBtnClicked();
private:
	Ui::client ui;
	QTcpSocket* tcpClient;
	QFile* localFile;
	qint64 totalBytes;
	qint64 bytesWritten;
	qint64 bytesToWrite;
	qint64 payloadSize;
	QString filename;
	QByteArray m_outBlock;
};
