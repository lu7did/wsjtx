/********************************************************************************
** Form generated from reading UI file 'logqso.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGQSO_H
#define UI_LOGQSO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LogQSO
{
public:
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *lab1;
    QLineEdit *call;
    QVBoxLayout *verticalLayout_2;
    QLabel *lab2;
    QDateTimeEdit *start_date_time;
    QVBoxLayout *verticalLayout_3;
    QLabel *lab2_3;
    QDateTimeEdit *end_date_time;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *lab4;
    QLineEdit *mode;
    QVBoxLayout *verticalLayout_6;
    QLabel *lab5;
    QLineEdit *band;
    QVBoxLayout *verticalLayout_7;
    QLabel *lab6;
    QLineEdit *sent;
    QVBoxLayout *verticalLayout_8;
    QLabel *lab7;
    QLineEdit *rcvd;
    QVBoxLayout *verticalLayout_9;
    QLabel *lab8;
    QLineEdit *grid;
    QVBoxLayout *verticalLayout_10;
    QLabel *lab9;
    QLineEdit *name;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLineEdit *txPower;
    QCheckBox *cbTxPower;
    QHBoxLayout *horizontalLayout;
    QLabel *lab10;
    QLineEdit *comments;
    QCheckBox *cbComments;
    QHBoxLayout *horizontalLayout_5;
    QLabel *operatorLabel;
    QLineEdit *loggedOperator;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *exchSent;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QLineEdit *exchRcvd;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QComboBox *comboBoxPropMode;
    QCheckBox *cbPropMode;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LogQSO)
    {
        if (LogQSO->objectName().isEmpty())
            LogQSO->setObjectName(QStringLiteral("LogQSO"));
        LogQSO->resize(440, 322);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LogQSO->sizePolicy().hasHeightForWidth());
        LogQSO->setSizePolicy(sizePolicy);
        verticalLayout_5 = new QVBoxLayout(LogQSO);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label = new QLabel(LogQSO);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        verticalLayout_5->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lab1 = new QLabel(LogQSO);
        lab1->setObjectName(QStringLiteral("lab1"));
        lab1->setFont(font);
        lab1->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lab1);

        call = new QLineEdit(LogQSO);
        call->setObjectName(QStringLiteral("call"));

        verticalLayout->addWidget(call);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lab2 = new QLabel(LogQSO);
        lab2->setObjectName(QStringLiteral("lab2"));
        lab2->setFont(font);
        lab2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lab2);

        start_date_time = new QDateTimeEdit(LogQSO);
        start_date_time->setObjectName(QStringLiteral("start_date_time"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(start_date_time->sizePolicy().hasHeightForWidth());
        start_date_time->setSizePolicy(sizePolicy1);
        start_date_time->setTimeSpec(Qt::UTC);

        verticalLayout_2->addWidget(start_date_time);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lab2_3 = new QLabel(LogQSO);
        lab2_3->setObjectName(QStringLiteral("lab2_3"));
        lab2_3->setFont(font);
        lab2_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lab2_3);

        end_date_time = new QDateTimeEdit(LogQSO);
        end_date_time->setObjectName(QStringLiteral("end_date_time"));
        sizePolicy1.setHeightForWidth(end_date_time->sizePolicy().hasHeightForWidth());
        end_date_time->setSizePolicy(sizePolicy1);
        end_date_time->setTimeSpec(Qt::UTC);

        verticalLayout_3->addWidget(end_date_time);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lab4 = new QLabel(LogQSO);
        lab4->setObjectName(QStringLiteral("lab4"));
        lab4->setFont(font);
        lab4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lab4);

        mode = new QLineEdit(LogQSO);
        mode->setObjectName(QStringLiteral("mode"));
        mode->setMaximumSize(QSize(70, 16777215));

        verticalLayout_4->addWidget(mode);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        lab5 = new QLabel(LogQSO);
        lab5->setObjectName(QStringLiteral("lab5"));
        lab5->setFont(font);
        lab5->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(lab5);

        band = new QLineEdit(LogQSO);
        band->setObjectName(QStringLiteral("band"));
        band->setMaximumSize(QSize(50, 16777215));

        verticalLayout_6->addWidget(band);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        lab6 = new QLabel(LogQSO);
        lab6->setObjectName(QStringLiteral("lab6"));
        lab6->setFont(font);
        lab6->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(lab6);

        sent = new QLineEdit(LogQSO);
        sent->setObjectName(QStringLiteral("sent"));
        sent->setMaximumSize(QSize(50, 16777215));

        verticalLayout_7->addWidget(sent);


        horizontalLayout_4->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        lab7 = new QLabel(LogQSO);
        lab7->setObjectName(QStringLiteral("lab7"));
        lab7->setFont(font);
        lab7->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(lab7);

        rcvd = new QLineEdit(LogQSO);
        rcvd->setObjectName(QStringLiteral("rcvd"));
        rcvd->setMaximumSize(QSize(50, 16777215));

        verticalLayout_8->addWidget(rcvd);


        horizontalLayout_4->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        lab8 = new QLabel(LogQSO);
        lab8->setObjectName(QStringLiteral("lab8"));
        lab8->setFont(font);
        lab8->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(lab8);

        grid = new QLineEdit(LogQSO);
        grid->setObjectName(QStringLiteral("grid"));
        grid->setMaximumSize(QSize(70, 16777215));

        verticalLayout_9->addWidget(grid);


        horizontalLayout_4->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        lab9 = new QLabel(LogQSO);
        lab9->setObjectName(QStringLiteral("lab9"));
        lab9->setEnabled(true);
        lab9->setFont(font);
        lab9->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(lab9);

        name = new QLineEdit(LogQSO);
        name->setObjectName(QStringLiteral("name"));
        name->setEnabled(true);

        verticalLayout_10->addWidget(name);


        horizontalLayout_4->addLayout(verticalLayout_10);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_2 = new QLabel(LogQSO);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_6->addWidget(label_2);

        txPower = new QLineEdit(LogQSO);
        txPower->setObjectName(QStringLiteral("txPower"));

        horizontalLayout_6->addWidget(txPower);

        cbTxPower = new QCheckBox(LogQSO);
        cbTxPower->setObjectName(QStringLiteral("cbTxPower"));

        horizontalLayout_6->addWidget(cbTxPower);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lab10 = new QLabel(LogQSO);
        lab10->setObjectName(QStringLiteral("lab10"));
        lab10->setEnabled(true);
        lab10->setFont(font);

        horizontalLayout->addWidget(lab10);

        comments = new QLineEdit(LogQSO);
        comments->setObjectName(QStringLiteral("comments"));
        comments->setEnabled(true);

        horizontalLayout->addWidget(comments);

        cbComments = new QCheckBox(LogQSO);
        cbComments->setObjectName(QStringLiteral("cbComments"));

        horizontalLayout->addWidget(cbComments);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        operatorLabel = new QLabel(LogQSO);
        operatorLabel->setObjectName(QStringLiteral("operatorLabel"));
        operatorLabel->setFont(font);

        horizontalLayout_5->addWidget(operatorLabel);

        loggedOperator = new QLineEdit(LogQSO);
        loggedOperator->setObjectName(QStringLiteral("loggedOperator"));
        loggedOperator->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_5->addWidget(loggedOperator);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(LogQSO);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        exchSent = new QLineEdit(LogQSO);
        exchSent->setObjectName(QStringLiteral("exchSent"));
        exchSent->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(exchSent);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_4 = new QLabel(LogQSO);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        exchRcvd = new QLineEdit(LogQSO);
        exchRcvd->setObjectName(QStringLiteral("exchRcvd"));
        exchRcvd->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(exchRcvd);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_5 = new QLabel(LogQSO);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_8->addWidget(label_5);

        comboBoxPropMode = new QComboBox(LogQSO);
        comboBoxPropMode->setObjectName(QStringLiteral("comboBoxPropMode"));

        horizontalLayout_8->addWidget(comboBoxPropMode);

        cbPropMode = new QCheckBox(LogQSO);
        cbPropMode->setObjectName(QStringLiteral("cbPropMode"));

        horizontalLayout_8->addWidget(cbPropMode);


        verticalLayout_5->addLayout(horizontalLayout_8);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(LogQSO);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_5->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        lab1->setBuddy(call);
        lab2->setBuddy(start_date_time);
        lab2_3->setBuddy(end_date_time);
        lab4->setBuddy(mode);
        lab5->setBuddy(band);
        lab6->setBuddy(sent);
        lab7->setBuddy(rcvd);
        lab8->setBuddy(grid);
        lab9->setBuddy(name);
        label_2->setBuddy(txPower);
        lab10->setBuddy(comments);
        operatorLabel->setBuddy(loggedOperator);
        label_3->setBuddy(exchSent);
        label_4->setBuddy(exchRcvd);
        label_5->setBuddy(comboBoxPropMode);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(call, start_date_time);
        QWidget::setTabOrder(start_date_time, end_date_time);
        QWidget::setTabOrder(end_date_time, mode);
        QWidget::setTabOrder(mode, band);
        QWidget::setTabOrder(band, sent);
        QWidget::setTabOrder(sent, rcvd);
        QWidget::setTabOrder(rcvd, grid);
        QWidget::setTabOrder(grid, name);
        QWidget::setTabOrder(name, txPower);
        QWidget::setTabOrder(txPower, cbTxPower);
        QWidget::setTabOrder(cbTxPower, comments);
        QWidget::setTabOrder(comments, cbComments);
        QWidget::setTabOrder(cbComments, loggedOperator);
        QWidget::setTabOrder(loggedOperator, exchSent);
        QWidget::setTabOrder(exchSent, exchRcvd);
        QWidget::setTabOrder(exchRcvd, comboBoxPropMode);
        QWidget::setTabOrder(comboBoxPropMode, cbPropMode);

        retranslateUi(LogQSO);
        QObject::connect(buttonBox, SIGNAL(accepted()), LogQSO, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LogQSO, SLOT(reject()));

        QMetaObject::connectSlotsByName(LogQSO);
    } // setupUi

    void retranslateUi(QDialog *LogQSO)
    {
        label->setText(QApplication::translate("LogQSO", "Click OK to confirm the following QSO:", nullptr));
        lab1->setText(QApplication::translate("LogQSO", "Call", nullptr));
        lab2->setText(QApplication::translate("LogQSO", "Start", nullptr));
        start_date_time->setDisplayFormat(QApplication::translate("LogQSO", "dd/MM/yyyy HH:mm:ss", nullptr));
        lab2_3->setText(QApplication::translate("LogQSO", "End", nullptr));
        end_date_time->setDisplayFormat(QApplication::translate("LogQSO", "dd/MM/yyyy HH:mm:ss", nullptr));
        lab4->setText(QApplication::translate("LogQSO", "Mode", nullptr));
        lab5->setText(QApplication::translate("LogQSO", "Band", nullptr));
        lab6->setText(QApplication::translate("LogQSO", "Rpt Sent", nullptr));
        lab7->setText(QApplication::translate("LogQSO", "Rpt Rcvd", nullptr));
        lab8->setText(QApplication::translate("LogQSO", "Grid", nullptr));
        lab9->setText(QApplication::translate("LogQSO", "Name", nullptr));
        label_2->setText(QApplication::translate("LogQSO", "Tx power", nullptr));
        cbTxPower->setText(QApplication::translate("LogQSO", "Retain", nullptr));
        lab10->setText(QApplication::translate("LogQSO", "Comments", nullptr));
        cbComments->setText(QApplication::translate("LogQSO", "Retain", nullptr));
        operatorLabel->setText(QApplication::translate("LogQSO", "Operator", nullptr));
        label_3->setText(QApplication::translate("LogQSO", "Exch sent", nullptr));
        label_4->setText(QApplication::translate("LogQSO", "Rcvd", nullptr));
        label_5->setText(QApplication::translate("LogQSO", "Prop Mode", nullptr));
        cbPropMode->setText(QApplication::translate("LogQSO", "Retain", nullptr));
        Q_UNUSED(LogQSO);
    } // retranslateUi

};

namespace Ui {
    class LogQSO: public Ui_LogQSO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGQSO_H
