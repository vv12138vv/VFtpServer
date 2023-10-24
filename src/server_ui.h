//
// Created by jgss9 on 10/24/2023.
//

#ifndef VFTPSERVER_SERVER_UI_H
#define VFTPSERVER_SERVER_UI_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class ServerUi; }
QT_END_NAMESPACE

class ServerUi : public QWidget {
Q_OBJECT

public:
    explicit ServerUi(QWidget *parent = nullptr);

    ~ServerUi() override;

private:
    Ui::ServerUi *ui;
};


#endif //VFTPSERVER_SERVER_UI_H
