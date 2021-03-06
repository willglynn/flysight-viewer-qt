#ifndef MAPVIEW_H
#define MAPVIEW_H

#include <QWebView>

class MainWindow;

class MapView : public QWebView
{
    Q_OBJECT
public:
    explicit MapView(QWidget *parent = 0);

    virtual QSize sizeHint() const;

    void setMainWindow(MainWindow *mainWindow) { mMainWindow = mainWindow; }

protected:
    void mouseMoveEvent(QMouseEvent *event);

private:
    MainWindow *mMainWindow;

public slots:
    void initView();
    void updateView();
};

#endif // MAPVIEW_H
