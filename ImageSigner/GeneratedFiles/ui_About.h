/********************************************************************************
** Form generated from reading UI file 'About.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_About
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *Form_About)
    {
        if (Form_About->objectName().isEmpty())
            Form_About->setObjectName(QString::fromUtf8("Form_About"));
        Form_About->resize(440, 116);
        verticalLayout_2 = new QVBoxLayout(Form_About);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(Form_About);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(91, 91));
        widget->setMaximumSize(QSize(91, 91));
        widget->setStyleSheet(QString::fromUtf8("background-image: url(:/ImageSigner/Resources/52pojie.bmp);"));

        horizontalLayout->addWidget(widget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Form_About);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(321, 0));

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(Form_About);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Form_About);
        QObject::connect(pushButton, SIGNAL(clicked()), Form_About, SLOT(close()));

        QMetaObject::connectSlotsByName(Form_About);
    } // setupUi

    void retranslateUi(QWidget *Form_About)
    {
        Form_About->setWindowTitle(QCoreApplication::translate("Form_About", "About", nullptr));
        label->setText(QCoreApplication::translate("Form_About", "ImageSigner v1.0 Code by DBinary from www.52pojie.cn", nullptr));
        pushButton->setText(QCoreApplication::translate("Form_About", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form_About: public Ui_Form_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
