/********************************************************************************
** Form generated from reading UI file 'echograph.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ECHOGRAPH_H
#define UI_ECHOGRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "widgets/plotter.h"

QT_BEGIN_NAMESPACE

class Ui_EchoGraph
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    EPlotter *echoPlot;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *binsPerPixelSpinBox;
    QLabel *label_4;
    QSlider *gainSlider;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label;
    QSlider *zeroSlider;
    QSpacerItem *horizontalSpacer;
    QSpinBox *smoothSpinBox;
    QSpacerItem *horizontalSpacer_3;
    QLabel *nsum_label;
    QPushButton *pbColors;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QDialog *EchoGraph)
    {
        if (EchoGraph->objectName().isEmpty())
            EchoGraph->setObjectName(QStringLiteral("EchoGraph"));
        EchoGraph->resize(625, 336);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EchoGraph->sizePolicy().hasHeightForWidth());
        EchoGraph->setSizePolicy(sizePolicy);
        EchoGraph->setMinimumSize(QSize(570, 0));
        verticalLayout_2 = new QVBoxLayout(EchoGraph);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 2, -1, 2);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        echoPlot = new EPlotter(EchoGraph);
        echoPlot->setObjectName(QStringLiteral("echoPlot"));
        echoPlot->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(echoPlot->sizePolicy().hasHeightForWidth());
        echoPlot->setSizePolicy(sizePolicy1);
        echoPlot->setMinimumSize(QSize(273, 200));
        echoPlot->setFrameShape(QFrame::StyledPanel);
        echoPlot->setFrameShadow(QFrame::Sunken);
        echoPlot->setLineWidth(1);

        verticalLayout->addWidget(echoPlot);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        binsPerPixelSpinBox = new QSpinBox(EchoGraph);
        binsPerPixelSpinBox->setObjectName(QStringLiteral("binsPerPixelSpinBox"));
        binsPerPixelSpinBox->setMinimumSize(QSize(60, 0));
        binsPerPixelSpinBox->setMinimum(1);
        binsPerPixelSpinBox->setMaximum(10);

        horizontalLayout_3->addWidget(binsPerPixelSpinBox);

        label_4 = new QLabel(EchoGraph);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        gainSlider = new QSlider(EchoGraph);
        gainSlider->setObjectName(QStringLiteral("gainSlider"));
        gainSlider->setMinimum(-30);
        gainSlider->setMaximum(30);
        gainSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(gainSlider);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        label = new QLabel(EchoGraph);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        zeroSlider = new QSlider(EchoGraph);
        zeroSlider->setObjectName(QStringLiteral("zeroSlider"));
        zeroSlider->setMinimum(-150);
        zeroSlider->setMaximum(150);
        zeroSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(zeroSlider);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        smoothSpinBox = new QSpinBox(EchoGraph);
        smoothSpinBox->setObjectName(QStringLiteral("smoothSpinBox"));
        smoothSpinBox->setMinimumSize(QSize(60, 0));
        smoothSpinBox->setMaximum(20);

        horizontalLayout_3->addWidget(smoothSpinBox);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        nsum_label = new QLabel(EchoGraph);
        nsum_label->setObjectName(QStringLiteral("nsum_label"));
        nsum_label->setMinimumSize(QSize(30, 0));
        nsum_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(nsum_label);

        pbColors = new QPushButton(EchoGraph);
        pbColors->setObjectName(QStringLiteral("pbColors"));
        pbColors->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(pbColors);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(EchoGraph);

        QMetaObject::connectSlotsByName(EchoGraph);
    } // setupUi

    void retranslateUi(QDialog *EchoGraph)
    {
        EchoGraph->setWindowTitle(QApplication::translate("EchoGraph", "Echo Graph", nullptr));
#ifndef QT_NO_TOOLTIP
        binsPerPixelSpinBox->setToolTip(QApplication::translate("EchoGraph", "<html><head/><body><p>Compression factor for frequency scale</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        binsPerPixelSpinBox->setPrefix(QApplication::translate("EchoGraph", "Bins/Pixel  ", nullptr));
        label_4->setText(QApplication::translate("EchoGraph", "Gain", nullptr));
#ifndef QT_NO_TOOLTIP
        gainSlider->setToolTip(QApplication::translate("EchoGraph", "<html><head/><body><p>Echo spectrum gain</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("EchoGraph", "Zero", nullptr));
#ifndef QT_NO_TOOLTIP
        zeroSlider->setToolTip(QApplication::translate("EchoGraph", "<html><head/><body><p>Echo spectrum zero</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        smoothSpinBox->setToolTip(QApplication::translate("EchoGraph", "<html><head/><body><p>Smoothing of echo spectrum</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        smoothSpinBox->setPrefix(QApplication::translate("EchoGraph", "Smooth  ", nullptr));
#ifndef QT_NO_TOOLTIP
        nsum_label->setToolTip(QApplication::translate("EchoGraph", "<html><head/><body><p>Number of echo transmissions averaged</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        nsum_label->setText(QApplication::translate("EchoGraph", "N: 0", nullptr));
#ifndef QT_NO_TOOLTIP
        pbColors->setToolTip(QApplication::translate("EchoGraph", "<html><head/><body><p>Click to cycle through a sequence of colors and line widths.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbColors->setText(QApplication::translate("EchoGraph", "Colors", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EchoGraph: public Ui_EchoGraph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ECHOGRAPH_H
