/********************************************************************************
** Form generated from reading UI file 'CabrilloLogWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CABRILLOLOGWINDOW_H
#define UI_CABRILLOLOGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CabrilloLogWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *log_table_view;

    void setupUi(QWidget *CabrilloLogWindow)
    {
        if (CabrilloLogWindow->objectName().isEmpty())
            CabrilloLogWindow->setObjectName(QStringLiteral("CabrilloLogWindow"));
        CabrilloLogWindow->resize(493, 210);
        verticalLayout = new QVBoxLayout(CabrilloLogWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        log_table_view = new QTableView(CabrilloLogWindow);
        log_table_view->setObjectName(QStringLiteral("log_table_view"));
        log_table_view->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(log_table_view);


        retranslateUi(CabrilloLogWindow);

        QMetaObject::connectSlotsByName(CabrilloLogWindow);
    } // setupUi

    void retranslateUi(QWidget *CabrilloLogWindow)
    {
        CabrilloLogWindow->setWindowTitle(QApplication::translate("CabrilloLogWindow", "Contest Log", nullptr));
#ifndef QT_NO_TOOLTIP
        log_table_view->setToolTip(QApplication::translate("CabrilloLogWindow", "<html><head/><body><p>Right-click here for available actions.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        log_table_view->setAccessibleDescription(QApplication::translate("CabrilloLogWindow", "Right-click here for available actions.", nullptr));
#endif // QT_NO_ACCESSIBILITY
    } // retranslateUi

};

namespace Ui {
    class CabrilloLogWindow: public Ui_CabrilloLogWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CABRILLOLOGWINDOW_H
