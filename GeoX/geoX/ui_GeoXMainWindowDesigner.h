/********************************************************************************
** Form generated from reading UI file 'GeoXMainWindowDesigner.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEOXMAINWINDOWDESIGNER_H
#define UI_GEOXMAINWINDOWDESIGNER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "ClassTypeClassPropertyEditorWidget.h"

QT_BEGIN_NAMESPACE

class Ui_GeoXMainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSaveAs;
    QAction *actionExit;
    QWidget *centralwidget;
    QHBoxLayout *hboxLayout;
    QFrame *mainFrame;
    QMenuBar *menubar;
    QMenu *menu_File;
    QToolBar *toolBar;
    QDockWidget *dockObjectView;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *vboxLayout;
    QVBoxLayout *vboxLayout1;
    QLabel *label;
    ClassTypeClassPropertyEditorWidget *experimentSelector;
    QFrame *experimentObjectViewFrame;
    QDockWidget *dockOutput;
    QWidget *dockWidgetContents;
    QHBoxLayout *hboxLayout1;
    QTextBrowser *outputWindow;

    void setupUi(QMainWindow *GeoXMainWindow)
    {
        if (GeoXMainWindow->objectName().isEmpty())
            GeoXMainWindow->setObjectName(QString::fromUtf8("GeoXMainWindow"));
        GeoXMainWindow->resize(855, 699);
        GeoXMainWindow->setMinimumSize(QSize(300, 200));
        GeoXMainWindow->setFocusPolicy(Qt::StrongFocus);
        GeoXMainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/MainIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        GeoXMainWindow->setWindowIcon(icon);
        GeoXMainWindow->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        GeoXMainWindow->setAnimated(false);
        actionOpen = new QAction(GeoXMainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSaveAs = new QAction(GeoXMainWindow);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/saveHS.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAs->setIcon(icon2);
        actionExit = new QAction(GeoXMainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon3);
        centralwidget = new QWidget(GeoXMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        hboxLayout = new QHBoxLayout(centralwidget);
        hboxLayout->setSpacing(0);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        mainFrame = new QFrame(centralwidget);
        mainFrame->setObjectName(QString::fromUtf8("mainFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(mainFrame->sizePolicy().hasHeightForWidth());
        mainFrame->setSizePolicy(sizePolicy);
        mainFrame->setAutoFillBackground(false);
        mainFrame->setFrameShape(QFrame::NoFrame);
        mainFrame->setFrameShadow(QFrame::Plain);

        hboxLayout->addWidget(mainFrame);

        GeoXMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GeoXMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 855, 26));
        menubar->setFocusPolicy(Qt::StrongFocus);
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        GeoXMainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(GeoXMainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setOrientation(Qt::Horizontal);
        GeoXMainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        dockObjectView = new QDockWidget(GeoXMainWindow);
        dockObjectView->setObjectName(QString::fromUtf8("dockObjectView"));
        dockObjectView->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockObjectView->setAllowedAreas(Qt::AllDockWidgetAreas);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        vboxLayout = new QVBoxLayout(dockWidgetContents_2);
        vboxLayout->setSpacing(3);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(3);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        label = new QLabel(dockWidgetContents_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        vboxLayout1->addWidget(label);

        experimentSelector = new ClassTypeClassPropertyEditorWidget(dockWidgetContents_2);
        experimentSelector->setObjectName(QString::fromUtf8("experimentSelector"));

        vboxLayout1->addWidget(experimentSelector);


        vboxLayout->addLayout(vboxLayout1);

        experimentObjectViewFrame = new QFrame(dockWidgetContents_2);
        experimentObjectViewFrame->setObjectName(QString::fromUtf8("experimentObjectViewFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(experimentObjectViewFrame->sizePolicy().hasHeightForWidth());
        experimentObjectViewFrame->setSizePolicy(sizePolicy1);
        experimentObjectViewFrame->setMinimumSize(QSize(250, 16));
        experimentObjectViewFrame->setFrameShape(QFrame::NoFrame);
        experimentObjectViewFrame->setFrameShadow(QFrame::Raised);

        vboxLayout->addWidget(experimentObjectViewFrame);

        dockObjectView->setWidget(dockWidgetContents_2);
        GeoXMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockObjectView);
        dockOutput = new QDockWidget(GeoXMainWindow);
        dockOutput->setObjectName(QString::fromUtf8("dockOutput"));
        dockOutput->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        hboxLayout1 = new QHBoxLayout(dockWidgetContents);
        hboxLayout1->setSpacing(0);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        outputWindow = new QTextBrowser(dockWidgetContents);
        outputWindow->setObjectName(QString::fromUtf8("outputWindow"));

        hboxLayout1->addWidget(outputWindow);

        dockOutput->setWidget(dockWidgetContents);
        GeoXMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockOutput);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(actionOpen);
        menu_File->addAction(actionSaveAs);
        menu_File->addSeparator();
        menu_File->addAction(actionExit);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSaveAs);
        toolBar->addSeparator();
        toolBar->addAction(actionExit);

        retranslateUi(GeoXMainWindow);

        QMetaObject::connectSlotsByName(GeoXMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GeoXMainWindow)
    {
        GeoXMainWindow->setWindowTitle(QApplication::translate("GeoXMainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("GeoXMainWindow", "&Open Experiment...", 0, QApplication::UnicodeUTF8));
        actionOpen->setIconText(QApplication::translate("GeoXMainWindow", "Open...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("GeoXMainWindow", "Open Experiment...", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionOpen->setShortcut(QApplication::translate("GeoXMainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionSaveAs->setText(QApplication::translate("GeoXMainWindow", "Save Experiment &As...", 0, QApplication::UnicodeUTF8));
        actionSaveAs->setIconText(QApplication::translate("GeoXMainWindow", "Save As...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSaveAs->setToolTip(QApplication::translate("GeoXMainWindow", "Save Experiment As...", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSaveAs->setShortcut(QApplication::translate("GeoXMainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("GeoXMainWindow", "E&xit", 0, QApplication::UnicodeUTF8));
        actionExit->setIconText(QApplication::translate("GeoXMainWindow", "Exit...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("GeoXMainWindow", "Exit...", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionExit->setShortcut(QApplication::translate("GeoXMainWindow", "Alt+X", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("GeoXMainWindow", "&File", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("GeoXMainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
        dockObjectView->setWindowTitle(QApplication::translate("GeoXMainWindow", "Object View", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GeoXMainWindow", "Experiment:", 0, QApplication::UnicodeUTF8));
        dockOutput->setWindowTitle(QApplication::translate("GeoXMainWindow", "Output", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GeoXMainWindow: public Ui_GeoXMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEOXMAINWINDOWDESIGNER_H
