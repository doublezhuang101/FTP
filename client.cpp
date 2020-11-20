#include "client.h"
#include "ui_client.h"
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

client::client(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowTitle("客户端");
	connect(ui.openButton, &QPushButton::clicked, this, &client::openFile);
	connect(ui.sendButton,&QPushButton::clicked,this,&client::send)
	ui.label->setText("当前无文件");
	ui.openButton->setText("打开文件");
	ui.sendButton->setText("发送文件");
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
		ui.label->setText(QString("打开文件 %1 成功!").arg(filename));
	}
	else
	{
		QMessageBox::warning(this, tr("warning!"), tr("文件打开失败"));
	}
}

void client::send()
{
	
}