/********************************************************************************
** Form generated from reading UI file 'GLGeometryViewer3DDesigner.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLGEOMETRYVIEWER3DDESIGNER_H
#define UI_GLGEOMETRYVIEWER3DDESIGNER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "GeoXGLWidget3D.h"

QT_BEGIN_NAMESPACE

class Ui_GLGeometryViewer3D
{
public:
    QHBoxLayout *hboxLayout;
    QFrame *frame_2;
    QVBoxLayout *vboxLayout;
    QToolButton *btnCamera;
    QToolButton *btnResetCamera;
    QToolButton *btnPick;
    QToolButton *btnLight;
    QToolButton *btnFillMode;
    QToolButton *btnHandles;
    QToolButton *btnDrawAxis;
    QToolButton *btnVertexLighting;
    QToolButton *btnClear;
    QSpacerItem *spacerItem;
    GeoXGLWidget3D *glFrame;

    void setupUi(QWidget *GLGeometryViewer3D)
    {
        if (GLGeometryViewer3D->objectName().isEmpty())
            GLGeometryViewer3D->setObjectName(QString::fromUtf8("GLGeometryViewer3D"));
        GLGeometryViewer3D->resize(782, 531);
        GLGeometryViewer3D->setAutoFillBackground(true);
        hboxLayout = new QHBoxLayout(GLGeometryViewer3D);
        hboxLayout->setSpacing(0);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        frame_2 = new QFrame(GLGeometryViewer3D);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(54, 16));
        frame_2->setMaximumSize(QSize(54, 16777215));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        vboxLayout = new QVBoxLayout(frame_2);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(3, 3, 3, 3);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        btnCamera = new QToolButton(frame_2);
        btnCamera->setObjectName(QString::fromUtf8("btnCamera"));
        btnCamera->setMinimumSize(QSize(46, 40));
        const QIcon icon = QIcon(QString::fromUtf8(":/images/Camera.png"));
        btnCamera->setIcon(icon);
        btnCamera->setIconSize(QSize(32, 32));
        btnCamera->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        vboxLayout->addWidget(btnCamera);

        btnResetCamera = new QToolButton(frame_2);
        btnResetCamera->setObjectName(QString::fromUtf8("btnResetCamera"));
        btnResetCamera->setMinimumSize(QSize(46, 0));

        vboxLayout->addWidget(btnResetCamera);

        btnPick = new QToolButton(frame_2);
        btnPick->setObjectName(QString::fromUtf8("btnPick"));
        btnPick->setMinimumSize(QSize(46, 40));
        btnPick->setSizeIncrement(QSize(0, 0));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/SelectPoint.png"));
        btnPick->setIcon(icon1);
        btnPick->setIconSize(QSize(32, 32));
        btnPick->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        vboxLayout->addWidget(btnPick);

        btnLight = new QToolButton(frame_2);
        btnLight->setObjectName(QString::fromUtf8("btnLight"));
        btnLight->setMinimumSize(QSize(46, 0));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/images/103px-Light_bulb_icon.svg.png"));
        btnLight->setIcon(icon2);
        btnLight->setIconSize(QSize(32, 32));
        btnLight->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        vboxLayout->addWidget(btnLight);

        btnFillMode = new QToolButton(frame_2);
        btnFillMode->setObjectName(QString::fromUtf8("btnFillMode"));
        btnFillMode->setMinimumSize(QSize(46, 0));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/images/wirecube.png"));
        btnFillMode->setIcon(icon3);
        btnFillMode->setIconSize(QSize(32, 32));
        btnFillMode->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        vboxLayout->addWidget(btnFillMode);

        btnHandles = new QToolButton(frame_2);
        btnHandles->setObjectName(QString::fromUtf8("btnHandles"));
        btnHandles->setMinimumSize(QSize(46, 0));

        vboxLayout->addWidget(btnHandles);

        btnDrawAxis = new QToolButton(frame_2);
        btnDrawAxis->setObjectName(QString::fromUtf8("btnDrawAxis"));
        btnDrawAxis->setMinimumSize(QSize(46, 0));

        vboxLayout->addWidget(btnDrawAxis);

        btnVertexLighting = new QToolButton(frame_2);
        btnVertexLighting->setObjectName(QString::fromUtf8("btnVertexLighting"));
        btnVertexLighting->setEnabled(true);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnVertexLighting->sizePolicy().hasHeightForWidth());
        btnVertexLighting->setSizePolicy(sizePolicy);
        btnVertexLighting->setMinimumSize(QSize(46, 0));

        vboxLayout->addWidget(btnVertexLighting);

        btnClear = new QToolButton(frame_2);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setMinimumSize(QSize(46, 40));
        const QIcon icon4 = QIcon(QString::fromUtf8(":/images/400px-Broom_icon.svg.png"));
        btnClear->setIcon(icon4);
        btnClear->setIconSize(QSize(32, 32));
        btnClear->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        vboxLayout->addWidget(btnClear);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        hboxLayout->addWidget(frame_2);

        glFrame = new GeoXGLWidget3D(GLGeometryViewer3D);
        glFrame->setObjectName(QString::fromUtf8("glFrame"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(13), static_cast<QSizePolicy::Policy>(13));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(glFrame->sizePolicy().hasHeightForWidth());
        glFrame->setSizePolicy(sizePolicy1);
        glFrame->setMinimumSize(QSize(0, 0));
        glFrame->setMouseTracking(false);

        hboxLayout->addWidget(glFrame);


        retranslateUi(GLGeometryViewer3D);

        QMetaObject::connectSlotsByName(GLGeometryViewer3D);
    } // setupUi

    void retranslateUi(QWidget *GLGeometryViewer3D)
    {
        GLGeometryViewer3D->setWindowTitle(QApplication::translate("GLGeometryViewer3D", "Form", 0, QApplication::UnicodeUTF8));
        btnCamera->setText(QApplication::translate("GLGeometryViewer3D", "camera", 0, QApplication::UnicodeUTF8));
        btnResetCamera->setText(QApplication::translate("GLGeometryViewer3D", "Reset", 0, QApplication::UnicodeUTF8));
        btnPick->setText(QApplication::translate("GLGeometryViewer3D", "select", 0, QApplication::UnicodeUTF8));
        btnLight->setText(QApplication::translate("GLGeometryViewer3D", "Light", 0, QApplication::UnicodeUTF8));
        btnFillMode->setText(QApplication::translate("GLGeometryViewer3D", "Fill Mode", 0, QApplication::UnicodeUTF8));
        btnHandles->setText(QApplication::translate("GLGeometryViewer3D", "Handles", 0, QApplication::UnicodeUTF8));
        btnDrawAxis->setText(QApplication::translate("GLGeometryViewer3D", "Axes", 0, QApplication::UnicodeUTF8));
        btnVertexLighting->setText(QApplication::translate("GLGeometryViewer3D", "Light F/V", 0, QApplication::UnicodeUTF8));
        btnClear->setText(QApplication::translate("GLGeometryViewer3D", "clear", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GLGeometryViewer3D: public Ui_GLGeometryViewer3D {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLGEOMETRYVIEWER3DDESIGNER_H
