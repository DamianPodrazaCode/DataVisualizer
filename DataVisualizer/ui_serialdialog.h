/********************************************************************************
** Form generated from reading UI file 'serialdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALDIALOG_H
#define UI_SERIALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SerialDialog
{
public:
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *cb_portNr;
    QPushButton *pb_rescan;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *rb_terminal;
    QRadioButton *rb_visualization;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *cb_baudrate;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *cb_databits;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QComboBox *cb_direction;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QComboBox *cb_flowcontrol;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QComboBox *cb_parity;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QComboBox *cb_stopbits;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pb_cancel;
    QPushButton *pb_connect;

    void setupUi(QDialog *SerialDialog)
    {
        if (SerialDialog->objectName().isEmpty())
            SerialDialog->setObjectName("SerialDialog");
        SerialDialog->resize(235, 380);
        gridLayout_3 = new QGridLayout(SerialDialog);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(SerialDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        cb_portNr = new QComboBox(SerialDialog);
        cb_portNr->addItem(QString());
        cb_portNr->setObjectName("cb_portNr");

        verticalLayout->addWidget(cb_portNr);

        pb_rescan = new QPushButton(SerialDialog);
        pb_rescan->setObjectName("pb_rescan");

        verticalLayout->addWidget(pb_rescan);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        groupBox = new QGroupBox(SerialDialog);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        rb_terminal = new QRadioButton(groupBox);
        rb_terminal->setObjectName("rb_terminal");
        rb_terminal->setChecked(true);

        gridLayout->addWidget(rb_terminal, 0, 0, 1, 1);

        rb_visualization = new QRadioButton(groupBox);
        rb_visualization->setObjectName("rb_visualization");
        rb_visualization->setCheckable(true);

        gridLayout->addWidget(rb_visualization, 1, 0, 1, 1);


        horizontalLayout->addWidget(groupBox);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(SerialDialog);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        cb_baudrate = new QComboBox(groupBox_2);
        cb_baudrate->addItem(QString());
        cb_baudrate->addItem(QString());
        cb_baudrate->addItem(QString());
        cb_baudrate->addItem(QString());
        cb_baudrate->addItem(QString());
        cb_baudrate->addItem(QString());
        cb_baudrate->addItem(QString());
        cb_baudrate->addItem(QString());
        cb_baudrate->addItem(QString());
        cb_baudrate->addItem(QString());
        cb_baudrate->addItem(QString());
        cb_baudrate->addItem(QString());
        cb_baudrate->addItem(QString());
        cb_baudrate->addItem(QString());
        cb_baudrate->addItem(QString());
        cb_baudrate->addItem(QString());
        cb_baudrate->addItem(QString());
        cb_baudrate->addItem(QString());
        cb_baudrate->addItem(QString());
        cb_baudrate->setObjectName("cb_baudrate");
        cb_baudrate->setInputMethodHints(Qt::ImhDigitsOnly);
        cb_baudrate->setEditable(true);

        horizontalLayout_3->addWidget(cb_baudrate);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        cb_databits = new QComboBox(groupBox_2);
        cb_databits->addItem(QString());
        cb_databits->addItem(QString());
        cb_databits->addItem(QString());
        cb_databits->addItem(QString());
        cb_databits->setObjectName("cb_databits");
        cb_databits->setInputMethodHints(Qt::ImhDigitsOnly);
        cb_databits->setEditable(false);

        horizontalLayout_4->addWidget(cb_databits);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        horizontalLayout_5->addWidget(label_4);

        cb_direction = new QComboBox(groupBox_2);
        cb_direction->addItem(QString());
        cb_direction->addItem(QString());
        cb_direction->addItem(QString());
        cb_direction->setObjectName("cb_direction");
        cb_direction->setInputMethodHints(Qt::ImhDigitsOnly);
        cb_direction->setEditable(false);

        horizontalLayout_5->addWidget(cb_direction);


        gridLayout_2->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        horizontalLayout_6->addWidget(label_5);

        cb_flowcontrol = new QComboBox(groupBox_2);
        cb_flowcontrol->addItem(QString());
        cb_flowcontrol->addItem(QString());
        cb_flowcontrol->addItem(QString());
        cb_flowcontrol->setObjectName("cb_flowcontrol");
        cb_flowcontrol->setInputMethodHints(Qt::ImhDigitsOnly);
        cb_flowcontrol->setEditable(false);

        horizontalLayout_6->addWidget(cb_flowcontrol);


        gridLayout_2->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");

        horizontalLayout_7->addWidget(label_6);

        cb_parity = new QComboBox(groupBox_2);
        cb_parity->addItem(QString());
        cb_parity->addItem(QString());
        cb_parity->addItem(QString());
        cb_parity->addItem(QString());
        cb_parity->addItem(QString());
        cb_parity->setObjectName("cb_parity");
        cb_parity->setInputMethodHints(Qt::ImhDigitsOnly);
        cb_parity->setEditable(false);

        horizontalLayout_7->addWidget(cb_parity);


        gridLayout_2->addLayout(horizontalLayout_7, 4, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");

        horizontalLayout_8->addWidget(label_7);

        cb_stopbits = new QComboBox(groupBox_2);
        cb_stopbits->addItem(QString());
        cb_stopbits->addItem(QString());
        cb_stopbits->addItem(QString());
        cb_stopbits->setObjectName("cb_stopbits");
        cb_stopbits->setInputMethodHints(Qt::ImhDigitsOnly);
        cb_stopbits->setEditable(false);

        horizontalLayout_8->addWidget(cb_stopbits);


        gridLayout_2->addLayout(horizontalLayout_8, 5, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pb_cancel = new QPushButton(SerialDialog);
        pb_cancel->setObjectName("pb_cancel");

        horizontalLayout_2->addWidget(pb_cancel);

        pb_connect = new QPushButton(SerialDialog);
        pb_connect->setObjectName("pb_connect");

        horizontalLayout_2->addWidget(pb_connect);


        gridLayout_3->addLayout(horizontalLayout_2, 2, 0, 1, 1);


        retranslateUi(SerialDialog);

        QMetaObject::connectSlotsByName(SerialDialog);
    } // setupUi

    void retranslateUi(QDialog *SerialDialog)
    {
        SerialDialog->setWindowTitle(QCoreApplication::translate("SerialDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SerialDialog", "Serial Port:", nullptr));
        cb_portNr->setItemText(0, QCoreApplication::translate("SerialDialog", "COM", nullptr));

        pb_rescan->setText(QCoreApplication::translate("SerialDialog", "ReScan", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SerialDialog", "Connection type:", nullptr));
        rb_terminal->setText(QCoreApplication::translate("SerialDialog", "Terminal", nullptr));
        rb_visualization->setText(QCoreApplication::translate("SerialDialog", "Visualization", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SerialDialog", "Options", nullptr));
        label_2->setText(QCoreApplication::translate("SerialDialog", "BaudRate", nullptr));
        cb_baudrate->setItemText(0, QCoreApplication::translate("SerialDialog", "600", nullptr));
        cb_baudrate->setItemText(1, QCoreApplication::translate("SerialDialog", "1200", nullptr));
        cb_baudrate->setItemText(2, QCoreApplication::translate("SerialDialog", "2400", nullptr));
        cb_baudrate->setItemText(3, QCoreApplication::translate("SerialDialog", "4800", nullptr));
        cb_baudrate->setItemText(4, QCoreApplication::translate("SerialDialog", "9600", nullptr));
        cb_baudrate->setItemText(5, QCoreApplication::translate("SerialDialog", "14400", nullptr));
        cb_baudrate->setItemText(6, QCoreApplication::translate("SerialDialog", "19200", nullptr));
        cb_baudrate->setItemText(7, QCoreApplication::translate("SerialDialog", "28800", nullptr));
        cb_baudrate->setItemText(8, QCoreApplication::translate("SerialDialog", "38400", nullptr));
        cb_baudrate->setItemText(9, QCoreApplication::translate("SerialDialog", "56000", nullptr));
        cb_baudrate->setItemText(10, QCoreApplication::translate("SerialDialog", "57600", nullptr));
        cb_baudrate->setItemText(11, QCoreApplication::translate("SerialDialog", "115200", nullptr));
        cb_baudrate->setItemText(12, QCoreApplication::translate("SerialDialog", "128000", nullptr));
        cb_baudrate->setItemText(13, QCoreApplication::translate("SerialDialog", "256000", nullptr));
        cb_baudrate->setItemText(14, QCoreApplication::translate("SerialDialog", "230400", nullptr));
        cb_baudrate->setItemText(15, QCoreApplication::translate("SerialDialog", "460800", nullptr));
        cb_baudrate->setItemText(16, QCoreApplication::translate("SerialDialog", "921600", nullptr));
        cb_baudrate->setItemText(17, QCoreApplication::translate("SerialDialog", "1000000", nullptr));
        cb_baudrate->setItemText(18, QCoreApplication::translate("SerialDialog", "2000000", nullptr));

        label_3->setText(QCoreApplication::translate("SerialDialog", "DataBits", nullptr));
        cb_databits->setItemText(0, QCoreApplication::translate("SerialDialog", "5", nullptr));
        cb_databits->setItemText(1, QCoreApplication::translate("SerialDialog", "6", nullptr));
        cb_databits->setItemText(2, QCoreApplication::translate("SerialDialog", "7", nullptr));
        cb_databits->setItemText(3, QCoreApplication::translate("SerialDialog", "8", nullptr));

        label_4->setText(QCoreApplication::translate("SerialDialog", "Direction", nullptr));
        cb_direction->setItemText(0, QCoreApplication::translate("SerialDialog", "Input ", nullptr));
        cb_direction->setItemText(1, QCoreApplication::translate("SerialDialog", "Output", nullptr));
        cb_direction->setItemText(2, QCoreApplication::translate("SerialDialog", "AllDirections", nullptr));

        label_5->setText(QCoreApplication::translate("SerialDialog", "FlowControl", nullptr));
        cb_flowcontrol->setItemText(0, QCoreApplication::translate("SerialDialog", "NoFlowControl", nullptr));
        cb_flowcontrol->setItemText(1, QCoreApplication::translate("SerialDialog", "HardwareControl", nullptr));
        cb_flowcontrol->setItemText(2, QCoreApplication::translate("SerialDialog", "SoftwareControl", nullptr));

        label_6->setText(QCoreApplication::translate("SerialDialog", "Parity", nullptr));
        cb_parity->setItemText(0, QCoreApplication::translate("SerialDialog", "NoParity", nullptr));
        cb_parity->setItemText(1, QCoreApplication::translate("SerialDialog", "EvenParity", nullptr));
        cb_parity->setItemText(2, QCoreApplication::translate("SerialDialog", "OddParity", nullptr));
        cb_parity->setItemText(3, QCoreApplication::translate("SerialDialog", "SpaceParity", nullptr));
        cb_parity->setItemText(4, QCoreApplication::translate("SerialDialog", "MarkParity", nullptr));

        label_7->setText(QCoreApplication::translate("SerialDialog", "StopBits", nullptr));
        cb_stopbits->setItemText(0, QCoreApplication::translate("SerialDialog", "OneStop", nullptr));
        cb_stopbits->setItemText(1, QCoreApplication::translate("SerialDialog", "OneAndHalfStop", nullptr));
        cb_stopbits->setItemText(2, QCoreApplication::translate("SerialDialog", "TwoStop", nullptr));

        pb_cancel->setText(QCoreApplication::translate("SerialDialog", "Cancel", nullptr));
        pb_connect->setText(QCoreApplication::translate("SerialDialog", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialDialog: public Ui_SerialDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALDIALOG_H
