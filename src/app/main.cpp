#include "mainwindow.h"
#include <QApplication>
#include <cstdio>
#include <qapplication.h>

// Creates and runs our application
int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  MainWindow w;

  w.show();
  return a.exec();
}