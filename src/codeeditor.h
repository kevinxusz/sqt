#ifndef CODEEDITOR_H
#define CODEEDITOR_H

#include <QPlainTextEdit>

class CodeEditor : public QPlainTextEdit
{
    Q_OBJECT
public:
    CodeEditor(QWidget *parent = 0);
    void leftSideBarPaintEvent(QPaintEvent *event);
    int leftSideBarWidth();

protected:
    void resizeEvent(QResizeEvent *event) override;
    bool eventFilter(QObject *obj, QEvent *event) override;

private slots:
    void updateLeftSideBarWidth();
    void updateLeftSideBar(const QRect &rect, int dy);

private:
    QWidget *_leftSideBar;
};

#endif // CODEEDITOR_H
