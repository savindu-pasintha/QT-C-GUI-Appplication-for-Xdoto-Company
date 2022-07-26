#include "narrowfabricdefectdetectionscreen.h"
#include "ui_narrowfabricdefectdetectionscreen.h"

NarrowFabricDefectDetectionScreen::NarrowFabricDefectDetectionScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NarrowFabricDefectDetectionScreen)
{
    ui->setupUi(this);
}

NarrowFabricDefectDetectionScreen::~NarrowFabricDefectDetectionScreen()
{
    delete ui;
}
