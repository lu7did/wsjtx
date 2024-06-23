/********************************************************************************
** Form generated from reading UI file 'messageaveraging.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEAVERAGING_H
#define UI_MESSAGEAVERAGING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessageAveraging
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPlainTextEdit *msgAvgPlainTextEdit;
    QLabel *header_label;

    void setupUi(QWidget *MessageAveraging)
    {
        if (MessageAveraging->objectName().isEmpty())
            MessageAveraging->setObjectName(QStringLiteral("MessageAveraging"));
        MessageAveraging->resize(405, 268);
        verticalLayout = new QVBoxLayout(MessageAveraging);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        msgAvgPlainTextEdit = new QPlainTextEdit(MessageAveraging);
        msgAvgPlainTextEdit->setObjectName(QStringLiteral("msgAvgPlainTextEdit"));
        msgAvgPlainTextEdit->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(msgAvgPlainTextEdit, 1, 0, 1, 1);

        header_label = new QLabel(MessageAveraging);
        header_label->setObjectName(QStringLiteral("header_label"));
        header_label->setMargin(3);

        gridLayout->addWidget(header_label, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(MessageAveraging);

        QMetaObject::connectSlotsByName(MessageAveraging);
    } // setupUi

    void retranslateUi(QWidget *MessageAveraging)
    {
        MessageAveraging->setWindowTitle(QApplication::translate("MessageAveraging", "Message Averaging", nullptr));
        header_label->setText(QApplication::translate("MessageAveraging", "   UTC  Sync    DT  Freq   ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MessageAveraging: public Ui_MessageAveraging {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEAVERAGING_H
