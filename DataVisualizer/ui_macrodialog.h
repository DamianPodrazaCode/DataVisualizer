/********************************************************************************
** Form generated from reading UI file 'macrodialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACRODIALOG_H
#define UI_MACRODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_MacroDialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *le_macro;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pb_cancel;
    QPushButton *pb_Save;

    void setupUi(QDialog *MacroDialog)
    {
        if (MacroDialog->objectName().isEmpty())
            MacroDialog->setObjectName("MacroDialog");
        MacroDialog->resize(541, 82);
        gridLayout = new QGridLayout(MacroDialog);
        gridLayout->setObjectName("gridLayout");
        le_macro = new QLineEdit(MacroDialog);
        le_macro->setObjectName("le_macro");

        gridLayout->addWidget(le_macro, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pb_cancel = new QPushButton(MacroDialog);
        pb_cancel->setObjectName("pb_cancel");
        pb_cancel->setFocusPolicy(Qt::TabFocus);
        pb_cancel->setAutoDefault(false);

        horizontalLayout->addWidget(pb_cancel);

        pb_Save = new QPushButton(MacroDialog);
        pb_Save->setObjectName("pb_Save");

        horizontalLayout->addWidget(pb_Save);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(MacroDialog);

        QMetaObject::connectSlotsByName(MacroDialog);
    } // setupUi

    void retranslateUi(QDialog *MacroDialog)
    {
        MacroDialog->setWindowTitle(QCoreApplication::translate("MacroDialog", "Dialog", nullptr));
        pb_cancel->setText(QCoreApplication::translate("MacroDialog", "Cancel", nullptr));
        pb_Save->setText(QCoreApplication::translate("MacroDialog", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MacroDialog: public Ui_MacroDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACRODIALOG_H
