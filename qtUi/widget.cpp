#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_starButton_clicked()
{
    url=ui->lineEdit->text();
    path=ui->lineEdit->text();
    cookie=ui->lineEdit->text();


}
