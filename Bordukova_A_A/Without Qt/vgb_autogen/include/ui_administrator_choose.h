/********************************************************************************
** Form generated from reading UI file 'administrator_choose.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATOR_CHOOSE_H
#define UI_ADMINISTRATOR_CHOOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_administrator_choose
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *add_trains;
    QPushButton *number_of_members;
    QPushButton *delete_or_block_card;
    QPushButton *write_off_the_workout;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *change_time_or_group;
    QPushButton *check_status;
    QSpacerItem *verticalSpacer_2;
    QPushButton *add_user;

    void setupUi(QWidget *administrator_choose)
    {
        if (administrator_choose->objectName().isEmpty())
            administrator_choose->setObjectName("administrator_choose");
        administrator_choose->resize(785, 545);
        verticalLayout = new QVBoxLayout(administrator_choose);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        add_trains = new QPushButton(administrator_choose);
        add_trains->setObjectName("add_trains");

        gridLayout->addWidget(add_trains, 7, 1, 1, 1);

        number_of_members = new QPushButton(administrator_choose);
        number_of_members->setObjectName("number_of_members");

        gridLayout->addWidget(number_of_members, 3, 1, 1, 1);

        delete_or_block_card = new QPushButton(administrator_choose);
        delete_or_block_card->setObjectName("delete_or_block_card");

        gridLayout->addWidget(delete_or_block_card, 8, 1, 1, 1);

        write_off_the_workout = new QPushButton(administrator_choose);
        write_off_the_workout->setObjectName("write_off_the_workout");

        gridLayout->addWidget(write_off_the_workout, 5, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(administrator_choose);
        pushButton_3->setObjectName("pushButton_3");

        gridLayout->addWidget(pushButton_3, 0, 3, 1, 1);

        pushButton = new QPushButton(administrator_choose);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(administrator_choose);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        change_time_or_group = new QPushButton(administrator_choose);
        change_time_or_group->setObjectName("change_time_or_group");

        gridLayout->addWidget(change_time_or_group, 4, 1, 1, 1);

        check_status = new QPushButton(administrator_choose);
        check_status->setObjectName("check_status");

        gridLayout->addWidget(check_status, 6, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 10, 1, 1, 1);

        add_user = new QPushButton(administrator_choose);
        add_user->setObjectName("add_user");

        gridLayout->addWidget(add_user, 9, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(administrator_choose);

        QMetaObject::connectSlotsByName(administrator_choose);
    } // setupUi

    void retranslateUi(QWidget *administrator_choose)
    {
        administrator_choose->setWindowTitle(QCoreApplication::translate("administrator_choose", "Form", nullptr));
        add_trains->setText(QCoreApplication::translate("administrator_choose", "\320\237\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\320\265 \320\260\320\261\320\276\320\275\320\265\320\274\320\265\320\275\321\202\320\260", nullptr));
        number_of_members->setText(QCoreApplication::translate("administrator_choose", "\320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260 \320\272\320\276\320\273-\320\262\320\260 \321\207\320\265\320\273\320\276\320\262\320\265\320\272 \320\262 \320\263\321\200\321\203\320\277\320\277\320\265", nullptr));
        delete_or_block_card->setText(QCoreApplication::translate("administrator_choose", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214/\320\267\320\260\320\261\320\273\320\276\320\272\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\260\320\261\320\276\320\275\320\265\320\274\320\265\320\275\321\202", nullptr));
        write_off_the_workout->setText(QCoreApplication::translate("administrator_choose", "\320\241\320\277\320\270\321\201\320\260\321\202\321\214 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\321\203", nullptr));
        pushButton_3->setText(QCoreApplication::translate("administrator_choose", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("administrator_choose", "\320\224\320\260\320\275\320\275\321\213\320\265 \320\276 \320\277\320\276\321\201\320\265\321\202\320\270\321\202\320\265\320\273\321\217\321\205", nullptr));
        pushButton_2->setText(QCoreApplication::translate("administrator_choose", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\273\320\270\321\207\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        change_time_or_group->setText(QCoreApplication::translate("administrator_choose", "\320\241\320\274\320\265\320\275\320\270\321\202\321\214 \320\263\321\200\321\203\320\277\320\277\321\203/\320\262\321\200\320\265\320\274\321\217 \320\267\320\260\320\275\321\217\321\202\320\270\320\271", nullptr));
        check_status->setText(QCoreApplication::translate("administrator_choose", "\320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260 \321\201\321\202\320\260\321\202\321\203\321\201\320\260 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\320\270", nullptr));
        add_user->setText(QCoreApplication::translate("administrator_choose", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class administrator_choose: public Ui_administrator_choose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATOR_CHOOSE_H
