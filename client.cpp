#include "client.h"
#include "ui_client.h"
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

client::client(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowTitle("�ͻ���");
	connect(ui.openButton, &QPushButton::clicked, this, &client::openFile);
	connect(ui.sendButton, &QPushButton::clicked, this, &client::send);
	ui.label->setText("��ǰ���ļ�");
	ui.openButton->setText("���ļ�");
	ui.sendButton->setText("�����ļ�");
}

client::~client()
{
}


void client::openFile() 
{
    filename = QFileDialog::getOpenFileName(this);
    if (!filename.isEmpty()) 
    {
		ui.openButton->setEnabled(true);
		ui.label->setText(QString("���ļ� %1 �ɹ�!").arg(filename));
	}
	else
	{
		QMessageBox::warning(this, tr("warning!"), tr("�ļ���ʧ��"));
	}
}

void client::send()
{
	
}