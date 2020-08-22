#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget(); 
    QString url;
    QString path;
    QString cookie;
    QString params;
    QString post;
    QString pyPath;
    QString form;

private slots:
    void on_starButton_clicked();

    void on_xss_button_clicked(bool checked);

    void on_sql_button_clicked(bool checked);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
