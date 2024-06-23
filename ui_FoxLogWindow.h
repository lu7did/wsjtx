/********************************************************************************
** Form generated from reading UI file 'FoxLogWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOXLOGWINDOW_H
#define UI_FOXLOGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FoxLogWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *log_table_view;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLabel *callers_label;
    QLabel *label_2;
    QLabel *queued_label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QLabel *rate_label;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *FoxLogWindow)
    {
        if (FoxLogWindow->objectName().isEmpty())
            FoxLogWindow->setObjectName(QStringLiteral("FoxLogWindow"));
        FoxLogWindow->resize(453, 238);
        FoxLogWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        verticalLayout = new QVBoxLayout(FoxLogWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        log_table_view = new QTableView(FoxLogWindow);
        log_table_view->setObjectName(QStringLiteral("log_table_view"));
        log_table_view->setContextMenuPolicy(Qt::ActionsContextMenu);
        log_table_view->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(log_table_view);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(FoxLogWindow);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        callers_label = new QLabel(FoxLogWindow);
        callers_label->setObjectName(QStringLiteral("callers_label"));

        horizontalLayout->addWidget(callers_label);

        label_2 = new QLabel(FoxLogWindow);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        queued_label = new QLabel(FoxLogWindow);
        queued_label->setObjectName(QStringLiteral("queued_label"));

        horizontalLayout->addWidget(queued_label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_4 = new QLabel(FoxLogWindow);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        rate_label = new QLabel(FoxLogWindow);
        rate_label->setObjectName(QStringLiteral("rate_label"));

        horizontalLayout->addWidget(rate_label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(FoxLogWindow);

        QMetaObject::connectSlotsByName(FoxLogWindow);
    } // setupUi

    void retranslateUi(QWidget *FoxLogWindow)
    {
        FoxLogWindow->setWindowTitle(QApplication::translate("FoxLogWindow", "Fox Log", nullptr));
#ifndef QT_NO_TOOLTIP
        log_table_view->setToolTip(QApplication::translate("FoxLogWindow", "<html><head/><body><p>Right-click here for available actions.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("FoxLogWindow", "Callers:", nullptr));
        callers_label->setText(QApplication::translate("FoxLogWindow", "N", nullptr));
        label_2->setText(QApplication::translate("FoxLogWindow", "In progress:", nullptr));
        queued_label->setText(QApplication::translate("FoxLogWindow", "N", nullptr));
        label_4->setText(QApplication::translate("FoxLogWindow", "Rate:", nullptr));
        rate_label->setText(QApplication::translate("FoxLogWindow", "N", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FoxLogWindow: public Ui_FoxLogWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOXLOGWINDOW_H
