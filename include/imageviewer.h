#ifndef IMAGEVIEWER_H
#define IMAGEVIEWER_H

#include <QMainWindow>
#include <QImage>

#if defined(QT_PRINTSUPPORT_LIB)

#  include <QtPrintSupport/qtprintsupportglobal.h>

#  if QT_CONFIG(printer)

#    include <QPrinter>
#include <opencv2/core/mat.hpp>

#  endif
#endif

QT_BEGIN_NAMESPACE
class QAction;

class QLabel;

class QMenu;

class QScrollArea;

class QScrollBar;

QT_END_NAMESPACE


class ImageViewer : public QMainWindow {
Q_OBJECT

public:
    ImageViewer(QWidget *parent = nullptr);

    bool loadFile(const QString &);

private slots:

    void open();

    void saveAs();

    void print();

    void copy();

    void paste();

    void rotate();

    void zoomIn();

    void zoomOut();

    void normalSize();

    void fitToWindow();

    void about();

private:
    void createActions();

    void updateActions();

    bool saveFile(const QString &fileName);

    void setImage(const QImage &newImage);

    void scaleImage(double factor);

    void adjustScrollBar(QScrollBar *scrollBar, double factor);

    void wheelEvent(QWheelEvent *event) override;

    QImage image;
    QLabel *imageLabel;
    QScrollArea *scrollArea;
    double scaleFactor = 1;

#if defined(QT_PRINTSUPPORT_LIB) && QT_CONFIG(printer)
    QPrinter printer;
#endif

    QAction *saveAsAct;
    QAction *printAct;
    QAction *copyAct;
    QAction *rotateAct;
    QAction *zoomInAct;
    QAction *zoomOutAct;
    QAction *normalSizeAct;
    QAction *fitToWindowAct;
};

#endif