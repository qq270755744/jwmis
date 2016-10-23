#include "login.h"

login::login(QWidget* parent) :
    QWidget(parent)
{
    url_layout=new QHBoxLayout();
    url_text=new QLabel(this);
    url_text->setText("网　址");
    url_box=new QLineEdit(this);
    url_box->setText("http://jwmis.hnie.edu.cn/jwmis");
    url_text->setBuddy(url_box);
    url_layout->addWidget(url_text);
    url_layout->addWidget(url_box);

    //this->setwid
    username_layout=new QHBoxLayout();
    username_text=new QLabel(this);
    username_text->setText("用户名");
    username_box=new QLineEdit(this);
    username_text->setBuddy(username_box);
    username_layout->addWidget(username_text);
    username_layout->addWidget(username_box);

    password_layout=new QHBoxLayout();
    password_text=new QLabel(this);
    password_text->setText("密　码");
    password_box=new QLineEdit(this);
    password_box->setEchoMode(QLineEdit::Password);//设置显示样式为密码
    password_text->setBuddy(password_box);
    password_layout->addWidget(password_text);
    password_layout->addWidget(password_box);

    info_layout=new QHBoxLayout();
    info=new QLabel(this);
    info->setText("请在这里设置好信息，在需要时会弹出验证码窗口已完成登陆");
    info_layout->addWidget(info);

    main_layout=new QVBoxLayout(this);
    main_layout->addStretch(10);
    main_layout->addLayout(url_layout);
    main_layout->addStretch(1);
    main_layout->addLayout(username_layout);
    main_layout->addStretch(1);
    main_layout->addLayout(password_layout);
    main_layout->addStretch(1);
    main_layout->addLayout(info_layout);
    main_layout->addStretch(10);

    /*username_text->setGeometry(2,2,50,20);
    username_box->setGeometry(54,2,this->width()-56,20);
    password_text->setGeometry(2,24,50,20);
    password_box->setGeometry(54,24,this->width()-56,20);
    login_button->setGeometry(4,46,this->width()-8,40);*/
}

login::~login()
{
}