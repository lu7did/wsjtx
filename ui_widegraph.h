/********************************************************************************
** Form generated from reading UI file 'widegraph.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDEGRAPH_H
#define UI_WIDEGRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/plotter.h"

QT_BEGIN_NAMESPACE

class Ui_WideGraph
{
public:
    QVBoxLayout *verticalLayout;
    CPlotter *widePlot;
    QCheckBox *cbControls;
    QWidget *controls_widget;
    QGridLayout *gridLayout;
    QSlider *gain2dSlider;
    QHBoxLayout *horizontalLayout;
    QLabel *labPalette;
    QPushButton *adjust_palette_push_button;
    QSlider *gainSlider;
    QSpinBox *sbPercent2dPlot;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *cbFlatten;
    QCheckBox *cbRef;
    QSpinBox *smoSpinBox;
    QSpinBox *bppSpinBox;
    QComboBox *paletteComboBox;
    QComboBox *spec2dComboBox;
    QSpinBox *fStartSpinBox;
    QSpinBox *fSplitSpinBox;
    QSpinBox *waterfallAvgSpinBox;
    QSlider *zeroSlider;
    QSlider *zero2dSlider;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line;
    QFrame *line_2;

    void setupUi(QDialog *WideGraph)
    {
        if (WideGraph->objectName().isEmpty())
            WideGraph->setObjectName(QStringLiteral("WideGraph"));
        WideGraph->resize(799, 337);
        verticalLayout = new QVBoxLayout(WideGraph);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widePlot = new CPlotter(WideGraph);
        widePlot->setObjectName(QStringLiteral("widePlot"));
        widePlot->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widePlot->sizePolicy().hasHeightForWidth());
        widePlot->setSizePolicy(sizePolicy);
        widePlot->setMinimumSize(QSize(400, 100));
        widePlot->setFrameShape(QFrame::NoFrame);
        widePlot->setFrameShadow(QFrame::Plain);
        widePlot->setLineWidth(1);
        cbControls = new QCheckBox(widePlot);
        cbControls->setObjectName(QStringLiteral("cbControls"));
        cbControls->setGeometry(QRect(5, 0, 77, 17));
        cbControls->setChecked(true);

        verticalLayout->addWidget(widePlot);

        controls_widget = new QWidget(WideGraph);
        controls_widget->setObjectName(QStringLiteral("controls_widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(controls_widget->sizePolicy().hasHeightForWidth());
        controls_widget->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(controls_widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(5);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gain2dSlider = new QSlider(controls_widget);
        gain2dSlider->setObjectName(QStringLiteral("gain2dSlider"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gain2dSlider->sizePolicy().hasHeightForWidth());
        gain2dSlider->setSizePolicy(sizePolicy2);
        gain2dSlider->setMinimumSize(QSize(100, 0));
        gain2dSlider->setMaximumSize(QSize(200, 16777215));
        gain2dSlider->setMinimum(-50);
        gain2dSlider->setMaximum(50);
        gain2dSlider->setOrientation(Qt::Horizontal);
        gain2dSlider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(gain2dSlider, 1, 8, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labPalette = new QLabel(controls_widget);
        labPalette->setObjectName(QStringLiteral("labPalette"));
        labPalette->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(labPalette);

        adjust_palette_push_button = new QPushButton(controls_widget);
        adjust_palette_push_button->setObjectName(QStringLiteral("adjust_palette_push_button"));
        adjust_palette_push_button->setAutoDefault(false);

        horizontalLayout->addWidget(adjust_palette_push_button);


        gridLayout->addLayout(horizontalLayout, 0, 4, 1, 1);

        gainSlider = new QSlider(controls_widget);
        gainSlider->setObjectName(QStringLiteral("gainSlider"));
        sizePolicy2.setHeightForWidth(gainSlider->sizePolicy().hasHeightForWidth());
        gainSlider->setSizePolicy(sizePolicy2);
        gainSlider->setMinimumSize(QSize(100, 0));
        gainSlider->setMaximumSize(QSize(200, 16777215));
        gainSlider->setMinimum(-50);
        gainSlider->setMaximum(50);
        gainSlider->setOrientation(Qt::Horizontal);
        gainSlider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(gainSlider, 0, 8, 1, 1);

        sbPercent2dPlot = new QSpinBox(controls_widget);
        sbPercent2dPlot->setObjectName(QStringLiteral("sbPercent2dPlot"));
        sbPercent2dPlot->setAlignment(Qt::AlignCenter);
        sbPercent2dPlot->setMaximum(100);
        sbPercent2dPlot->setSingleStep(5);
        sbPercent2dPlot->setValue(30);

        gridLayout->addWidget(sbPercent2dPlot, 0, 11, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        cbFlatten = new QCheckBox(controls_widget);
        cbFlatten->setObjectName(QStringLiteral("cbFlatten"));

        horizontalLayout_3->addWidget(cbFlatten);

        cbRef = new QCheckBox(controls_widget);
        cbRef->setObjectName(QStringLiteral("cbRef"));

        horizontalLayout_3->addWidget(cbRef);


        gridLayout->addLayout(horizontalLayout_3, 0, 6, 1, 1);

        smoSpinBox = new QSpinBox(controls_widget);
        smoSpinBox->setObjectName(QStringLiteral("smoSpinBox"));
        smoSpinBox->setEnabled(false);
        smoSpinBox->setAlignment(Qt::AlignCenter);
        smoSpinBox->setMinimum(1);
        smoSpinBox->setMaximum(7);

        gridLayout->addWidget(smoSpinBox, 1, 11, 1, 1);

        bppSpinBox = new QSpinBox(controls_widget);
        bppSpinBox->setObjectName(QStringLiteral("bppSpinBox"));
        bppSpinBox->setMinimum(1);
        bppSpinBox->setMaximum(1000);
        bppSpinBox->setSingleStep(1);
        bppSpinBox->setValue(2);

        gridLayout->addWidget(bppSpinBox, 0, 1, 1, 1);

        paletteComboBox = new QComboBox(controls_widget);
        paletteComboBox->setObjectName(QStringLiteral("paletteComboBox"));

        gridLayout->addWidget(paletteComboBox, 1, 4, 1, 1);

        spec2dComboBox = new QComboBox(controls_widget);
        spec2dComboBox->addItem(QString());
        spec2dComboBox->addItem(QString());
        spec2dComboBox->addItem(QString());
        spec2dComboBox->addItem(QString());
        spec2dComboBox->addItem(QString());
        spec2dComboBox->setObjectName(QStringLiteral("spec2dComboBox"));

        gridLayout->addWidget(spec2dComboBox, 1, 6, 1, 1);

        fStartSpinBox = new QSpinBox(controls_widget);
        fStartSpinBox->setObjectName(QStringLiteral("fStartSpinBox"));
        fStartSpinBox->setMaximum(4900);
        fStartSpinBox->setSingleStep(100);

        gridLayout->addWidget(fStartSpinBox, 0, 2, 1, 1);

        fSplitSpinBox = new QSpinBox(controls_widget);
        fSplitSpinBox->setObjectName(QStringLiteral("fSplitSpinBox"));
        fSplitSpinBox->setMinimum(0);
        fSplitSpinBox->setMaximum(5000);
        fSplitSpinBox->setSingleStep(100);
        fSplitSpinBox->setValue(3000);

        gridLayout->addWidget(fSplitSpinBox, 1, 1, 1, 1);

        waterfallAvgSpinBox = new QSpinBox(controls_widget);
        waterfallAvgSpinBox->setObjectName(QStringLiteral("waterfallAvgSpinBox"));
        waterfallAvgSpinBox->setMinimum(1);
        waterfallAvgSpinBox->setMaximum(500);

        gridLayout->addWidget(waterfallAvgSpinBox, 1, 2, 1, 1);

        zeroSlider = new QSlider(controls_widget);
        zeroSlider->setObjectName(QStringLiteral("zeroSlider"));
        sizePolicy2.setHeightForWidth(zeroSlider->sizePolicy().hasHeightForWidth());
        zeroSlider->setSizePolicy(sizePolicy2);
        zeroSlider->setMinimumSize(QSize(100, 0));
        zeroSlider->setMaximumSize(QSize(200, 16777215));
        zeroSlider->setMinimum(-50);
        zeroSlider->setMaximum(50);
        zeroSlider->setOrientation(Qt::Horizontal);
        zeroSlider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(zeroSlider, 0, 10, 1, 1);

        zero2dSlider = new QSlider(controls_widget);
        zero2dSlider->setObjectName(QStringLiteral("zero2dSlider"));
        sizePolicy2.setHeightForWidth(zero2dSlider->sizePolicy().hasHeightForWidth());
        zero2dSlider->setSizePolicy(sizePolicy2);
        zero2dSlider->setMinimumSize(QSize(100, 0));
        zero2dSlider->setMaximumSize(QSize(200, 16777215));
        zero2dSlider->setMinimum(-50);
        zero2dSlider->setMaximum(50);
        zero2dSlider->setOrientation(Qt::Horizontal);
        zero2dSlider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(zero2dSlider, 1, 10, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 2, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 12, 2, 1);

        line = new QFrame(controls_widget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 3, 2, 1);

        line_2 = new QFrame(controls_widget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 0, 5, 2, 1);


        verticalLayout->addWidget(controls_widget);

        QWidget::setTabOrder(cbControls, bppSpinBox);
        QWidget::setTabOrder(bppSpinBox, fStartSpinBox);
        QWidget::setTabOrder(fStartSpinBox, fSplitSpinBox);
        QWidget::setTabOrder(fSplitSpinBox, waterfallAvgSpinBox);
        QWidget::setTabOrder(waterfallAvgSpinBox, adjust_palette_push_button);
        QWidget::setTabOrder(adjust_palette_push_button, paletteComboBox);
        QWidget::setTabOrder(paletteComboBox, cbFlatten);
        QWidget::setTabOrder(cbFlatten, cbRef);
        QWidget::setTabOrder(cbRef, spec2dComboBox);
        QWidget::setTabOrder(spec2dComboBox, gainSlider);
        QWidget::setTabOrder(gainSlider, zeroSlider);
        QWidget::setTabOrder(zeroSlider, gain2dSlider);
        QWidget::setTabOrder(gain2dSlider, zero2dSlider);
        QWidget::setTabOrder(zero2dSlider, sbPercent2dPlot);
        QWidget::setTabOrder(sbPercent2dPlot, smoSpinBox);

        retranslateUi(WideGraph);

        spec2dComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WideGraph);
    } // setupUi

    void retranslateUi(QDialog *WideGraph)
    {
        WideGraph->setWindowTitle(QApplication::translate("WideGraph", "Dialog", nullptr));
        cbControls->setText(QApplication::translate("WideGraph", "Controls", nullptr));
#ifndef QT_NO_TOOLTIP
        gain2dSlider->setToolTip(QApplication::translate("WideGraph", "Spectrum gain", nullptr));
#endif // QT_NO_TOOLTIP
        labPalette->setText(QApplication::translate("WideGraph", "  Palette ", nullptr));
#ifndef QT_NO_TOOLTIP
        adjust_palette_push_button->setToolTip(QApplication::translate("WideGraph", "<html><head/><body><p>Enter definition for a new color palette.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        adjust_palette_push_button->setText(QApplication::translate("WideGraph", "Adjust...", nullptr));
#ifndef QT_NO_TOOLTIP
        gainSlider->setToolTip(QApplication::translate("WideGraph", "Waterfall gain", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        sbPercent2dPlot->setToolTip(QApplication::translate("WideGraph", "<html><head/><body><p>Set fractional size of spectrum in this window.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        sbPercent2dPlot->setSuffix(QApplication::translate("WideGraph", " %", nullptr));
        sbPercent2dPlot->setPrefix(QApplication::translate("WideGraph", "Spec ", nullptr));
#ifndef QT_NO_TOOLTIP
        cbFlatten->setToolTip(QApplication::translate("WideGraph", "<html><head/><body><p>Flatten spectral baseline over the full displayed interval.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cbFlatten->setText(QApplication::translate("WideGraph", "Flatten", nullptr));
#ifndef QT_NO_TOOLTIP
        cbRef->setToolTip(QApplication::translate("WideGraph", "<html><head/><body><p>Compute and save a reference spectrum.  (Not yet fully implemented.)</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cbRef->setText(QApplication::translate("WideGraph", "Ref Spec", nullptr));
#ifndef QT_NO_TOOLTIP
        smoSpinBox->setToolTip(QApplication::translate("WideGraph", "Smoothing of Linear Average spectrum", nullptr));
#endif // QT_NO_TOOLTIP
        smoSpinBox->setSuffix(QString());
        smoSpinBox->setPrefix(QApplication::translate("WideGraph", "Smooth  ", nullptr));
#ifndef QT_NO_TOOLTIP
        bppSpinBox->setToolTip(QApplication::translate("WideGraph", "Compression factor for frequency scale", nullptr));
#endif // QT_NO_TOOLTIP
        bppSpinBox->setSuffix(QString());
        bppSpinBox->setPrefix(QApplication::translate("WideGraph", "Bins/Pixel  ", nullptr));
#ifndef QT_NO_TOOLTIP
        paletteComboBox->setToolTip(QApplication::translate("WideGraph", "Select waterfall palette", nullptr));
#endif // QT_NO_TOOLTIP
        spec2dComboBox->setItemText(0, QApplication::translate("WideGraph", "Current", nullptr));
        spec2dComboBox->setItemText(1, QApplication::translate("WideGraph", "Cumulative", nullptr));
        spec2dComboBox->setItemText(2, QApplication::translate("WideGraph", "Linear Avg", nullptr));
        spec2dComboBox->setItemText(3, QApplication::translate("WideGraph", "Reference", nullptr));
        spec2dComboBox->setItemText(4, QApplication::translate("WideGraph", "Q65_Sync", nullptr));

#ifndef QT_NO_TOOLTIP
        spec2dComboBox->setToolTip(QApplication::translate("WideGraph", "<html><head/><body><p>Select data for spectral display</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        fStartSpinBox->setToolTip(QApplication::translate("WideGraph", "<html><head/><body><p>Frequency at left edge of waterfall</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        fStartSpinBox->setSuffix(QApplication::translate("WideGraph", " Hz", nullptr));
        fStartSpinBox->setPrefix(QApplication::translate("WideGraph", "Start ", nullptr));
#ifndef QT_NO_TOOLTIP
        fSplitSpinBox->setToolTip(QApplication::translate("WideGraph", "<html><head/><body><p>Decode JT9 only above this frequency</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        fSplitSpinBox->setSuffix(QApplication::translate("WideGraph", "  Hz", nullptr));
        fSplitSpinBox->setPrefix(QApplication::translate("WideGraph", "Split  ", nullptr));
#ifndef QT_NO_TOOLTIP
        waterfallAvgSpinBox->setToolTip(QApplication::translate("WideGraph", "Number of FFTs averaged (controls waterfall scrolling rate)", nullptr));
#endif // QT_NO_TOOLTIP
        waterfallAvgSpinBox->setPrefix(QApplication::translate("WideGraph", "N Avg ", nullptr));
#ifndef QT_NO_TOOLTIP
        zeroSlider->setToolTip(QApplication::translate("WideGraph", "Waterfall zero", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        zero2dSlider->setToolTip(QApplication::translate("WideGraph", "Spectrum zero", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class WideGraph: public Ui_WideGraph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDEGRAPH_H
