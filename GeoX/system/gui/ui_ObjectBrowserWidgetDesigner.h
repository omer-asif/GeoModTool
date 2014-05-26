/********************************************************************************
** Form generated from reading UI file 'ObjectBrowserWidgetDesigner.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBJECTBROWSERWIDGETDESIGNER_H
#define UI_OBJECTBROWSERWIDGETDESIGNER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ObjectBrowserWidget
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *topFrame;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *labelIcon;
    QLabel *classDescriptionLabel;
    QPushButton *editButton;
    QSpacerItem *spacerItem1;
    QFrame *editorFrame;

    void setupUi(QWidget *ObjectBrowserWidget)
    {
        if (ObjectBrowserWidget->objectName().isEmpty())
            ObjectBrowserWidget->setObjectName(QString::fromUtf8("ObjectBrowserWidget"));
        ObjectBrowserWidget->resize(520, 384);
        vboxLayout = new QVBoxLayout(ObjectBrowserWidget);
        vboxLayout->setSpacing(2);
        vboxLayout->setContentsMargins(3, 3, 3, 3);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        topFrame = new QFrame(ObjectBrowserWidget);
        topFrame->setObjectName(QString::fromUtf8("topFrame"));
        topFrame->setMinimumSize(QSize(16, 40));
        topFrame->setMaximumSize(QSize(16777215, 40));
        topFrame->setFrameShape(QFrame::Panel);
        topFrame->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(topFrame);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        labelIcon = new QLabel(topFrame);
        labelIcon->setObjectName(QString::fromUtf8("labelIcon"));
        labelIcon->setPixmap(QPixmap(QString::fromUtf8(":/foundation/Images/Classes/Object.png")));

        hboxLayout->addWidget(labelIcon);

        classDescriptionLabel = new QLabel(topFrame);
        classDescriptionLabel->setObjectName(QString::fromUtf8("classDescriptionLabel"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(classDescriptionLabel->sizePolicy().hasHeightForWidth());
        classDescriptionLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg"));
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        classDescriptionLabel->setFont(font);

        hboxLayout->addWidget(classDescriptionLabel);

        editButton = new QPushButton(topFrame);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(editButton->sizePolicy().hasHeightForWidth());
        editButton->setSizePolicy(sizePolicy1);
        editButton->setMaximumSize(QSize(16777215, 24));
        const QIcon icon = QIcon(QString::fromUtf8(":/foundation/Images/Buttons/ArrowDropDownSmall.png"));
        editButton->setIcon(icon);

        hboxLayout->addWidget(editButton);

        spacerItem1 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout->addWidget(topFrame);

        editorFrame = new QFrame(ObjectBrowserWidget);
        editorFrame->setObjectName(QString::fromUtf8("editorFrame"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(editorFrame->sizePolicy().hasHeightForWidth());
        editorFrame->setSizePolicy(sizePolicy2);
        editorFrame->setFrameShape(QFrame::Panel);
        editorFrame->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(editorFrame);


        retranslateUi(ObjectBrowserWidget);

        QMetaObject::connectSlotsByName(ObjectBrowserWidget);
    } // setupUi

    void retranslateUi(QWidget *ObjectBrowserWidget)
    {
        ObjectBrowserWidget->setWindowTitle(QApplication::translate("ObjectBrowserWidget", "Form", 0, QApplication::UnicodeUTF8));
        labelIcon->setText(QString());
        classDescriptionLabel->setText(QApplication::translate("ObjectBrowserWidget", "ClassName@Address (xx Bytes)", 0, QApplication::UnicodeUTF8));
        editButton->setText(QApplication::translate("ObjectBrowserWidget", " Edit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ObjectBrowserWidget: public Ui_ObjectBrowserWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBJECTBROWSERWIDGETDESIGNER_H
