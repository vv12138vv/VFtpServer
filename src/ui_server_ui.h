/********************************************************************************
** Form generated from reading UI file 'server_ui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_UI_H
#define UI_SERVER_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServerUi
{
public:

    void setupUi(QWidget *ServerUi)
    {
        if (ServerUi->objectName().isEmpty())
            ServerUi->setObjectName("ServerUi");
        ServerUi->resize(662, 426);

        retranslateUi(ServerUi);

        QMetaObject::connectSlotsByName(ServerUi);
    } // setupUi

    void retranslateUi(QWidget *ServerUi)
    {
        ServerUi->setWindowTitle(QCoreApplication::translate("ServerUi", "ServerUi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerUi: public Ui_ServerUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_UI_H
