/********************************************************************************
** Form generated from reading UI file 'fastgraph.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FASTGRAPH_H
#define UI_FASTGRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/fastplot.h"

QT_BEGIN_NAMESPACE

class Ui_FastGraph
{
public:
    QVBoxLayout *verticalLayout;
    FPlotter *fastPlot;
    QWidget *controls_widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QSlider *gainSlider;
    QSpacerItem *horizontalSpacer_7;
    QSlider *zeroSlider;
    QSpacerItem *horizontalSpacer;
    QSlider *greenZeroSlider;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pbAutoLevel;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QDialog *FastGraph)
    {
        if (FastGraph->objectName().isEmpty())
            FastGraph->setObjectName(QStringLiteral("FastGraph"));
        FastGraph->resize(707, 253);
        verticalLayout = new QVBoxLayout(FastGraph);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        fastPlot = new FPlotter(FastGraph);
        fastPlot->setObjectName(QStringLiteral("fastPlot"));
        fastPlot->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fastPlot->sizePolicy().hasHeightForWidth());
        fastPlot->setSizePolicy(sizePolicy);
        fastPlot->setMinimumSize(QSize(703, 220));
        fastPlot->setMaximumSize(QSize(703, 220));
        fastPlot->setFrameShape(QFrame::StyledPanel);
        fastPlot->setFrameShadow(QFrame::Sunken);
        fastPlot->setLineWidth(1);

        verticalLayout->addWidget(fastPlot);

        controls_widget = new QWidget(FastGraph);
        controls_widget->setObjectName(QStringLiteral("controls_widget"));
        horizontalLayout = new QHBoxLayout(controls_widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalSpacer_2 = new QSpacerItem(99, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        gainSlider = new QSlider(controls_widget);
        gainSlider->setObjectName(QStringLiteral("gainSlider"));
        gainSlider->setMinimum(-60);
        gainSlider->setMaximum(140);
        gainSlider->setPageStep(40);
        gainSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(gainSlider);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        zeroSlider = new QSlider(controls_widget);
        zeroSlider->setObjectName(QStringLiteral("zeroSlider"));
        zeroSlider->setMinimum(-60);
        zeroSlider->setMaximum(120);
        zeroSlider->setValue(60);
        zeroSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(zeroSlider);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        greenZeroSlider = new QSlider(controls_widget);
        greenZeroSlider->setObjectName(QStringLiteral("greenZeroSlider"));
        greenZeroSlider->setMinimum(-100);
        greenZeroSlider->setMaximum(160);
        greenZeroSlider->setValue(30);
        greenZeroSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(greenZeroSlider);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pbAutoLevel = new QPushButton(controls_widget);
        pbAutoLevel->setObjectName(QStringLiteral("pbAutoLevel"));

        horizontalLayout->addWidget(pbAutoLevel);

        horizontalSpacer_5 = new QSpacerItem(99, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout->addWidget(controls_widget);


        retranslateUi(FastGraph);

        QMetaObject::connectSlotsByName(FastGraph);
    } // setupUi

    void retranslateUi(QDialog *FastGraph)
    {
        FastGraph->setWindowTitle(QApplication::translate("FastGraph", "Fast Graph", nullptr));
#ifndef QT_NO_TOOLTIP
        gainSlider->setToolTip(QApplication::translate("FastGraph", "Waterfall gain", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        zeroSlider->setToolTip(QApplication::translate("FastGraph", "Waterfall zero", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        greenZeroSlider->setToolTip(QApplication::translate("FastGraph", "Spectrum zero", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pbAutoLevel->setToolTip(QApplication::translate("FastGraph", "<html><head/><body><p>Set reasonable levels for gain and zero sliders.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbAutoLevel->setText(QApplication::translate("FastGraph", "Auto Level", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FastGraph: public Ui_FastGraph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FASTGRAPH_H
