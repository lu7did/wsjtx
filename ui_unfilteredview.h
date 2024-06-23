/********************************************************************************
** Form generated from reading UI file 'unfilteredview.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNFILTEREDVIEW_H
#define UI_UNFILTEREDVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_UnfilteredView
{
public:
    QHBoxLayout *horizontalLayout;
    QTextBrowser *rawView;

    void setupUi(QFrame *UnfilteredView)
    {
        if (UnfilteredView->objectName().isEmpty())
            UnfilteredView->setObjectName(QStringLiteral("UnfilteredView"));
        UnfilteredView->resize(400, 300);
        horizontalLayout = new QHBoxLayout(UnfilteredView);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        rawView = new QTextBrowser(UnfilteredView);
        rawView->setObjectName(QStringLiteral("rawView"));
        rawView->setLineWrapMode(QTextEdit::NoWrap);

        horizontalLayout->addWidget(rawView);


        retranslateUi(UnfilteredView);

        QMetaObject::connectSlotsByName(UnfilteredView);
    } // setupUi

    void retranslateUi(QFrame *UnfilteredView)
    {
        UnfilteredView->setWindowTitle(QApplication::translate("UnfilteredView", "Raw View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UnfilteredView: public Ui_UnfilteredView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNFILTEREDVIEW_H
