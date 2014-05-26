/********************************************************************************
** Form generated from reading UI file 'LogoViewerDesigner.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGOVIEWERDESIGNER_H
#define UI_LOGOVIEWERDESIGNER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogoViewer
{
public:
    QVBoxLayout *vboxLayout;
    QSpacerItem *spacerItem;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *LogoViewer)
    {
        if (LogoViewer->objectName().isEmpty())
            LogoViewer->setObjectName(QString::fromUtf8("LogoViewer"));
        LogoViewer->resize(636, 467);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        LogoViewer->setPalette(palette);
        LogoViewer->setAutoFillBackground(true);
        vboxLayout = new QVBoxLayout(LogoViewer);
        vboxLayout->setSpacing(9);
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        label = new QLabel(LogoViewer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/logo.png")));
        label->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(label);

        label_3 = new QLabel(LogoViewer);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        vboxLayout->addWidget(label_3);

        label_2 = new QLabel(LogoViewer);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        vboxLayout->addWidget(label_2);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);


        retranslateUi(LogoViewer);

        QMetaObject::connectSlotsByName(LogoViewer);
    } // setupUi

    void retranslateUi(QWidget *LogoViewer)
    {
        LogoViewer->setWindowTitle(QApplication::translate("LogoViewer", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_3->setText(QApplication::translate("LogoViewer", "Geometric Modeling", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("LogoViewer", "Summer Semester 2014", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LogoViewer: public Ui_LogoViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGOVIEWERDESIGNER_H
