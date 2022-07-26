#ifndef NARROWFABRICDEFECTDETECTIONSCREEN_H
#define NARROWFABRICDEFECTDETECTIONSCREEN_H

#include <QDialog>

namespace Ui {
class NarrowFabricDefectDetectionScreen;
}

class NarrowFabricDefectDetectionScreen : public QDialog
{
    Q_OBJECT

public:
    explicit NarrowFabricDefectDetectionScreen(QWidget *parent = nullptr);
    ~NarrowFabricDefectDetectionScreen();

private:
    Ui::NarrowFabricDefectDetectionScreen *ui;
};

#endif // NARROWFABRICDEFECTDETECTIONSCREEN_H
