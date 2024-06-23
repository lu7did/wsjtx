/********************************************************************************
** Form generated from reading UI file 'astro.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASTRO_H
#define UI_ASTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Astro
{
public:
    QGridLayout *gridLayout;
    QWidget *doppler_widget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *rbFullTrack;
    QRadioButton *rbOwnEcho;
    QRadioButton *rbConstFreqOnMoon;
    QRadioButton *rbOnDxEcho;
    QRadioButton *rbCallDx;
    QRadioButton *rbNoDoppler;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QLabel *sked_tx_frequency_label;
    QLabel *sked_frequency_label;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *text_label;
    QHBoxLayout *horizontalLayout;
    QCheckBox *cbDopplerTracking;

    void setupUi(QWidget *Astro)
    {
        if (Astro->objectName().isEmpty())
            Astro->setObjectName(QStringLiteral("Astro"));
        Astro->resize(359, 342);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Astro->sizePolicy().hasHeightForWidth());
        Astro->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(Astro);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        doppler_widget = new QWidget(Astro);
        doppler_widget->setObjectName(QStringLiteral("doppler_widget"));
        doppler_widget->setStyleSheet(QLatin1String("* {\n"
"	font-weight: normal;\n"
"}"));
        verticalLayout = new QVBoxLayout(doppler_widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(doppler_widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        rbFullTrack = new QRadioButton(groupBox);
        rbFullTrack->setObjectName(QStringLiteral("rbFullTrack"));
        rbFullTrack->setChecked(true);

        verticalLayout_2->addWidget(rbFullTrack);

        rbOwnEcho = new QRadioButton(groupBox);
        rbOwnEcho->setObjectName(QStringLiteral("rbOwnEcho"));

        verticalLayout_2->addWidget(rbOwnEcho);

        rbConstFreqOnMoon = new QRadioButton(groupBox);
        rbConstFreqOnMoon->setObjectName(QStringLiteral("rbConstFreqOnMoon"));
        rbConstFreqOnMoon->setChecked(false);

        verticalLayout_2->addWidget(rbConstFreqOnMoon);

        rbOnDxEcho = new QRadioButton(groupBox);
        rbOnDxEcho->setObjectName(QStringLiteral("rbOnDxEcho"));
        rbOnDxEcho->setChecked(false);

        verticalLayout_2->addWidget(rbOnDxEcho);

        rbCallDx = new QRadioButton(groupBox);
        rbCallDx->setObjectName(QStringLiteral("rbCallDx"));
        rbCallDx->setChecked(false);

        verticalLayout_2->addWidget(rbCallDx);

        rbNoDoppler = new QRadioButton(groupBox);
        rbNoDoppler->setObjectName(QStringLiteral("rbNoDoppler"));
        rbNoDoppler->setChecked(false);

        verticalLayout_2->addWidget(rbNoDoppler);


        verticalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(doppler_widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setEnabled(true);
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        sked_tx_frequency_label = new QLabel(groupBox_3);
        sked_tx_frequency_label->setObjectName(QStringLiteral("sked_tx_frequency_label"));
        sked_tx_frequency_label->setStyleSheet(QLatin1String("* {\n"
"	font-family: Courier;\n"
"	font-size: 12pt;\n"
"	font-weight: bold;\n"
"}"));
        sked_tx_frequency_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(sked_tx_frequency_label, 1, 1, 1, 1);

        sked_frequency_label = new QLabel(groupBox_3);
        sked_frequency_label->setObjectName(QStringLiteral("sked_frequency_label"));
        sked_frequency_label->setStyleSheet(QLatin1String("* {\n"
"	font-family: Courier;\n"
"	font-size: 12pt;\n"
"	font-weight: bold;\n"
"}"));
        sked_frequency_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(sked_frequency_label, 0, 1, 1, 1);

        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("* {\n"
"	font-family: Courier;\n"
"	font-size: 12pt;\n"
"	font-weight: bold;\n"
"}"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("* {\n"
"	font-family: Courier;\n"
"	font-size: 12pt;\n"
"	font-weight: bold;\n"
"}"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setTextFormat(Qt::AutoText);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 2);

        gridLayout_2->setColumnStretch(1, 1);

        verticalLayout->addWidget(groupBox_3);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        gridLayout->addWidget(doppler_widget, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        text_label = new QLabel(Astro);
        text_label->setObjectName(QStringLiteral("text_label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(text_label->sizePolicy().hasHeightForWidth());
        text_label->setSizePolicy(sizePolicy1);
        text_label->setStyleSheet(QLatin1String("* {\n"
"	font-family: Courier;\n"
"	font-size: 12pt;\n"
"	font-weight: bold;\n"
"}"));
        text_label->setFrameShadow(QFrame::Sunken);
        text_label->setAlignment(Qt::AlignCenter);
        text_label->setMargin(6);

        verticalLayout_3->addWidget(text_label, 0, Qt::AlignHCenter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cbDopplerTracking = new QCheckBox(Astro);
        cbDopplerTracking->setObjectName(QStringLiteral("cbDopplerTracking"));
        cbDopplerTracking->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(cbDopplerTracking);


        verticalLayout_3->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(Astro);

        QMetaObject::connectSlotsByName(Astro);
    } // setupUi

    void retranslateUi(QWidget *Astro)
    {
        groupBox->setTitle(QApplication::translate("Astro", "Doppler tracking", nullptr));
#ifndef QT_NO_TOOLTIP
        rbFullTrack->setToolTip(QApplication::translate("Astro", "<html><head/><body><p>One station does all Doppler shift correction, their QSO partner receives and transmits on the sked frequency.</p><p>If the rig does not accept CAT QSY commands while transmitting a single correction is applied for the whole transmit period.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        rbFullTrack->setText(QApplication::translate("Astro", "Full Doppler to DX Grid", nullptr));
#ifndef QT_NO_TOOLTIP
        rbOwnEcho->setToolTip(QApplication::translate("Astro", "<html><head/><body><p>Transmit takes place on sked frequency and receive frequency is  corrected for own echoes. </p><p>This mode can be used for calling CQ, or when using Echo mode.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        rbOwnEcho->setText(QApplication::translate("Astro", "Own Echo", nullptr));
#ifndef QT_NO_TOOLTIP
        rbConstFreqOnMoon->setToolTip(QApplication::translate("Astro", "<html><head/><body><p>Both stations correct for Doppler shift such that they would be heard on the moon at the sked frequency.</p><p>If the rig does not accept CAT QSY commands while transmitting a single correction is applied for the whole transmit period.</p><p>Use this option also for Echo mode.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        rbConstFreqOnMoon->setText(QApplication::translate("Astro", "Constant frequency on Moon", nullptr));
#ifndef QT_NO_TOOLTIP
        rbOnDxEcho->setToolTip(QApplication::translate("Astro", "<html><head/><body><p>DX station announces their TX Freq, which is entered as the Sked Freq. Correction applied to RX and TX so you appear on the DX's station's own echo Freq.</p><p>If the rig does not accept CAT QSY commands while transmitting a single correction is applied for the whole transmit period.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        rbOnDxEcho->setText(QApplication::translate("Astro", "On DX Echo", nullptr));
#ifndef QT_NO_TOOLTIP
        rbCallDx->setToolTip(QApplication::translate("Astro", "<html><head/><body><p>Tune radio manually and select this mode to put your echo on the same frequency.</p><p>If the rig does not accept CAT QSY commands while transmitting a single correction is applied for the whole transmit period.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        rbCallDx->setText(QApplication::translate("Astro", "Call DX", nullptr));
#ifndef QT_NO_TOOLTIP
        rbNoDoppler->setToolTip(QApplication::translate("Astro", "<html><head/><body><p>No Doppler shift correction is applied. This may be used when the QSO partner does full Doppler correction to your grid square.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        rbNoDoppler->setText(QApplication::translate("Astro", "None", nullptr));
        groupBox_3->setTitle(QApplication::translate("Astro", "Sked frequency", nullptr));
        sked_tx_frequency_label->setText(QApplication::translate("Astro", "0", nullptr));
        sked_frequency_label->setText(QApplication::translate("Astro", "0", nullptr));
        label->setText(QApplication::translate("Astro", "Rx:", nullptr));
        label_2->setText(QApplication::translate("Astro", "Tx:", nullptr));
        label_3->setText(QApplication::translate("Astro", "<html><head/><body><p>Press and hold the CTRL key to adjust the sked frequency manually with the rig's VFO dial or enter frequency directly into the band entry field on the main window.</p></body></html>", nullptr));
        text_label->setText(QApplication::translate("Astro", "Astro Data", nullptr));
        cbDopplerTracking->setText(QApplication::translate("Astro", "Doppler tracking", nullptr));
        Q_UNUSED(Astro);
    } // retranslateUi

};

namespace Ui {
    class Astro: public Ui_Astro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASTRO_H
