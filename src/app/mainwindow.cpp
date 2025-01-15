#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <cstdlib>
#include <mylib.h>
#include <qdebug.h>
#include <qimage.h>
#include <qlogging.h>
#include <qnamespace.h>
#include <qobject.h>
#include <qpixmap.h>
#include <qpoint.h>

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  // Connect button click event to onButtonClicked callback
  connect(ui->pushButton, &QPushButton::clicked, this,
          &MainWindow::onButtonClicked);

  // Load image resource
  QPixmap imageResource = QPixmap(":/images/logo.png");
  ui->imageLabel->setPixmap(imageResource);
}

MainWindow::~MainWindow() { delete ui; }

// Click handler for UI button
void MainWindow::onButtonClicked() {
  qDebug() << "Clicked!";

  // Call to our internal library
  int newValue = getRandomInteger();

  ui->progressBar->setValue(newValue);
}
