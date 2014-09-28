#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H

#include <QtOpenGL>
#include <QGLWidget>

class MyGLWidget : public QGLWidget{

  Q_OBJECT // must include this if you use Qt signals/slots


public:
    MyGLWidget(QWidget *parent = NULL)
        : QGLWidget(parent) {}


protected:
    // Set up the rendering context, define display lists etc.:
   void initializeGL();
   // draw the scene:
   void paintGL();
   // setup viewport, projection etc.:
   void resizeGL (int width, int height);
};



#endif // MYGLWIDGET_H
