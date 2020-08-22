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
    params=ui->lineEdit->text();
    post=ui->lineEdit->text();
    pyPath=ui->lineEdit->text();



}

void Widget::on_xss_button_clicked(bool checked)
{
    if(checked) form="XSS";
}

void Widget::on_sql_button_clicked(bool checked)
{
    if(checked) form="SQL Injection";
}
