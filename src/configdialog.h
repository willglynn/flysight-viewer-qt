#ifndef CONFIGDIALOG_H
#define CONFIGDIALOG_H

#include <QDialog>
#include <QListWidget>

#include "plotvalue.h"

namespace Ui {
class ConfigDialog;
}

class ConfigDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ConfigDialog(QWidget *parent = 0);
    ~ConfigDialog();

    void setUnits(PlotValue::Units units);
    PlotValue::Units units() const;

private:
    Ui::ConfigDialog *ui;

private slots:
    void ChangePage(QListWidgetItem *current, QListWidgetItem *previous);
};

#endif // CONFIGDIALOG_H
