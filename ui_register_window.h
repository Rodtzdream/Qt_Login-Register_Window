/********************************************************************************
** Form generated from reading UI file 'register_window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_WINDOW_H
#define UI_REGISTER_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_register_window
{
public:
    QLineEdit *lineEdit;
    QLabel *label_7;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QPushButton *pushButton_2;

    void setupUi(QDialog *register_window)
    {
        if (register_window->objectName().isEmpty())
            register_window->setObjectName("register_window");
        register_window->resize(500, 500);
        lineEdit = new QLineEdit(register_window);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(140, 210, 221, 31));
        label_7 = new QLabel(register_window);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(260, 120, 65, 16));
        label_6 = new QLabel(register_window);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(140, 120, 65, 16));
        lineEdit_2 = new QLineEdit(register_window);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(140, 280, 221, 31));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_3 = new QLineEdit(register_window);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(140, 140, 101, 31));
        label_3 = new QLabel(register_window);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 190, 53, 16));
        label = new QLabel(register_window);
        label->setObjectName("label");
        label->setGeometry(QRect(176, 50, 149, 54));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        label_4 = new QLabel(register_window);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(140, 260, 61, 16));
        label_2 = new QLabel(register_window);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 190, 0, 16));
        pushButton = new QPushButton(register_window);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 330, 221, 41));
        pushButton->setFocusPolicy(Qt::NoFocus);
        lineEdit_4 = new QLineEdit(register_window);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(260, 140, 101, 31));
        label_5 = new QLabel(register_window);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(140, 380, 168, 16));
        pushButton_2 = new QPushButton(register_window);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(280, 380, 41, 16));
        QFont font1;
        font1.setUnderline(true);
        pushButton_2->setFont(font1);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        pushButton_2->setStyleSheet(QString::fromUtf8("    border: none;\n"
"    color: palette(window-text);\n"
"    background: transparent;"));
        lineEdit->raise();
        label_7->raise();
        label_6->raise();
        lineEdit_2->raise();
        label_3->raise();
        label->raise();
        label_4->raise();
        label_2->raise();
        pushButton->raise();
        lineEdit_4->raise();
        label_5->raise();
        pushButton_2->raise();
        lineEdit_3->raise();

        retranslateUi(register_window);

        QMetaObject::connectSlotsByName(register_window);
    } // setupUi

    void retranslateUi(QDialog *register_window)
    {
        register_window->setWindowTitle(QCoreApplication::translate("register_window", "Dialog", nullptr));
        lineEdit->setText(QString());
        label_7->setText(QCoreApplication::translate("register_window", "Last name", nullptr));
        label_6->setText(QCoreApplication::translate("register_window", "First name", nullptr));
        lineEdit_3->setText(QString());
        label_3->setText(QCoreApplication::translate("register_window", "Username", nullptr));
        label->setText(QCoreApplication::translate("register_window", "SIGN UP", nullptr));
        label_4->setText(QCoreApplication::translate("register_window", "Password", nullptr));
        label_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("register_window", "Sign Up", nullptr));
        lineEdit_4->setText(QString());
        label_5->setText(QCoreApplication::translate("register_window", "Do you have an account?", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_2->setToolTip(QCoreApplication::translate("register_window", "<html><head/><body><pre style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New';\"><br/></pre></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_2->setText(QCoreApplication::translate("register_window", "Sign In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class register_window: public Ui_register_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_WINDOW_H
