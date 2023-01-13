/********************************************************************************
** Form generated from reading UI file 'users_choose.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERS_CHOOSE_H
#define UI_USERS_CHOOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_users_choose
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QPushButton *number_of_visits;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_5;
    QPushButton *time_limits;

    void setupUi(QWidget *users_choose)
    {
        if (users_choose->objectName().isEmpty())
            users_choose->setObjectName("users_choose");
        users_choose->resize(579, 330);
        horizontalLayout = new QHBoxLayout(users_choose);
        horizontalLayout->setObjectName("horizontalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pushButton = new QPushButton(users_choose);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        pushButton_3 = new QPushButton(users_choose);
        pushButton_3->setObjectName("pushButton_3");

        gridLayout->addWidget(pushButton_3, 0, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        number_of_visits = new QPushButton(users_choose);
        number_of_visits->setObjectName("number_of_visits");

        gridLayout->addWidget(number_of_visits, 3, 1, 1, 1);

        pushButton_2 = new QPushButton(users_choose);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 2, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 5, 1, 1, 1);

        time_limits = new QPushButton(users_choose);
        time_limits->setObjectName("time_limits");

        gridLayout->addWidget(time_limits, 4, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(users_choose);

        QMetaObject::connectSlotsByName(users_choose);
    } // setupUi

    void retranslateUi(QWidget *users_choose)
    {
        users_choose->setWindowTitle(QCoreApplication::translate("users_choose", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("users_choose", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \321\202\321\200\320\265\320\275\320\265\321\200\320\260\321\205", nullptr));
        pushButton_3->setText(QCoreApplication::translate("users_choose", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        number_of_visits->setText(QCoreApplication::translate("users_choose", "\320\232\320\276\320\273-\320\262\320\276 \320\275\320\265\320\270\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\320\275\320\275\321\213\321\205 \320\267\320\260\320\275\321\217\321\202\320\270\320\271", nullptr));
        pushButton_2->setText(QCoreApplication::translate("users_choose", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\273\320\270\321\207\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        time_limits->setText(QCoreApplication::translate("users_choose", "\320\241\321\200\320\276\320\272\320\270 \321\201\320\263\320\276\321\200\320\260\320\275\320\270\321\217 \320\267\320\260\320\275\321\217\321\202\320\270\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class users_choose: public Ui_users_choose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERS_CHOOSE_H
