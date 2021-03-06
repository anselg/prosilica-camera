/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include "glhistogramwidget.h"
#include "glvideowidget.h"
#include "roicombobox.h"
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowUI
{
public:
  QAction* snapshotAction;
  QAction* recordAction;
  QAction* closeFileAction;
  QAction* showVideoAction;
  QAction* showHistogramAction;
  QAction* messageAction;
  QAction* subwindowsAction;
  QWidget* centralwidget;
  QGridLayout* gridLayout_2;
  QTabWidget* tabWidget;
  QWidget* basicTab;
  QVBoxLayout* verticalLayout_2;
  QHBoxLayout* horizontalLayout_18;
  QVBoxLayout* verticalLayout_15;
  QGroupBox* cameraBox;
  QFormLayout* formLayout;
  QLabel* label;
  QHBoxLayout* horizontalLayout_4;
  QComboBox* cameraSelector;
  QPushButton* refreshCamerasButton;
  QLabel* label_9;
  QHBoxLayout* horizontalLayout_7;
  QSpinBox* fpsSpinbox;
  QLabel* label_14;
  QLabel* actualFPS;
  QLabel* label_2;
  QComboBox* pixelFormatSelector;
  QLabel* label_3;
  QLabel* cameraMTUDescription;
  QLabel* label_13;
  QLabel* bandwidthDescription;
  QSpacerItem* verticalSpacer;
  QGroupBox* Exposure;
  QHBoxLayout* horizontalLayout_3;
  QVBoxLayout* verticalLayout_4;
  QLabel* label_10;
  QSlider* gainSlider;
  QHBoxLayout* horizontalLayout_9;
  QDoubleSpinBox* gainSpinbox;
  QPushButton* editGainButton;
  QPushButton* gainAutoButton;
  QVBoxLayout* verticalLayout_5;
  QLabel* label_11;
  QSlider* exposureSlider;
  QHBoxLayout* horizontalLayout_10;
  QDoubleSpinBox* exposureSpinbox;
  QPushButton* editExposureButton;
  QPushButton* exposureAutoButton;
  QGroupBox* roiBox;
  QVBoxLayout* verticalLayout_3;
  QFormLayout* formLayout_2;
  QLabel* label_5;
  QSpinBox* xSpinbox;
  QLabel* label_6;
  QSpinBox* ySpinbox;
  QLabel* label_7;
  QSpinBox* wSpinbox;
  QLabel* label_8;
  QSpinBox* hSpinbox;
  QLabel* label_4;
  QSpinBox* binSpinBox;
  QPushButton* applyROIButton;
  QPushButton* resetROIButton;
  QFrame* frame;
  QPushButton* pickROIButton;
  QArv::ROIcomboBox* ROIsizeCombo;
  QSpacerItem* verticalSpacer_2;
  QWidget* settingsTab;
  QGridLayout* gridLayout_3;
  QVBoxLayout* verticalLayout_16;
  QGroupBox* transformBox;
  QVBoxLayout* verticalLayout_6;
  QCheckBox* invertColors;
  QCheckBox* flipHorizontal;
  QCheckBox* flipVertical;
  QComboBox* rotationSelector;
  QSpacerItem* verticalSpacer_5;
  QGroupBox* settingsBox;
  QFormLayout* formLayout_3;
  QLabel* label_22;
  QSpinBox* sliderUpdateSpinbox;
  QLabel* label_23;
  QSpinBox* histogramUpdateSpinbox;
  QLabel* label_24;
  QSpinBox* statusTimeoutSpinbox;
  QLabel* label_25;
  QSpinBox* streamFramesSpinbox;
  QCheckBox* nocopyCheck;
  QVBoxLayout* verticalLayout_17;
  QGroupBox* miscBox;
  QVBoxLayout* verticalLayout_7;
  QCheckBox* dropInvalidFrames;
  QCheckBox* markClipped;
  QCheckBox* useFastInterpolator;
  QSpacerItem* verticalSpacer_4;
  QGroupBox* postprocBox;
  QVBoxLayout* verticalLayout_12;
  QHBoxLayout* horizontalLayout_17;
  QToolButton* postprocAddButton;
  QPushButton* postprocRemoveButton;
  QListView* postprocList;
  QWidget* recordingTab;
  QVBoxLayout* verticalLayout_11;
  QVBoxLayout* verticalLayout_10;
  QGroupBox* snapshotBox;
  QFormLayout* formLayout_5;
  QLabel* label_15;
  QHBoxLayout* horizontalLayout_8;
  QLineEdit* snappathEdit;
  QPushButton* chooseSnappathButton;
  QLabel* label_21;
  QLineEdit* snapbasenameEdit;
  QLabel* label_16;
  QHBoxLayout* horizontalLayout_11;
  QRadioButton* snapshotRaw;
  QRadioButton* snapshotPNG;
  QSpacerItem* verticalSpacer_3;
  QGroupBox* videoBox;
  QFormLayout* formLayout_6;
  QLabel* label_12;
  QHBoxLayout* horizontalLayout_5;
  QLineEdit* filenameEdit;
  QPushButton* chooseFilenameButton;
  QLabel* label_17;
  QComboBox* videoFormatSelector;
  QCheckBox* recordInfoCheck;
  QCheckBox* recordTimestampsCheck;
  QCheckBox* recordMetadataCheck;
  QLabel* label_19;
  QRadioButton* stopRecordingManuallyRadio;
  QHBoxLayout* horizontalLayout;
  QRadioButton* stopRecordingFramesRadio;
  QSpinBox* stopRecordingFrames;
  QHBoxLayout* horizontalLayout_15;
  QRadioButton* stopRecordingTimeRadio;
  QTimeEdit* stopRecordingTime;
  QWidget* advancedTab;
  QVBoxLayout* verticalLayout_9;
  QVBoxLayout* verticalLayout_13;
  QTreeView* advancedTree;
  QLabel* label_20;
  QHBoxLayout* horizontalLayout_6;
  QPushButton* saveSettingsButton;
  QPushButton* loadSettingsButton;
  QDockWidget* videodock;
  QWidget* widget_2;
  QVBoxLayout* verticalLayout_8;
  QHBoxLayout* horizontalLayout_14;
  QPushButton* playButton;
  QPushButton* unzoomButton;
  QSpacerItem* horizontalSpacer_3;
  QArv::GLVideoWidget* video;
  QDockWidget* histogramdock;
  QWidget* widget;
  QVBoxLayout* verticalLayout;
  QHBoxLayout* horizontalLayout_13;
  QPushButton* histogramLog;
  QSpacerItem* horizontalSpacer_2;
  QArv::GLHistogramWidget* histogram;
  QDockWidget* messageDock;
  QWidget* dockWidgetContents;
  QGridLayout* gridLayout;
  QPlainTextEdit* messageList;
  QToolBar* recordingToolbar;
  QToolBar* subwindowToolbar;
  QButtonGroup* buttonGroup;
  QButtonGroup* stopRecordingRadios;

  void setupUi(QMainWindow* MainWindowUI)
  {
    if (MainWindowUI->objectName().isEmpty())
      MainWindowUI->setObjectName(QStringLiteral("MainWindowUI"));
    MainWindowUI->resize(940, 583);
    snapshotAction = new QAction(MainWindowUI);
    snapshotAction->setObjectName(QStringLiteral("snapshotAction"));
    snapshotAction->setCheckable(true);
    recordAction = new QAction(MainWindowUI);
    recordAction->setObjectName(QStringLiteral("recordAction"));
    recordAction->setCheckable(true);
    closeFileAction = new QAction(MainWindowUI);
    closeFileAction->setObjectName(QStringLiteral("closeFileAction"));
    closeFileAction->setEnabled(false);
    showVideoAction = new QAction(MainWindowUI);
    showVideoAction->setObjectName(QStringLiteral("showVideoAction"));
    showVideoAction->setCheckable(true);
    showVideoAction->setChecked(true);
    showHistogramAction = new QAction(MainWindowUI);
    showHistogramAction->setObjectName(QStringLiteral("showHistogramAction"));
    showHistogramAction->setCheckable(true);
    showHistogramAction->setChecked(true);
    messageAction = new QAction(MainWindowUI);
    messageAction->setObjectName(QStringLiteral("messageAction"));
    messageAction->setCheckable(true);
    messageAction->setChecked(true);
    subwindowsAction = new QAction(MainWindowUI);
    subwindowsAction->setObjectName(QStringLiteral("subwindowsAction"));
    centralwidget = new QWidget(MainWindowUI);
    centralwidget->setObjectName(QStringLiteral("centralwidget"));
    gridLayout_2 = new QGridLayout(centralwidget);
    gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
    tabWidget = new QTabWidget(centralwidget);
    tabWidget->setObjectName(QStringLiteral("tabWidget"));
    basicTab = new QWidget();
    basicTab->setObjectName(QStringLiteral("basicTab"));
    verticalLayout_2 = new QVBoxLayout(basicTab);
    verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
    horizontalLayout_18 = new QHBoxLayout();
    horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
    verticalLayout_15 = new QVBoxLayout();
    verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
    cameraBox = new QGroupBox(basicTab);
    cameraBox->setObjectName(QStringLiteral("cameraBox"));
    QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(cameraBox->sizePolicy().hasHeightForWidth());
    cameraBox->setSizePolicy(sizePolicy);
    cameraBox->setMaximumSize(QSize(16777215, 16777215));
    formLayout = new QFormLayout(cameraBox);
    formLayout->setObjectName(QStringLiteral("formLayout"));
    formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
    label = new QLabel(cameraBox);
    label->setObjectName(QStringLiteral("label"));

    formLayout->setWidget(0, QFormLayout::LabelRole, label);

    horizontalLayout_4 = new QHBoxLayout();
    horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
    cameraSelector = new QComboBox(cameraBox);
    cameraSelector->setObjectName(QStringLiteral("cameraSelector"));
    cameraSelector->setMinimumContentsLength(30);

    horizontalLayout_4->addWidget(cameraSelector);

    refreshCamerasButton = new QPushButton(cameraBox);
    refreshCamerasButton->setObjectName(QStringLiteral("refreshCamerasButton"));
    QIcon icon;
    QString iconThemeName = QStringLiteral("view-refresh");
    if (QIcon::hasThemeIcon(iconThemeName)) {
      icon = QIcon::fromTheme(iconThemeName);
    } else {
      icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
    }
    refreshCamerasButton->setIcon(icon);

    horizontalLayout_4->addWidget(refreshCamerasButton);

    formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_4);

    label_9 = new QLabel(cameraBox);
    label_9->setObjectName(QStringLiteral("label_9"));

    formLayout->setWidget(2, QFormLayout::LabelRole, label_9);

    horizontalLayout_7 = new QHBoxLayout();
    horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
    fpsSpinbox = new QSpinBox(cameraBox);
    fpsSpinbox->setObjectName(QStringLiteral("fpsSpinbox"));
    fpsSpinbox->setMinimum(1);
    fpsSpinbox->setMaximum(999);

    horizontalLayout_7->addWidget(fpsSpinbox);

    label_14 = new QLabel(cameraBox);
    label_14->setObjectName(QStringLiteral("label_14"));

    horizontalLayout_7->addWidget(label_14);

    actualFPS = new QLabel(cameraBox);
    actualFPS->setObjectName(QStringLiteral("actualFPS"));

    horizontalLayout_7->addWidget(actualFPS);

    formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_7);

    label_2 = new QLabel(cameraBox);
    label_2->setObjectName(QStringLiteral("label_2"));

    formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

    pixelFormatSelector = new QComboBox(cameraBox);
    pixelFormatSelector->setObjectName(QStringLiteral("pixelFormatSelector"));
    pixelFormatSelector->setMinimumContentsLength(30);

    formLayout->setWidget(3, QFormLayout::FieldRole, pixelFormatSelector);

    label_3 = new QLabel(cameraBox);
    label_3->setObjectName(QStringLiteral("label_3"));

    formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

    cameraMTUDescription = new QLabel(cameraBox);
    cameraMTUDescription->setObjectName(QStringLiteral("cameraMTUDescription"));

    formLayout->setWidget(4, QFormLayout::FieldRole, cameraMTUDescription);

    label_13 = new QLabel(cameraBox);
    label_13->setObjectName(QStringLiteral("label_13"));

    formLayout->setWidget(5, QFormLayout::LabelRole, label_13);

    bandwidthDescription = new QLabel(cameraBox);
    bandwidthDescription->setObjectName(QStringLiteral("bandwidthDescription"));

    formLayout->setWidget(5, QFormLayout::FieldRole, bandwidthDescription);

    verticalLayout_15->addWidget(cameraBox);

    verticalSpacer =
      new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    verticalLayout_15->addItem(verticalSpacer);

    Exposure = new QGroupBox(basicTab);
    Exposure->setObjectName(QStringLiteral("Exposure"));
    sizePolicy.setHeightForWidth(Exposure->sizePolicy().hasHeightForWidth());
    Exposure->setSizePolicy(sizePolicy);
    Exposure->setMaximumSize(QSize(16777215, 16777215));
    Exposure->setAlignment(Qt::AlignCenter);
    horizontalLayout_3 = new QHBoxLayout(Exposure);
    horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
    verticalLayout_4 = new QVBoxLayout();
    verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
    label_10 = new QLabel(Exposure);
    label_10->setObjectName(QStringLiteral("label_10"));
    label_10->setAlignment(Qt::AlignCenter);

    verticalLayout_4->addWidget(label_10);

    gainSlider = new QSlider(Exposure);
    gainSlider->setObjectName(QStringLiteral("gainSlider"));
    gainSlider->setOrientation(Qt::Horizontal);

    verticalLayout_4->addWidget(gainSlider);

    horizontalLayout_9 = new QHBoxLayout();
    horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
    gainSpinbox = new QDoubleSpinBox(Exposure);
    gainSpinbox->setObjectName(QStringLiteral("gainSpinbox"));
    QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(
      gainSpinbox->sizePolicy().hasHeightForWidth());
    gainSpinbox->setSizePolicy(sizePolicy1);
    gainSpinbox->setReadOnly(true);

    horizontalLayout_9->addWidget(gainSpinbox);

    editGainButton = new QPushButton(Exposure);
    editGainButton->setObjectName(QStringLiteral("editGainButton"));

    horizontalLayout_9->addWidget(editGainButton);

    verticalLayout_4->addLayout(horizontalLayout_9);

    gainAutoButton = new QPushButton(Exposure);
    gainAutoButton->setObjectName(QStringLiteral("gainAutoButton"));
    gainAutoButton->setCheckable(true);

    verticalLayout_4->addWidget(gainAutoButton);

    horizontalLayout_3->addLayout(verticalLayout_4);

    verticalLayout_5 = new QVBoxLayout();
    verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
    label_11 = new QLabel(Exposure);
    label_11->setObjectName(QStringLiteral("label_11"));
    label_11->setAlignment(Qt::AlignCenter);

    verticalLayout_5->addWidget(label_11);

    exposureSlider = new QSlider(Exposure);
    exposureSlider->setObjectName(QStringLiteral("exposureSlider"));
    exposureSlider->setOrientation(Qt::Horizontal);

    verticalLayout_5->addWidget(exposureSlider);

    horizontalLayout_10 = new QHBoxLayout();
    horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
    exposureSpinbox = new QDoubleSpinBox(Exposure);
    exposureSpinbox->setObjectName(QStringLiteral("exposureSpinbox"));
    sizePolicy1.setHeightForWidth(
      exposureSpinbox->sizePolicy().hasHeightForWidth());
    exposureSpinbox->setSizePolicy(sizePolicy1);
    exposureSpinbox->setReadOnly(true);
    exposureSpinbox->setDecimals(3);
    exposureSpinbox->setSingleStep(0.001);

    horizontalLayout_10->addWidget(exposureSpinbox);

    editExposureButton = new QPushButton(Exposure);
    editExposureButton->setObjectName(QStringLiteral("editExposureButton"));

    horizontalLayout_10->addWidget(editExposureButton);

    verticalLayout_5->addLayout(horizontalLayout_10);

    exposureAutoButton = new QPushButton(Exposure);
    exposureAutoButton->setObjectName(QStringLiteral("exposureAutoButton"));
    exposureAutoButton->setCheckable(true);

    verticalLayout_5->addWidget(exposureAutoButton);

    horizontalLayout_3->addLayout(verticalLayout_5);

    verticalLayout_15->addWidget(Exposure);

    horizontalLayout_18->addLayout(verticalLayout_15);

    roiBox = new QGroupBox(basicTab);
    roiBox->setObjectName(QStringLiteral("roiBox"));
    sizePolicy.setHeightForWidth(roiBox->sizePolicy().hasHeightForWidth());
    roiBox->setSizePolicy(sizePolicy);
    verticalLayout_3 = new QVBoxLayout(roiBox);
    verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
    formLayout_2 = new QFormLayout();
    formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
    formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
    label_5 = new QLabel(roiBox);
    label_5->setObjectName(QStringLiteral("label_5"));

    formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

    xSpinbox = new QSpinBox(roiBox);
    xSpinbox->setObjectName(QStringLiteral("xSpinbox"));
    xSpinbox->setSingleStep(2);

    formLayout_2->setWidget(0, QFormLayout::FieldRole, xSpinbox);

    label_6 = new QLabel(roiBox);
    label_6->setObjectName(QStringLiteral("label_6"));

    formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

    ySpinbox = new QSpinBox(roiBox);
    ySpinbox->setObjectName(QStringLiteral("ySpinbox"));
    ySpinbox->setSingleStep(2);

    formLayout_2->setWidget(1, QFormLayout::FieldRole, ySpinbox);

    label_7 = new QLabel(roiBox);
    label_7->setObjectName(QStringLiteral("label_7"));

    formLayout_2->setWidget(2, QFormLayout::LabelRole, label_7);

    wSpinbox = new QSpinBox(roiBox);
    wSpinbox->setObjectName(QStringLiteral("wSpinbox"));
    wSpinbox->setSingleStep(2);

    formLayout_2->setWidget(2, QFormLayout::FieldRole, wSpinbox);

    label_8 = new QLabel(roiBox);
    label_8->setObjectName(QStringLiteral("label_8"));

    formLayout_2->setWidget(3, QFormLayout::LabelRole, label_8);

    hSpinbox = new QSpinBox(roiBox);
    hSpinbox->setObjectName(QStringLiteral("hSpinbox"));
    hSpinbox->setSingleStep(2);

    formLayout_2->setWidget(3, QFormLayout::FieldRole, hSpinbox);

    label_4 = new QLabel(roiBox);
    label_4->setObjectName(QStringLiteral("label_4"));

    formLayout_2->setWidget(4, QFormLayout::LabelRole, label_4);

    binSpinBox = new QSpinBox(roiBox);
    binSpinBox->setObjectName(QStringLiteral("binSpinBox"));
    binSpinBox->setMinimum(1);

    formLayout_2->setWidget(4, QFormLayout::FieldRole, binSpinBox);

    verticalLayout_3->addLayout(formLayout_2);

    applyROIButton = new QPushButton(roiBox);
    applyROIButton->setObjectName(QStringLiteral("applyROIButton"));

    verticalLayout_3->addWidget(applyROIButton);

    resetROIButton = new QPushButton(roiBox);
    resetROIButton->setObjectName(QStringLiteral("resetROIButton"));

    verticalLayout_3->addWidget(resetROIButton);

    frame = new QFrame(roiBox);
    frame->setObjectName(QStringLiteral("frame"));
    frame->setFrameShape(QFrame::HLine);
    frame->setFrameShadow(QFrame::Raised);

    verticalLayout_3->addWidget(frame);

    pickROIButton = new QPushButton(roiBox);
    pickROIButton->setObjectName(QStringLiteral("pickROIButton"));
    pickROIButton->setCheckable(true);

    verticalLayout_3->addWidget(pickROIButton);

    ROIsizeCombo = new QArv::ROIcomboBox(roiBox);
    ROIsizeCombo->setObjectName(QStringLiteral("ROIsizeCombo"));
    ROIsizeCombo->setInsertPolicy(QComboBox::NoInsert);

    verticalLayout_3->addWidget(ROIsizeCombo);

    verticalSpacer_2 =
      new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    verticalLayout_3->addItem(verticalSpacer_2);

    horizontalLayout_18->addWidget(roiBox);

    verticalLayout_2->addLayout(horizontalLayout_18);

    tabWidget->addTab(basicTab, QString());
    settingsTab = new QWidget();
    settingsTab->setObjectName(QStringLiteral("settingsTab"));
    gridLayout_3 = new QGridLayout(settingsTab);
    gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
    verticalLayout_16 = new QVBoxLayout();
    verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
    transformBox = new QGroupBox(settingsTab);
    transformBox->setObjectName(QStringLiteral("transformBox"));
    verticalLayout_6 = new QVBoxLayout(transformBox);
    verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
    invertColors = new QCheckBox(transformBox);
    invertColors->setObjectName(QStringLiteral("invertColors"));

    verticalLayout_6->addWidget(invertColors);

    flipHorizontal = new QCheckBox(transformBox);
    flipHorizontal->setObjectName(QStringLiteral("flipHorizontal"));

    verticalLayout_6->addWidget(flipHorizontal);

    flipVertical = new QCheckBox(transformBox);
    flipVertical->setObjectName(QStringLiteral("flipVertical"));

    verticalLayout_6->addWidget(flipVertical);

    rotationSelector = new QComboBox(transformBox);
    rotationSelector->setObjectName(QStringLiteral("rotationSelector"));

    verticalLayout_6->addWidget(rotationSelector);

    verticalLayout_16->addWidget(transformBox);

    verticalSpacer_5 =
      new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    verticalLayout_16->addItem(verticalSpacer_5);

    settingsBox = new QGroupBox(settingsTab);
    settingsBox->setObjectName(QStringLiteral("settingsBox"));
    formLayout_3 = new QFormLayout(settingsBox);
    formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
    label_22 = new QLabel(settingsBox);
    label_22->setObjectName(QStringLiteral("label_22"));

    formLayout_3->setWidget(1, QFormLayout::LabelRole, label_22);

    sliderUpdateSpinbox = new QSpinBox(settingsBox);
    sliderUpdateSpinbox->setObjectName(QStringLiteral("sliderUpdateSpinbox"));
    sliderUpdateSpinbox->setMinimum(1);
    sliderUpdateSpinbox->setMaximum(10000);
    sliderUpdateSpinbox->setValue(1000);

    formLayout_3->setWidget(1, QFormLayout::FieldRole, sliderUpdateSpinbox);

    label_23 = new QLabel(settingsBox);
    label_23->setObjectName(QStringLiteral("label_23"));

    formLayout_3->setWidget(2, QFormLayout::LabelRole, label_23);

    histogramUpdateSpinbox = new QSpinBox(settingsBox);
    histogramUpdateSpinbox->setObjectName(
      QStringLiteral("histogramUpdateSpinbox"));
    histogramUpdateSpinbox->setMinimum(1);
    histogramUpdateSpinbox->setMaximum(10000);
    histogramUpdateSpinbox->setValue(100);

    formLayout_3->setWidget(2, QFormLayout::FieldRole, histogramUpdateSpinbox);

    label_24 = new QLabel(settingsBox);
    label_24->setObjectName(QStringLiteral("label_24"));

    formLayout_3->setWidget(3, QFormLayout::LabelRole, label_24);

    statusTimeoutSpinbox = new QSpinBox(settingsBox);
    statusTimeoutSpinbox->setObjectName(QStringLiteral("statusTimeoutSpinbox"));
    statusTimeoutSpinbox->setMinimum(1);
    statusTimeoutSpinbox->setMaximum(1000);
    statusTimeoutSpinbox->setValue(10);

    formLayout_3->setWidget(3, QFormLayout::FieldRole, statusTimeoutSpinbox);

    label_25 = new QLabel(settingsBox);
    label_25->setObjectName(QStringLiteral("label_25"));

    formLayout_3->setWidget(4, QFormLayout::LabelRole, label_25);

    streamFramesSpinbox = new QSpinBox(settingsBox);
    streamFramesSpinbox->setObjectName(QStringLiteral("streamFramesSpinbox"));
    streamFramesSpinbox->setMinimum(1);
    streamFramesSpinbox->setMaximum(1000);
    streamFramesSpinbox->setValue(30);

    formLayout_3->setWidget(4, QFormLayout::FieldRole, streamFramesSpinbox);

    nocopyCheck = new QCheckBox(settingsBox);
    nocopyCheck->setObjectName(QStringLiteral("nocopyCheck"));
    nocopyCheck->setChecked(true);

    formLayout_3->setWidget(6, QFormLayout::SpanningRole, nocopyCheck);

    verticalLayout_16->addWidget(settingsBox);

    gridLayout_3->addLayout(verticalLayout_16, 0, 0, 1, 1);

    verticalLayout_17 = new QVBoxLayout();
    verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
    miscBox = new QGroupBox(settingsTab);
    miscBox->setObjectName(QStringLiteral("miscBox"));
    verticalLayout_7 = new QVBoxLayout(miscBox);
    verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
    dropInvalidFrames = new QCheckBox(miscBox);
    dropInvalidFrames->setObjectName(QStringLiteral("dropInvalidFrames"));
    dropInvalidFrames->setChecked(true);

    verticalLayout_7->addWidget(dropInvalidFrames);

    markClipped = new QCheckBox(miscBox);
    markClipped->setObjectName(QStringLiteral("markClipped"));

    verticalLayout_7->addWidget(markClipped);

    useFastInterpolator = new QCheckBox(miscBox);
    useFastInterpolator->setObjectName(QStringLiteral("useFastInterpolator"));
    useFastInterpolator->setChecked(true);

    verticalLayout_7->addWidget(useFastInterpolator);

    verticalLayout_17->addWidget(miscBox);

    verticalSpacer_4 =
      new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    verticalLayout_17->addItem(verticalSpacer_4);

    postprocBox = new QGroupBox(settingsTab);
    postprocBox->setObjectName(QStringLiteral("postprocBox"));
    verticalLayout_12 = new QVBoxLayout(postprocBox);
    verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
    horizontalLayout_17 = new QHBoxLayout();
    horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
    postprocAddButton = new QToolButton(postprocBox);
    postprocAddButton->setObjectName(QStringLiteral("postprocAddButton"));
    QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(
      postprocAddButton->sizePolicy().hasHeightForWidth());
    postprocAddButton->setSizePolicy(sizePolicy2);
    postprocAddButton->setPopupMode(QToolButton::InstantPopup);
    postprocAddButton->setToolButtonStyle(Qt::ToolButtonTextOnly);

    horizontalLayout_17->addWidget(postprocAddButton);

    postprocRemoveButton = new QPushButton(postprocBox);
    postprocRemoveButton->setObjectName(QStringLiteral("postprocRemoveButton"));

    horizontalLayout_17->addWidget(postprocRemoveButton);

    verticalLayout_12->addLayout(horizontalLayout_17);

    postprocList = new QListView(postprocBox);
    postprocList->setObjectName(QStringLiteral("postprocList"));
    postprocList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    postprocList->setDragEnabled(false);
    postprocList->setDragDropMode(QAbstractItemView::InternalMove);
    postprocList->setDefaultDropAction(Qt::MoveAction);
    postprocList->setAlternatingRowColors(true);
    postprocList->setMovement(QListView::Free);

    verticalLayout_12->addWidget(postprocList);

    verticalLayout_17->addWidget(postprocBox);

    gridLayout_3->addLayout(verticalLayout_17, 0, 1, 1, 1);

    tabWidget->addTab(settingsTab, QString());
    recordingTab = new QWidget();
    recordingTab->setObjectName(QStringLiteral("recordingTab"));
    verticalLayout_11 = new QVBoxLayout(recordingTab);
    verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
    verticalLayout_10 = new QVBoxLayout();
    verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
    snapshotBox = new QGroupBox(recordingTab);
    snapshotBox->setObjectName(QStringLiteral("snapshotBox"));
    formLayout_5 = new QFormLayout(snapshotBox);
    formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
    label_15 = new QLabel(snapshotBox);
    label_15->setObjectName(QStringLiteral("label_15"));

    formLayout_5->setWidget(0, QFormLayout::LabelRole, label_15);

    horizontalLayout_8 = new QHBoxLayout();
    horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
    snappathEdit = new QLineEdit(snapshotBox);
    snappathEdit->setObjectName(QStringLiteral("snappathEdit"));

    horizontalLayout_8->addWidget(snappathEdit);

    chooseSnappathButton = new QPushButton(snapshotBox);
    chooseSnappathButton->setObjectName(QStringLiteral("chooseSnappathButton"));
    QIcon icon1;
    iconThemeName = QStringLiteral("document-open");
    if (QIcon::hasThemeIcon(iconThemeName)) {
      icon1 = QIcon::fromTheme(iconThemeName);
    } else {
      icon1.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
    }
    chooseSnappathButton->setIcon(icon1);

    horizontalLayout_8->addWidget(chooseSnappathButton);

    formLayout_5->setLayout(0, QFormLayout::FieldRole, horizontalLayout_8);

    label_21 = new QLabel(snapshotBox);
    label_21->setObjectName(QStringLiteral("label_21"));

    formLayout_5->setWidget(1, QFormLayout::LabelRole, label_21);

    snapbasenameEdit = new QLineEdit(snapshotBox);
    snapbasenameEdit->setObjectName(QStringLiteral("snapbasenameEdit"));
    snapbasenameEdit->setText(QStringLiteral("qarv_snapshot-"));

    formLayout_5->setWidget(1, QFormLayout::FieldRole, snapbasenameEdit);

    label_16 = new QLabel(snapshotBox);
    label_16->setObjectName(QStringLiteral("label_16"));

    formLayout_5->setWidget(2, QFormLayout::LabelRole, label_16);

    horizontalLayout_11 = new QHBoxLayout();
    horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
    snapshotRaw = new QRadioButton(snapshotBox);
    buttonGroup = new QButtonGroup(MainWindowUI);
    buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
    buttonGroup->addButton(snapshotRaw);
    snapshotRaw->setObjectName(QStringLiteral("snapshotRaw"));

    horizontalLayout_11->addWidget(snapshotRaw);

    snapshotPNG = new QRadioButton(snapshotBox);
    buttonGroup->addButton(snapshotPNG);
    snapshotPNG->setObjectName(QStringLiteral("snapshotPNG"));
    snapshotPNG->setChecked(true);

    horizontalLayout_11->addWidget(snapshotPNG);

    formLayout_5->setLayout(2, QFormLayout::FieldRole, horizontalLayout_11);

    verticalLayout_10->addWidget(snapshotBox);

    verticalSpacer_3 =
      new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    verticalLayout_10->addItem(verticalSpacer_3);

    videoBox = new QGroupBox(recordingTab);
    videoBox->setObjectName(QStringLiteral("videoBox"));
    formLayout_6 = new QFormLayout(videoBox);
    formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
    formLayout_6->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
    label_12 = new QLabel(videoBox);
    label_12->setObjectName(QStringLiteral("label_12"));

    formLayout_6->setWidget(0, QFormLayout::LabelRole, label_12);

    horizontalLayout_5 = new QHBoxLayout();
    horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
    filenameEdit = new QLineEdit(videoBox);
    filenameEdit->setObjectName(QStringLiteral("filenameEdit"));

    horizontalLayout_5->addWidget(filenameEdit);

    chooseFilenameButton = new QPushButton(videoBox);
    chooseFilenameButton->setObjectName(QStringLiteral("chooseFilenameButton"));
    chooseFilenameButton->setIcon(icon1);

    horizontalLayout_5->addWidget(chooseFilenameButton);

    formLayout_6->setLayout(0, QFormLayout::FieldRole, horizontalLayout_5);

    label_17 = new QLabel(videoBox);
    label_17->setObjectName(QStringLiteral("label_17"));

    formLayout_6->setWidget(1, QFormLayout::LabelRole, label_17);

    videoFormatSelector = new QComboBox(videoBox);
    videoFormatSelector->setObjectName(QStringLiteral("videoFormatSelector"));

    formLayout_6->setWidget(1, QFormLayout::FieldRole, videoFormatSelector);

    recordInfoCheck = new QCheckBox(videoBox);
    recordInfoCheck->setObjectName(QStringLiteral("recordInfoCheck"));
    recordInfoCheck->setChecked(true);

    formLayout_6->setWidget(2, QFormLayout::FieldRole, recordInfoCheck);

    recordTimestampsCheck = new QCheckBox(videoBox);
    recordTimestampsCheck->setObjectName(
      QStringLiteral("recordTimestampsCheck"));

    formLayout_6->setWidget(3, QFormLayout::FieldRole, recordTimestampsCheck);

    recordMetadataCheck = new QCheckBox(videoBox);
    recordMetadataCheck->setObjectName(QStringLiteral("recordMetadataCheck"));

    formLayout_6->setWidget(4, QFormLayout::FieldRole, recordMetadataCheck);

    label_19 = new QLabel(videoBox);
    label_19->setObjectName(QStringLiteral("label_19"));

    formLayout_6->setWidget(5, QFormLayout::LabelRole, label_19);

    stopRecordingManuallyRadio = new QRadioButton(videoBox);
    stopRecordingRadios = new QButtonGroup(MainWindowUI);
    stopRecordingRadios->setObjectName(QStringLiteral("stopRecordingRadios"));
    stopRecordingRadios->addButton(stopRecordingManuallyRadio);
    stopRecordingManuallyRadio->setObjectName(
      QStringLiteral("stopRecordingManuallyRadio"));
    stopRecordingManuallyRadio->setChecked(true);

    formLayout_6->setWidget(5, QFormLayout::FieldRole,
                            stopRecordingManuallyRadio);

    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
    stopRecordingFramesRadio = new QRadioButton(videoBox);
    stopRecordingRadios->addButton(stopRecordingFramesRadio);
    stopRecordingFramesRadio->setObjectName(
      QStringLiteral("stopRecordingFramesRadio"));

    horizontalLayout->addWidget(stopRecordingFramesRadio);

    stopRecordingFrames = new QSpinBox(videoBox);
    stopRecordingFrames->setObjectName(QStringLiteral("stopRecordingFrames"));
    stopRecordingFrames->setMinimum(1);
    stopRecordingFrames->setMaximum(100000);
    stopRecordingFrames->setValue(100);

    horizontalLayout->addWidget(stopRecordingFrames);

    formLayout_6->setLayout(6, QFormLayout::FieldRole, horizontalLayout);

    horizontalLayout_15 = new QHBoxLayout();
    horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
    stopRecordingTimeRadio = new QRadioButton(videoBox);
    stopRecordingRadios->addButton(stopRecordingTimeRadio);
    stopRecordingTimeRadio->setObjectName(
      QStringLiteral("stopRecordingTimeRadio"));

    horizontalLayout_15->addWidget(stopRecordingTimeRadio);

    stopRecordingTime = new QTimeEdit(videoBox);
    stopRecordingTime->setObjectName(QStringLiteral("stopRecordingTime"));
    stopRecordingTime->setDisplayFormat(QStringLiteral("HH:mm:ss"));

    horizontalLayout_15->addWidget(stopRecordingTime);

    formLayout_6->setLayout(7, QFormLayout::FieldRole, horizontalLayout_15);

    verticalLayout_10->addWidget(videoBox);

    verticalLayout_11->addLayout(verticalLayout_10);

    tabWidget->addTab(recordingTab, QString());
    advancedTab = new QWidget();
    advancedTab->setObjectName(QStringLiteral("advancedTab"));
    verticalLayout_9 = new QVBoxLayout(advancedTab);
    verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
    verticalLayout_13 = new QVBoxLayout();
    verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
    advancedTree = new QTreeView(advancedTab);
    advancedTree->setObjectName(QStringLiteral("advancedTree"));
    advancedTree->setAnimated(true);

    verticalLayout_13->addWidget(advancedTree);

    label_20 = new QLabel(advancedTab);
    label_20->setObjectName(QStringLiteral("label_20"));
    label_20->setWordWrap(true);

    verticalLayout_13->addWidget(label_20);

    horizontalLayout_6 = new QHBoxLayout();
    horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
    saveSettingsButton = new QPushButton(advancedTab);
    saveSettingsButton->setObjectName(QStringLiteral("saveSettingsButton"));

    horizontalLayout_6->addWidget(saveSettingsButton);

    loadSettingsButton = new QPushButton(advancedTab);
    loadSettingsButton->setObjectName(QStringLiteral("loadSettingsButton"));

    horizontalLayout_6->addWidget(loadSettingsButton);

    verticalLayout_13->addLayout(horizontalLayout_6);

    verticalLayout_9->addLayout(verticalLayout_13);

    tabWidget->addTab(advancedTab, QString());

    gridLayout_2->addWidget(tabWidget, 1, 0, 1, 1);

    MainWindowUI->setCentralWidget(centralwidget);
    videodock = new QDockWidget(MainWindowUI);
    videodock->setObjectName(QStringLiteral("videodock"));
    QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy3.setHorizontalStretch(1);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(videodock->sizePolicy().hasHeightForWidth());
    videodock->setSizePolicy(sizePolicy3);
    widget_2 = new QWidget();
    widget_2->setObjectName(QStringLiteral("widget_2"));
    verticalLayout_8 = new QVBoxLayout(widget_2);
    verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
    horizontalLayout_14 = new QHBoxLayout();
    horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
    playButton = new QPushButton(widget_2);
    playButton->setObjectName(QStringLiteral("playButton"));
    playButton->setCheckable(true);

    horizontalLayout_14->addWidget(playButton);

    unzoomButton = new QPushButton(widget_2);
    unzoomButton->setObjectName(QStringLiteral("unzoomButton"));
    unzoomButton->setCheckable(true);

    horizontalLayout_14->addWidget(unzoomButton);

    horizontalSpacer_3 =
      new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout_14->addItem(horizontalSpacer_3);

    verticalLayout_8->addLayout(horizontalLayout_14);

    video = new QArv::GLVideoWidget(widget_2);
    video->setObjectName(QStringLiteral("video"));
    QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding,
                            QSizePolicy::MinimumExpanding);
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(video->sizePolicy().hasHeightForWidth());
    video->setSizePolicy(sizePolicy4);
    video->setMinimumSize(QSize(128, 128));
    video->setMaximumSize(QSize(1024, 1024));
    video->setCursor(QCursor(Qt::CrossCursor));

    verticalLayout_8->addWidget(video);

    videodock->setWidget(widget_2);
    MainWindowUI->addDockWidget(static_cast<Qt::DockWidgetArea>(2), videodock);
    histogramdock = new QDockWidget(MainWindowUI);
    histogramdock->setObjectName(QStringLiteral("histogramdock"));
    QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy5.setHorizontalStretch(1);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(
      histogramdock->sizePolicy().hasHeightForWidth());
    histogramdock->setSizePolicy(sizePolicy5);
    widget = new QWidget();
    widget->setObjectName(QStringLiteral("widget"));
    verticalLayout = new QVBoxLayout(widget);
    verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
    horizontalLayout_13 = new QHBoxLayout();
    horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
    histogramLog = new QPushButton(widget);
    histogramLog->setObjectName(QStringLiteral("histogramLog"));
    histogramLog->setCheckable(true);

    horizontalLayout_13->addWidget(histogramLog);

    horizontalSpacer_2 =
      new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout_13->addItem(horizontalSpacer_2);

    verticalLayout->addLayout(horizontalLayout_13);

    histogram = new QArv::GLHistogramWidget(widget);
    histogram->setObjectName(QStringLiteral("histogram"));
    QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy6.setHorizontalStretch(0);
    sizePolicy6.setVerticalStretch(0);
    sizePolicy6.setHeightForWidth(histogram->sizePolicy().hasHeightForWidth());
    histogram->setSizePolicy(sizePolicy6);

    verticalLayout->addWidget(histogram);

    histogramdock->setWidget(widget);
    MainWindowUI->addDockWidget(static_cast<Qt::DockWidgetArea>(2),
                                histogramdock);
    messageDock = new QDockWidget(MainWindowUI);
    messageDock->setObjectName(QStringLiteral("messageDock"));
    sizePolicy5.setHeightForWidth(
      messageDock->sizePolicy().hasHeightForWidth());
    messageDock->setSizePolicy(sizePolicy5);
    dockWidgetContents = new QWidget();
    dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
    gridLayout = new QGridLayout(dockWidgetContents);
    gridLayout->setObjectName(QStringLiteral("gridLayout"));
    messageList = new QPlainTextEdit(dockWidgetContents);
    messageList->setObjectName(QStringLiteral("messageList"));
    messageList->setUndoRedoEnabled(false);
    messageList->setReadOnly(true);

    gridLayout->addWidget(messageList, 0, 0, 1, 1);

    messageDock->setWidget(dockWidgetContents);
    MainWindowUI->addDockWidget(static_cast<Qt::DockWidgetArea>(2),
                                messageDock);
    recordingToolbar = new QToolBar(MainWindowUI);
    recordingToolbar->setObjectName(QStringLiteral("recordingToolbar"));
    recordingToolbar->setToolButtonStyle(Qt::ToolButtonFollowStyle);
    MainWindowUI->addToolBar(Qt::TopToolBarArea, recordingToolbar);
    subwindowToolbar = new QToolBar(MainWindowUI);
    subwindowToolbar->setObjectName(QStringLiteral("subwindowToolbar"));
    MainWindowUI->addToolBar(Qt::TopToolBarArea, subwindowToolbar);

    recordingToolbar->addAction(snapshotAction);
    recordingToolbar->addAction(recordAction);
    recordingToolbar->addAction(closeFileAction);

    retranslateUi(MainWindowUI);
    QObject::connect(histogramLog, SIGNAL(toggled(bool)), histogram,
                     SLOT(setLogarithmic(bool)));

    tabWidget->setCurrentIndex(0);

    QMetaObject::connectSlotsByName(MainWindowUI);
  } // setupUi

  void retranslateUi(QMainWindow* MainWindowUI)
  {
    MainWindowUI->setWindowTitle(
      QApplication::translate("MainWindowUI", "QArv", 0));
    snapshotAction->setText(
      QApplication::translate("MainWindowUI", "Snapshot", 0));
#ifndef QT_NO_TOOLTIP
    snapshotAction->setToolTip(
      QApplication::translate("MainWindowUI", "Store a snapshot.", 0));
#endif // QT_NO_TOOLTIP
    recordAction->setText(QApplication::translate("MainWindowUI", "Record", 0));
#ifndef QT_NO_TOOLTIP
    recordAction->setToolTip(QApplication::translate(
      "MainWindowUI",
      "Record video. Depress to pause recording, press again to resume.", 0));
#endif // QT_NO_TOOLTIP
    closeFileAction->setText(
      QApplication::translate("MainWindowUI", "Finish", 0));
#ifndef QT_NO_TOOLTIP
    closeFileAction->setToolTip(QApplication::translate(
      "MainWindowUI", "Depressing the Record button normally pauses recording, "
                      "which can be resumed. Press this button to finalize the "
                      "recording.",
      0));
#endif // QT_NO_TOOLTIP
    showVideoAction->setText(
      QApplication::translate("MainWindowUI", "Video Display", 0));
#ifndef QT_NO_TOOLTIP
    showVideoAction->setToolTip(QApplication::translate(
      "MainWindowUI", "Show or hide video display.", 0));
#endif // QT_NO_TOOLTIP
    showHistogramAction->setText(
      QApplication::translate("MainWindowUI", "Histogram", 0));
#ifndef QT_NO_TOOLTIP
    showHistogramAction->setToolTip(QApplication::translate(
      "MainWindowUI", "Show or hide histogram display.", 0));
#endif // QT_NO_TOOLTIP
    messageAction->setText(
      QApplication::translate("MainWindowUI", "Diagnostic Log", 0));
#ifndef QT_NO_TOOLTIP
    messageAction->setToolTip(QApplication::translate(
      "MainWindowUI", "Show or hide diagnostic log.", 0));
#endif // QT_NO_TOOLTIP
    subwindowsAction->setText(
      QApplication::translate("MainWindowUI", "Subwindows...", 0));
    subwindowsAction->setIconText(
      QApplication::translate("MainWindowUI", "Subwindows...", 0));
#ifndef QT_NO_TOOLTIP
    subwindowsAction->setToolTip(
      QApplication::translate("MainWindowUI", "Subwindows", 0));
#endif // QT_NO_TOOLTIP
    cameraBox->setTitle(QApplication::translate("MainWindowUI", "Camera", 0));
    label->setText(QApplication::translate("MainWindowUI", "Camera:", 0));
#ifndef QT_NO_TOOLTIP
    cameraSelector->setToolTip(
      QApplication::translate("MainWindowUI", "Select camera.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
    refreshCamerasButton->setToolTip(
      QApplication::translate("MainWindowUI", "Refresh camera list.", 0));
#endif // QT_NO_TOOLTIP
    refreshCamerasButton->setText(QString());
    label_9->setText(QApplication::translate("MainWindowUI", "FPS:", 0));
#ifndef QT_NO_TOOLTIP
    fpsSpinbox->setToolTip(QApplication::translate(
      "MainWindowUI", "Camera's frame rate setting.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
    label_14->setToolTip(
      QApplication::translate("MainWindowUI", "Actual frame rate.", 0));
#endif // QT_NO_TOOLTIP
    label_14->setText(QApplication::translate("MainWindowUI", "Actual: ", 0));
#ifndef QT_NO_TOOLTIP
    actualFPS->setToolTip(
      QApplication::translate("MainWindowUI", "Actual frame rate.", 0));
#endif // QT_NO_TOOLTIP
    actualFPS->setText(QString());
    label_2->setText(
      QApplication::translate("MainWindowUI", "Pixel format:", 0));
#ifndef QT_NO_TOOLTIP
    pixelFormatSelector->setToolTip(QApplication::translate(
      "MainWindowUI", "Select the camera's pixel format.", 0));
#endif // QT_NO_TOOLTIP
    label_3->setText(
      QApplication::translate("MainWindowUI", "Ethernet MTU:", 0));
    cameraMTUDescription->setText(
      QApplication::translate("MainWindowUI", "Not an ethernet camera.", 0));
    label_13->setText(QApplication::translate("MainWindowUI", "Bandwidth:", 0));
    bandwidthDescription->setText(
      QApplication::translate("MainWindowUI", "Not an ethernet camera.", 0));
    Exposure->setTitle(QApplication::translate("MainWindowUI", "Exposure", 0));
    label_10->setText(QApplication::translate("MainWindowUI", "Gain:", 0));
#ifndef QT_NO_TOOLTIP
    editGainButton->setToolTip(
      QApplication::translate("MainWindowUI", "Enter value manually.", 0));
#endif // QT_NO_TOOLTIP
    editGainButton->setText(QApplication::translate("MainWindowUI", "Edit", 0));
#ifndef QT_NO_TOOLTIP
    gainAutoButton->setToolTip(QApplication::translate(
      "MainWindowUI", "Let camera control sensor gain.", 0));
#endif // QT_NO_TOOLTIP
    gainAutoButton->setText(QApplication::translate("MainWindowUI", "Auto", 0));
    label_11->setText(QApplication::translate("MainWindowUI", "Exposure:", 0));
    exposureSpinbox->setSuffix(
      QApplication::translate("MainWindowUI", " ms", 0));
#ifndef QT_NO_TOOLTIP
    editExposureButton->setToolTip(
      QApplication::translate("MainWindowUI", "Enter value manually.", 0));
#endif // QT_NO_TOOLTIP
    editExposureButton->setText(
      QApplication::translate("MainWindowUI", "Edit", 0));
#ifndef QT_NO_TOOLTIP
    exposureAutoButton->setToolTip(QApplication::translate(
      "MainWindowUI", "Let camera control exposure time.", 0));
#endif // QT_NO_TOOLTIP
    exposureAutoButton->setText(
      QApplication::translate("MainWindowUI", "Auto", 0));
    roiBox->setTitle(
      QApplication::translate("MainWindowUI", "Region of interest", 0));
    label_5->setText(
      QApplication::translate("MainWindowUI", "X of origin:", 0));
    label_6->setText(
      QApplication::translate("MainWindowUI", "Y of origin:", 0));
    label_7->setText(QApplication::translate("MainWindowUI", "Width:", 0));
    label_8->setText(QApplication::translate("MainWindowUI", "Height:", 0));
    label_4->setText(QApplication::translate("MainWindowUI", "Binning:", 0));
#ifndef QT_NO_TOOLTIP
    applyROIButton->setToolTip(
      QApplication::translate("MainWindowUI", "Set the camera's ROI.", 0));
#endif // QT_NO_TOOLTIP
    applyROIButton->setText(
      QApplication::translate("MainWindowUI", "Apply", 0));
#ifndef QT_NO_TOOLTIP
    resetROIButton->setToolTip(QApplication::translate(
      "MainWindowUI", "Reset ROI to the maximum, effective immediately.", 0));
#endif // QT_NO_TOOLTIP
    resetROIButton->setText(
      QApplication::translate("MainWindowUI", "Whole image", 0));
#ifndef QT_NO_TOOLTIP
    pickROIButton->setToolTip(QApplication::translate(
      "MainWindowUI", "Select ROI by drawing a rectangle on the video display.",
      0));
#endif // QT_NO_TOOLTIP
    pickROIButton->setText(QApplication::translate("MainWindowUI", "Pick", 0));
#ifndef QT_NO_TOOLTIP
    ROIsizeCombo->setToolTip(QApplication::translate(
      "MainWindowUI", "Choose a size of ROI used for picking.", 0));
#endif // QT_NO_TOOLTIP
    tabWidget->setTabText(tabWidget->indexOf(basicTab),
                          QApplication::translate("MainWindowUI", "Camera", 0));
    transformBox->setTitle(
      QApplication::translate("MainWindowUI", "Transform image", 0));
    invertColors->setText(
      QApplication::translate("MainWindowUI", "Invert colors", 0));
    flipHorizontal->setText(
      QApplication::translate("MainWindowUI", "Flip horizontally", 0));
    flipVertical->setText(
      QApplication::translate("MainWindowUI", "Flip vertically", 0));
    settingsBox->setTitle(
      QApplication::translate("MainWindowUI", "Program settings", 0));
    label_22->setText(
      QApplication::translate("MainWindowUI", "Exposure refresh", 0));
#ifndef QT_NO_TOOLTIP
    sliderUpdateSpinbox->setToolTip(QApplication::translate(
      "MainWindowUI", "Exposure and gain are periodically updated and sliders "
                      "moved accordingly.",
      0));
#endif // QT_NO_TOOLTIP
    sliderUpdateSpinbox->setSuffix(
      QApplication::translate("MainWindowUI", " ms", 0));
    label_23->setText(
      QApplication::translate("MainWindowUI", "Histogram refresh", 0));
#ifndef QT_NO_TOOLTIP
    histogramUpdateSpinbox->setToolTip(QApplication::translate(
      "MainWindowUI", "Calculating the histogram can be expensive, so it "
                      "shouldn't be updated too often.",
      0));
#endif // QT_NO_TOOLTIP
    histogramUpdateSpinbox->setSuffix(
      QApplication::translate("MainWindowUI", " ms", 0));
    label_24->setText(
      QApplication::translate("MainWindowUI", "Notification timeout", 0));
#ifndef QT_NO_TOOLTIP
    statusTimeoutSpinbox->setToolTip(QApplication::translate(
      "MainWindowUI", "A message is shown in the status bar on certain events "
                      "or errors. This message is cleared after the specified "
                      "interval.",
      0));
#endif // QT_NO_TOOLTIP
    statusTimeoutSpinbox->setSuffix(
      QApplication::translate("MainWindowUI", " s", 0));
    label_25->setText(
      QApplication::translate("MainWindowUI", "Buffer size:", 0));
#ifndef QT_NO_TOOLTIP
    streamFramesSpinbox->setToolTip(QApplication::translate(
      "MainWindowUI", "<html><head/><body><p>This setting controls the number "
                      "of frames standing ready for camera to fill, ensuring "
                      "smooth operation. If the frames arrive faster than they "
                      "can be decoded and/or recorded, the buffer will "
                      "underflow. If this happens intermittently, increase the "
                      "buffer size. It it happens regularly, your system is "
                      "too slow to handle the workload.</p></body></html>",
      0));
#endif // QT_NO_TOOLTIP
    streamFramesSpinbox->setSuffix(
      QApplication::translate("MainWindowUI", " frames", 0));
#ifndef QT_NO_TOOLTIP
    nocopyCheck->setToolTip(QApplication::translate(
      "MainWindowUI", "If this option is selected, as little copying of images "
                      "is done as possible, making the program significantly "
                      "faster. But, if the computer is too slow to process "
                      "images in a timely manner, it may happen that the "
                      "camera will be faster and will overwrite a current "
                      "image. If this is a problem, disable this option.",
      0));
#endif // QT_NO_TOOLTIP
    nocopyCheck->setText(QApplication::translate(
      "MainWindowUI", "Transfer frames without copying", 0));
    miscBox->setTitle(QApplication::translate(
      "MainWindowUI", "Miscellaneous image settings", 0));
#ifndef QT_NO_TOOLTIP
    dropInvalidFrames->setToolTip(QApplication::translate(
      "MainWindowUI",
      "Invalid frames will not be recorded and will be displayed as pure red.",
      0));
#endif // QT_NO_TOOLTIP
    dropInvalidFrames->setText(QApplication::translate(
      "MainWindowUI", "Drop incomplete/invalid frames", 0));
#ifndef QT_NO_TOOLTIP
    markClipped->setToolTip(QApplication::translate(
      "MainWindowUI", "Overexposed pixels are colored pink.", 0));
#endif // QT_NO_TOOLTIP
    markClipped->setText(
      QApplication::translate("MainWindowUI", "Mark clipped highlights", 0));
#ifndef QT_NO_TOOLTIP
    useFastInterpolator->setToolTip(QApplication::translate(
      "MainWindowUI", "Only affects certain pixel formats. Colors are "
                      "calculated using a less exact interpolation.",
      0));
#endif // QT_NO_TOOLTIP
    useFastInterpolator->setText(QApplication::translate(
      "MainWindowUI", "Use fast color approximation", 0));
    postprocBox->setTitle(
      QApplication::translate("MainWindowUI", "Image postprocessing chain", 0));
    postprocAddButton->setText(
      QApplication::translate("MainWindowUI", "Add", 0));
    postprocRemoveButton->setText(
      QApplication::translate("MainWindowUI", "Remove", 0));
    tabWidget->setTabText(
      tabWidget->indexOf(settingsTab),
      QApplication::translate("MainWindowUI", "Settings", 0));
    snapshotBox->setTitle(
      QApplication::translate("MainWindowUI", "Snapshots", 0));
    label_15->setText(
      QApplication::translate("MainWindowUI", "Snapshot directory:", 0));
#ifndef QT_NO_TOOLTIP
    snappathEdit->setToolTip(QApplication::translate(
      "MainWindowUI", "Snapshots will be put in this directory.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
    chooseSnappathButton->setToolTip(
      QApplication::translate("MainWindowUI", "Open directory.", 0));
#endif // QT_NO_TOOLTIP
    chooseSnappathButton->setText(QString());
    label_21->setText(
      QApplication::translate("MainWindowUI", "Snapshot basename:", 0));
#ifndef QT_NO_TOOLTIP
    snapbasenameEdit->setToolTip(QApplication::translate(
      "MainWindowUI", "Snapshot file names will begin with this basename and "
                      "will have the current date and time appended.",
      0));
#endif // QT_NO_TOOLTIP
    label_16->setText(
      QApplication::translate("MainWindowUI", "Snapshot format:", 0));
#ifndef QT_NO_TOOLTIP
    snapshotRaw->setToolTip(QApplication::translate(
      "MainWindowUI", "Frame data is simply dumped into the file undecoded.",
      0));
#endif // QT_NO_TOOLTIP
    snapshotRaw->setText(
      QApplication::translate("MainWindowUI", "Raw data", 0));
#ifndef QT_NO_TOOLTIP
    snapshotPNG->setToolTip(QApplication::translate(
      "MainWindowUI", "The saved snapshot is as shown in the Video Display.",
      0));
#endif // QT_NO_TOOLTIP
    snapshotPNG->setText(
      QApplication::translate("MainWindowUI", "PNG image", 0));
    videoBox->setTitle(QApplication::translate("MainWindowUI", "Video", 0));
    label_12->setText(
      QApplication::translate("MainWindowUI", "Video file:", 0));
#ifndef QT_NO_TOOLTIP
    filenameEdit->setToolTip(QApplication::translate(
      "MainWindowUI", "The file to store recorded video.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
    chooseFilenameButton->setToolTip(
      QApplication::translate("MainWindowUI", "Open file.", 0));
#endif // QT_NO_TOOLTIP
    chooseFilenameButton->setText(QString());
    label_17->setText(
      QApplication::translate("MainWindowUI", "Video format:", 0));
#ifndef QT_NO_TOOLTIP
    videoFormatSelector->setToolTip(QApplication::translate(
      "MainWindowUI", "Choose format of recorded video.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
    recordInfoCheck->setToolTip(QApplication::translate(
      "MainWindowUI", "Raw video formats do not contain any identifying "
                      "information in the video file itself. If checked, an "
                      "additional file with a .qarv extension will be created "
                      "and will contain video format information. This file "
                      "can be opened with the qarv video player.",
      0));
#endif // QT_NO_TOOLTIP
    recordInfoCheck->setText(QApplication::translate(
      "MainWindowUI", "Write video information file", 0));
#ifndef QT_NO_TOOLTIP
    recordTimestampsCheck->setToolTip(QApplication::translate(
      "MainWindowUI", "An additional file with a .timestamps extension will be "
                      "created and will contain frame timestamps in "
                      "nanoseconds, one per line, in text form.",
      0));
#endif // QT_NO_TOOLTIP
    recordTimestampsCheck->setText(
      QApplication::translate("MainWindowUI", "Write timestamp file", 0));
#ifndef QT_NO_TOOLTIP
    recordMetadataCheck->setToolTip(QApplication::translate(
      "MainWindowUI", "Creates an additional file with .caminfo extension. It "
                      "can be loaded using Advanced settings tab.",
      0));
#endif // QT_NO_TOOLTIP
    recordMetadataCheck->setText(QApplication::translate(
      "MainWindowUI", "Dump camera settings along with the video", 0));
    label_19->setText(
      QApplication::translate("MainWindowUI", "Stop recording:", 0));
#ifndef QT_NO_TOOLTIP
    stopRecordingManuallyRadio->setToolTip(QApplication::translate(
      "MainWindowUI", "Recording will not be stopped automatically.", 0));
#endif // QT_NO_TOOLTIP
    stopRecordingManuallyRadio->setText(
      QApplication::translate("MainWindowUI", "Manually", 0));
#ifndef QT_NO_TOOLTIP
    stopRecordingFramesRadio->setToolTip(QApplication::translate(
      "MainWindowUI", "Recording will be stopped when the specified number of "
                      "frames is recorded.",
      0));
#endif // QT_NO_TOOLTIP
    stopRecordingFramesRadio->setText(
      QApplication::translate("MainWindowUI", "After this many frames:", 0));
#ifndef QT_NO_TOOLTIP
    stopRecordingTimeRadio->setToolTip(QApplication::translate(
      "MainWindowUI", "Recording will be stopped when the specified amount of "
                      "time elapses. Time is specified as "
                      "hours:minutes:seconds.",
      0));
#endif // QT_NO_TOOLTIP
    stopRecordingTimeRadio->setText(
      QApplication::translate("MainWindowUI", "After this much time:", 0));
    tabWidget->setTabText(
      tabWidget->indexOf(recordingTab),
      QApplication::translate("MainWindowUI", "Recording", 0));
    label_20->setText(QApplication::translate(
      "MainWindowUI", "<html><head/><body><p>This view provides direct access "
                      "to the camera. Changes may not be reflected in the rest "
                      "of the program.</p></body></html>",
      0));
#ifndef QT_NO_TOOLTIP
    saveSettingsButton->setToolTip(QApplication::translate(
      "MainWindowUI", "Choose a file to store camera settings.", 0));
#endif // QT_NO_TOOLTIP
    saveSettingsButton->setText(
      QApplication::translate("MainWindowUI", "Save settings", 0));
#ifndef QT_NO_TOOLTIP
    loadSettingsButton->setToolTip(QApplication::translate(
      "MainWindowUI", "Choose a file to load camera settings.", 0));
#endif // QT_NO_TOOLTIP
    loadSettingsButton->setText(
      QApplication::translate("MainWindowUI", "Load Settings", 0));
    tabWidget->setTabText(
      tabWidget->indexOf(advancedTab),
      QApplication::translate("MainWindowUI", "Camera Features", 0));
    videodock->setWindowTitle(
      QApplication::translate("MainWindowUI", "Video Display", 0));
#ifndef QT_NO_TOOLTIP
    playButton->setToolTip(
      QApplication::translate("MainWindowUI", "Display live image.", 0));
#endif // QT_NO_TOOLTIP
    playButton->setText(
      QApplication::translate("MainWindowUI", "Display image", 0));
#ifndef QT_NO_TOOLTIP
    unzoomButton->setToolTip(QApplication::translate(
      "MainWindowUI", "Fix display size to video size.", 0));
#endif // QT_NO_TOOLTIP
    unzoomButton->setText(
      QApplication::translate("MainWindowUI", "Actual size", 0));
    histogramdock->setWindowTitle(
      QApplication::translate("MainWindowUI", "Histogram", 0));
#ifndef QT_NO_TOOLTIP
    histogramLog->setToolTip(
      QApplication::translate("MainWindowUI", "Logarithmic histogram.", 0));
#endif // QT_NO_TOOLTIP
    histogramLog->setText(
      QApplication::translate("MainWindowUI", "Logarithmic", 0));
    messageDock->setWindowTitle(
      QApplication::translate("MainWindowUI", "Diagnostic log", 0));
    recordingToolbar->setWindowTitle(
      QApplication::translate("MainWindowUI", "Recording", 0));
    subwindowToolbar->setWindowTitle(
      QApplication::translate("MainWindowUI", "Subwindows", 0));
  } // retranslateUi
};

namespace Ui {
class MainWindowUI : public Ui_MainWindowUI
{
};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
