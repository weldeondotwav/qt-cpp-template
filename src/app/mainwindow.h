#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <qgraphicsscene.h>
#include <qgraphicsview.h>
#include <qspinbox.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QGraphicsScene scene;
    QGraphicsRectItem *rectangle;
    QSpinBox *iterationsInput;
    QGraphicsView *view;
    void onButtonClicked();
};
#endif // WIDGET_H