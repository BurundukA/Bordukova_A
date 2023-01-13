/********************************************************************************
** Form generated from reading UI file 'autorization.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTORIZATION_H
#define UI_AUTORIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Autorization
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *login;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *password;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Autorization)
    {
        if (Autorization->objectName().isEmpty())
            Autorization->setObjectName("Autorization");
        Autorization->resize(586, 492);
        gridLayout = new QGridLayout(Autorization);
        gridLayout->setObjectName("gridLayout");
        spacer = new QSpacerItem(100, 32, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacer, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 4, 2, 1, 1);

        label = new QLabel(Autorization);
        label->setObjectName("label");

        gridLayout->addWidget(label, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 0, 2, 1, 1);

        groupBox = new QGroupBox(Autorization);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        login = new QLineEdit(groupBox);
        login->setObjectName("login");

        horizontalLayout->addWidget(login);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        password = new QLineEdit(groupBox);
        password->setObjectName("password");

        horizontalLayout_2->addWidget(password);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        gridLayout->addWidget(groupBox, 3, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 3, 1, 1);

        pushButton_3 = new QPushButton(Autorization);
        pushButton_3->setObjectName("pushButton_3");

        gridLayout->addWidget(pushButton_3, 0, 3, 1, 1);


        retranslateUi(Autorization);

        QMetaObject::connectSlotsByName(Autorization);
    } // setupUi

    void retranslateUi(QDialog *Autorization)
    {
        Autorization->setWindowTitle(QCoreApplication::translate("Autorization", "Dialog", nullptr));
        label->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("Autorization", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("Autorization", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_3->setText(QCoreApplication::translate("Autorization", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("Autorization", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Autorization", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Autorization: public Ui_Autorization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTORIZATION_H
