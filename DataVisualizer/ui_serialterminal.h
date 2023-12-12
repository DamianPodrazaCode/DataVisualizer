/********************************************************************************
** Form generated from reading UI file 'serialterminal.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALTERMINAL_H
#define UI_SERIALTERMINAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_serialTerminal
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QRadioButton *cb_ascii;
    QRadioButton *cb_utf8;
    QRadioButton *cb_hex;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *cb_warp;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *cb_rewind;
    QPushButton *pb_clear_read;
    QPushButton *pb_startStop;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *cb_hiddenCRLF;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *cb_autoDelete;
    QLabel *label;
    QLineEdit *le_lineCount;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPlainTextEdit *pte_read;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *le_send;
    QPushButton *pb_send;
    QVBoxLayout *verticalLayout_9;
    QRadioButton *rb_ASCII;
    QRadioButton *rb_UTF8;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *cb_CR;
    QCheckBox *cb_LF;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pb_mac1;
    QPushButton *pb_mac2;
    QPushButton *pb_mac3;
    QPushButton *pb_mac4;
    QPushButton *pb_mac5;
    QPushButton *pb_mac6;
    QPushButton *pb_mac7;
    QPushButton *pb_mac8;
    QPushButton *pb_mac9;
    QPushButton *pb_mac10;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pb_DTR;
    QPushButton *pb_RTS;
    QVBoxLayout *verticalLayout_4;
    QLabel *l_CTS;
    QLabel *l_DSR;
    QLabel *l_CD;
    QLabel *l_RI;

    void setupUi(QDialog *serialTerminal)
    {
        if (serialTerminal->objectName().isEmpty())
            serialTerminal->setObjectName("serialTerminal");
        serialTerminal->resize(1018, 537);
        serialTerminal->setAutoFillBackground(false);
        serialTerminal->setSizeGripEnabled(false);
        gridLayout_2 = new QGridLayout(serialTerminal);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox_2 = new QGroupBox(serialTerminal);
        groupBox_2->setObjectName("groupBox_2");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        cb_ascii = new QRadioButton(groupBox_2);
        cb_ascii->setObjectName("cb_ascii");
        cb_ascii->setChecked(true);

        verticalLayout->addWidget(cb_ascii);

        cb_utf8 = new QRadioButton(groupBox_2);
        cb_utf8->setObjectName("cb_utf8");

        verticalLayout->addWidget(cb_utf8);

        cb_hex = new QRadioButton(groupBox_2);
        cb_hex->setObjectName("cb_hex");

        verticalLayout->addWidget(cb_hex);


        horizontalLayout_4->addLayout(verticalLayout);


        horizontalLayout_6->addLayout(horizontalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        cb_warp = new QCheckBox(groupBox_2);
        cb_warp->setObjectName("cb_warp");
        cb_warp->setChecked(true);

        verticalLayout_3->addWidget(cb_warp);


        horizontalLayout_6->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        cb_rewind = new QCheckBox(groupBox_2);
        cb_rewind->setObjectName("cb_rewind");
        cb_rewind->setChecked(true);

        horizontalLayout_7->addWidget(cb_rewind);

        pb_clear_read = new QPushButton(groupBox_2);
        pb_clear_read->setObjectName("pb_clear_read");
        pb_clear_read->setAutoDefault(false);

        horizontalLayout_7->addWidget(pb_clear_read);

        pb_startStop = new QPushButton(groupBox_2);
        pb_startStop->setObjectName("pb_startStop");
        pb_startStop->setCheckable(true);
        pb_startStop->setAutoDefault(false);

        horizontalLayout_7->addWidget(pb_startStop);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        cb_hiddenCRLF = new QCheckBox(groupBox_2);
        cb_hiddenCRLF->setObjectName("cb_hiddenCRLF");

        horizontalLayout_7->addWidget(cb_hiddenCRLF);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        cb_autoDelete = new QCheckBox(groupBox_2);
        cb_autoDelete->setObjectName("cb_autoDelete");

        horizontalLayout_5->addWidget(cb_autoDelete);

        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(label);

        le_lineCount = new QLineEdit(groupBox_2);
        le_lineCount->setObjectName("le_lineCount");
        le_lineCount->setInputMethodHints(Qt::ImhDigitsOnly);

        horizontalLayout_5->addWidget(le_lineCount);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        gridLayout_3->addLayout(horizontalLayout_6, 1, 0, 1, 1);

        pte_read = new QPlainTextEdit(groupBox_2);
        pte_read->setObjectName("pte_read");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pte_read->sizePolicy().hasHeightForWidth());
        pte_read->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamilies({QString::fromUtf8("Consolas")});
        font.setPointSize(10);
        pte_read->setFont(font);
        pte_read->setInputMethodHints(Qt::ImhNone);
        pte_read->setCursorWidth(0);
        pte_read->setTextInteractionFlags(Qt::TextBrowserInteraction);
        pte_read->setMaximumBlockCount(0);
        pte_read->setBackgroundVisible(false);
        pte_read->setCenterOnScroll(false);

        gridLayout_3->addWidget(pte_read, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox = new QGroupBox(serialTerminal);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        le_send = new QLineEdit(groupBox);
        le_send->setObjectName("le_send");
        le_send->setFont(font);
        le_send->setInputMethodHints(Qt::ImhDigitsOnly);

        horizontalLayout_2->addWidget(le_send);

        pb_send = new QPushButton(groupBox);
        pb_send->setObjectName("pb_send");
        pb_send->setAutoDefault(true);

        horizontalLayout_2->addWidget(pb_send);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        rb_ASCII = new QRadioButton(groupBox);
        rb_ASCII->setObjectName("rb_ASCII");
        rb_ASCII->setChecked(true);

        verticalLayout_9->addWidget(rb_ASCII);

        rb_UTF8 = new QRadioButton(groupBox);
        rb_UTF8->setObjectName("rb_UTF8");

        verticalLayout_9->addWidget(rb_UTF8);


        horizontalLayout_2->addLayout(verticalLayout_9);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        cb_CR = new QCheckBox(groupBox);
        cb_CR->setObjectName("cb_CR");
        cb_CR->setChecked(true);

        verticalLayout_7->addWidget(cb_CR);

        cb_LF = new QCheckBox(groupBox);
        cb_LF->setObjectName("cb_LF");
        cb_LF->setChecked(true);

        verticalLayout_7->addWidget(cb_LF);


        horizontalLayout_2->addLayout(verticalLayout_7);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        pb_mac1 = new QPushButton(groupBox);
        pb_mac1->setObjectName("pb_mac1");

        horizontalLayout_3->addWidget(pb_mac1);

        pb_mac2 = new QPushButton(groupBox);
        pb_mac2->setObjectName("pb_mac2");

        horizontalLayout_3->addWidget(pb_mac2);

        pb_mac3 = new QPushButton(groupBox);
        pb_mac3->setObjectName("pb_mac3");

        horizontalLayout_3->addWidget(pb_mac3);

        pb_mac4 = new QPushButton(groupBox);
        pb_mac4->setObjectName("pb_mac4");

        horizontalLayout_3->addWidget(pb_mac4);

        pb_mac5 = new QPushButton(groupBox);
        pb_mac5->setObjectName("pb_mac5");

        horizontalLayout_3->addWidget(pb_mac5);

        pb_mac6 = new QPushButton(groupBox);
        pb_mac6->setObjectName("pb_mac6");

        horizontalLayout_3->addWidget(pb_mac6);

        pb_mac7 = new QPushButton(groupBox);
        pb_mac7->setObjectName("pb_mac7");

        horizontalLayout_3->addWidget(pb_mac7);

        pb_mac8 = new QPushButton(groupBox);
        pb_mac8->setObjectName("pb_mac8");

        horizontalLayout_3->addWidget(pb_mac8);

        pb_mac9 = new QPushButton(groupBox);
        pb_mac9->setObjectName("pb_mac9");

        horizontalLayout_3->addWidget(pb_mac9);

        pb_mac10 = new QPushButton(groupBox);
        pb_mac10->setObjectName("pb_mac10");

        horizontalLayout_3->addWidget(pb_mac10);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(serialTerminal);
        groupBox_3->setObjectName("groupBox_3");
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy4);
        formLayout = new QFormLayout(groupBox_3);
        formLayout->setObjectName("formLayout");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        pb_DTR = new QPushButton(groupBox_3);
        pb_DTR->setObjectName("pb_DTR");
        pb_DTR->setFocusPolicy(Qt::TabFocus);
        pb_DTR->setCheckable(true);
        pb_DTR->setAutoDefault(false);

        verticalLayout_5->addWidget(pb_DTR);

        pb_RTS = new QPushButton(groupBox_3);
        pb_RTS->setObjectName("pb_RTS");
        pb_RTS->setCheckable(true);
        pb_RTS->setAutoDefault(false);

        verticalLayout_5->addWidget(pb_RTS);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        l_CTS = new QLabel(groupBox_3);
        l_CTS->setObjectName("l_CTS");
        l_CTS->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(l_CTS);

        l_DSR = new QLabel(groupBox_3);
        l_DSR->setObjectName("l_DSR");
        l_DSR->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(l_DSR);

        l_CD = new QLabel(groupBox_3);
        l_CD->setObjectName("l_CD");
        l_CD->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(l_CD);

        l_RI = new QLabel(groupBox_3);
        l_RI->setObjectName("l_RI");
        l_RI->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(l_RI);


        verticalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(verticalLayout_5);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout_6);


        gridLayout_2->addWidget(groupBox_3, 0, 1, 2, 1);

        QWidget::setTabOrder(pb_send, rb_ASCII);
        QWidget::setTabOrder(rb_ASCII, rb_UTF8);
        QWidget::setTabOrder(rb_UTF8, cb_CR);
        QWidget::setTabOrder(cb_CR, cb_LF);
        QWidget::setTabOrder(cb_LF, pb_mac1);
        QWidget::setTabOrder(pb_mac1, pb_mac2);
        QWidget::setTabOrder(pb_mac2, pb_mac3);
        QWidget::setTabOrder(pb_mac3, pb_mac4);
        QWidget::setTabOrder(pb_mac4, pb_mac5);
        QWidget::setTabOrder(pb_mac5, pb_mac6);
        QWidget::setTabOrder(pb_mac6, pb_mac7);
        QWidget::setTabOrder(pb_mac7, pb_mac8);
        QWidget::setTabOrder(pb_mac8, pb_mac9);
        QWidget::setTabOrder(pb_mac9, pb_mac10);
        QWidget::setTabOrder(pb_mac10, pb_DTR);
        QWidget::setTabOrder(pb_DTR, pb_RTS);
        QWidget::setTabOrder(pb_RTS, cb_ascii);
        QWidget::setTabOrder(cb_ascii, cb_utf8);
        QWidget::setTabOrder(cb_utf8, cb_hex);
        QWidget::setTabOrder(cb_hex, cb_warp);
        QWidget::setTabOrder(cb_warp, cb_rewind);
        QWidget::setTabOrder(cb_rewind, cb_autoDelete);
        QWidget::setTabOrder(cb_autoDelete, pb_clear_read);
        QWidget::setTabOrder(pb_clear_read, pb_startStop);
        QWidget::setTabOrder(pb_startStop, le_lineCount);
        QWidget::setTabOrder(le_lineCount, cb_hiddenCRLF);
        QWidget::setTabOrder(cb_hiddenCRLF, le_send);
        QWidget::setTabOrder(le_send, pte_read);

        retranslateUi(serialTerminal);

        QMetaObject::connectSlotsByName(serialTerminal);
    } // setupUi

    void retranslateUi(QDialog *serialTerminal)
    {
        serialTerminal->setWindowTitle(QCoreApplication::translate("serialTerminal", "Dialog", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("serialTerminal", "READ", nullptr));
        cb_ascii->setText(QCoreApplication::translate("serialTerminal", "ASCII", nullptr));
        cb_utf8->setText(QCoreApplication::translate("serialTerminal", "UTF8", nullptr));
        cb_hex->setText(QCoreApplication::translate("serialTerminal", "HEX", nullptr));
        cb_warp->setText(QCoreApplication::translate("serialTerminal", "Warp Lines", nullptr));
        cb_rewind->setText(QCoreApplication::translate("serialTerminal", "Auto scroll", nullptr));
        pb_clear_read->setText(QCoreApplication::translate("serialTerminal", "Clear", nullptr));
        pb_startStop->setText(QCoreApplication::translate("serialTerminal", "Stop", nullptr));
        cb_hiddenCRLF->setText(QCoreApplication::translate("serialTerminal", "Show CR LF", nullptr));
        cb_autoDelete->setText(QCoreApplication::translate("serialTerminal", "Auto Delete", nullptr));
        label->setText(QCoreApplication::translate("serialTerminal", "Lines Count", nullptr));
        le_lineCount->setText(QCoreApplication::translate("serialTerminal", "10", nullptr));
        groupBox->setTitle(QCoreApplication::translate("serialTerminal", "WRITE", nullptr));
        pb_send->setText(QCoreApplication::translate("serialTerminal", "SEND", nullptr));
        rb_ASCII->setText(QCoreApplication::translate("serialTerminal", "ASCII", nullptr));
        rb_UTF8->setText(QCoreApplication::translate("serialTerminal", "UTF8", nullptr));
        cb_CR->setText(QCoreApplication::translate("serialTerminal", "CR(13)", nullptr));
        cb_LF->setText(QCoreApplication::translate("serialTerminal", "LF(10)", nullptr));
#if QT_CONFIG(tooltip)
        pb_mac1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pb_mac1->setText(QCoreApplication::translate("serialTerminal", "M1", nullptr));
        pb_mac2->setText(QCoreApplication::translate("serialTerminal", "M2", nullptr));
        pb_mac3->setText(QCoreApplication::translate("serialTerminal", "M3", nullptr));
        pb_mac4->setText(QCoreApplication::translate("serialTerminal", "M4", nullptr));
        pb_mac5->setText(QCoreApplication::translate("serialTerminal", "M5", nullptr));
        pb_mac6->setText(QCoreApplication::translate("serialTerminal", "M6", nullptr));
        pb_mac7->setText(QCoreApplication::translate("serialTerminal", "M7", nullptr));
        pb_mac8->setText(QCoreApplication::translate("serialTerminal", "M8", nullptr));
        pb_mac9->setText(QCoreApplication::translate("serialTerminal", "M9", nullptr));
        pb_mac10->setText(QCoreApplication::translate("serialTerminal", "M10", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("serialTerminal", "CONTROL", nullptr));
        pb_DTR->setText(QCoreApplication::translate("serialTerminal", "DTR", nullptr));
        pb_RTS->setText(QCoreApplication::translate("serialTerminal", "RTS", nullptr));
        l_CTS->setText(QCoreApplication::translate("serialTerminal", "CTS", nullptr));
        l_DSR->setText(QCoreApplication::translate("serialTerminal", "DSR", nullptr));
        l_CD->setText(QCoreApplication::translate("serialTerminal", "CD", nullptr));
        l_RI->setText(QCoreApplication::translate("serialTerminal", "RI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class serialTerminal: public Ui_serialTerminal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALTERMINAL_H
