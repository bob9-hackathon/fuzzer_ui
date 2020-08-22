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

private slots:
    void on_starButton_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
