/********************************************************************************
** Form generated from reading UI file 'pskreporterwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PSKREPORTERWIDGET_H
#define UI_PSKREPORTERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PSKReporterWidget
{
public:
    QGridLayout *gridLayout;
    QTableWidget *pskTable;

    void setupUi(QWidget *PSKReporterWidget)
    {
        if (PSKReporterWidget->objectName().isEmpty())
            PSKReporterWidget->setObjectName(QStringLiteral("PSKReporterWidget"));
        PSKReporterWidget->resize(400, 300);
        gridLayout = new QGridLayout(PSKReporterWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pskTable = new QTableWidget(PSKReporterWidget);
        if (pskTable->columnCount() < 8)
            pskTable->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        pskTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        pskTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        pskTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        pskTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        pskTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        pskTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        pskTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        pskTable->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        pskTable->setObjectName(QStringLiteral("pskTable"));
        pskTable->setStyleSheet(QStringLiteral(""));
        pskTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        pskTable->setSortingEnabled(true);

        gridLayout->addWidget(pskTable, 0, 0, 1, 1);


        retranslateUi(PSKReporterWidget);

        QMetaObject::connectSlotsByName(PSKReporterWidget);
    } // setupUi

    void retranslateUi(QWidget *PSKReporterWidget)
    {
        PSKReporterWidget->setWindowTitle(QApplication::translate("PSKReporterWidget", "PSKReporter", nullptr));
        QTableWidgetItem *___qtablewidgetitem = pskTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PSKReporterWidget", "Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = pskTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PSKReporterWidget", "Call", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = pskTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("PSKReporterWidget", "Rpt", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = pskTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("PSKReporterWidget", "Country", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = pskTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("PSKReporterWidget", "Freq", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = pskTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("PSKReporterWidget", "Mode", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = pskTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("PSKReporterWidget", "Loc", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = pskTable->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("PSKReporterWidget", "Frequency", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PSKReporterWidget: public Ui_PSKReporterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PSKREPORTERWIDGET_H
