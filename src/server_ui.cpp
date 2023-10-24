//
// Created by jgss9 on 10/24/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_server_ui.h" resolved

#include "server_ui.h"
#include "ui_server_ui.h"


ServerUi::ServerUi(QWidget *parent) :
        QWidget(parent), ui(new Ui::ServerUi) {
    ui->setupUi(this);
}

ServerUi::~ServerUi() {
    delete ui;
}
