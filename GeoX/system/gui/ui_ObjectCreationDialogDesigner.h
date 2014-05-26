/********************************************************************************
** Form generated from reading UI file 'ObjectCreationDialogDesigner.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBJECTCREATIONDIALOGDESIGNER_H
#define UI_OBJECTCREATIONDIALOGDESIGNER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ObjectCreationDialog
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frameCreatorEditor;
    QFrame *line;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ObjectCreationDialog)
    {
        if (ObjectCreationDialog->objectName().isEmpty())
            ObjectCreationDialog->setObjectName(QString::fromUtf8("ObjectCreationDialog"));
        ObjectCreationDialog->resize(400, 300);
        vboxLayout = new QVBoxLayout(ObjectCreationDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(3, 3, 3, 3);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        frameCreatorEditor = new QFrame(ObjectCreationDialog);
        frameCreatorEditor->setObjectName(QString::fromUtf8("frameCreatorEditor"));
        frameCreatorEditor->setFrameShape(QFrame::NoFrame);
        frameCreatorEditor->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(frameCreatorEditor);

        line = new QFrame(ObjectCreationDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(131, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(ObjectCreationDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setDefault(true);

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(ObjectCreationDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(ObjectCreationDialog);
        QObject::connect(okButton, SIGNAL(clicked()), ObjectCreationDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), ObjectCreationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ObjectCreationDialog);
    } // setupUi

    void retranslateUi(QDialog *ObjectCreationDialog)
    {
        ObjectCreationDialog->setWindowTitle(QApplication::translate("ObjectCreationDialog", "Create a new Object Instance", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("ObjectCreationDialog", "&OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("ObjectCreationDialog", "Cancel", 0, QApplication::UnicodeUTF8));
        cancelButton->setShortcut(QApplication::translate("ObjectCreationDialog", "Esc", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ObjectCreationDialog: public Ui_ObjectCreationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBJECTCREATIONDIALOGDESIGNER_H
