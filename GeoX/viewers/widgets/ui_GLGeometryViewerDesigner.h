/********************************************************************************
** Form generated from reading UI file 'GLGeometryViewerDesigner.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLGEOMETRYVIEWERDESIGNER_H
#define UI_GLGEOMETRYVIEWERDESIGNER_H

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
#include "GeoXGLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_GLGeometryViewer
{
public:
    QHBoxLayout *hboxLayout;
    QFrame *frame_2;
    QVBoxLayout *vboxLayout;
    QToolButton *btnCamera;
    QToolButton *btnPick;
    QToolButton *btnClear;
    QToolButton *btnCreate;
    QToolButton *btnDrawAxis;
    QToolButton *btnDrawPoints;
    QToolButton *btnDrawLines;
    QToolButton *btnDrawTriangles;
    QToolButton *btnDrawWithGlow;
    QToolButton *btnDrawTexture;
    QSpacerItem *spacerItem;
    GeoXGLWidget *glFrame;

    void setupUi(QWidget *GLGeometryViewer)
    {
        if (GLGeometryViewer->objectName().isEmpty())
            GLGeometryViewer->setObjectName(QString::fromUtf8("GLGeometryViewer"));
        GLGeometryViewer->resize(1024, 768);
        GLGeometryViewer->setAutoFillBackground(true);
        hboxLayout = new QHBoxLayout(GLGeometryViewer);
        hboxLayout->setSpacing(0);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        frame_2 = new QFrame(GLGeometryViewer);
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
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Camera.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCamera->setIcon(icon);
        btnCamera->setIconSize(QSize(32, 32));
        btnCamera->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        vboxLayout->addWidget(btnCamera);

        btnPick = new QToolButton(frame_2);
        btnPick->setObjectName(QString::fromUtf8("btnPick"));
        btnPick->setMinimumSize(QSize(46, 40));
        btnPick->setSizeIncrement(QSize(0, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/SelectPoint.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPick->setIcon(icon1);
        btnPick->setIconSize(QSize(32, 32));
        btnPick->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        vboxLayout->addWidget(btnPick);

        btnClear = new QToolButton(frame_2);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setMinimumSize(QSize(46, 40));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/400px-Broom_icon.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnClear->setIcon(icon2);
        btnClear->setIconSize(QSize(32, 32));
        btnClear->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        vboxLayout->addWidget(btnClear);

        btnCreate = new QToolButton(frame_2);
        btnCreate->setObjectName(QString::fromUtf8("btnCreate"));
        btnCreate->setMinimumSize(QSize(46, 56));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/100px-Nuvola_Green_Plus.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCreate->setIcon(icon3);
        btnCreate->setIconSize(QSize(32, 32));
        btnCreate->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        vboxLayout->addWidget(btnCreate);

        btnDrawAxis = new QToolButton(frame_2);
        btnDrawAxis->setObjectName(QString::fromUtf8("btnDrawAxis"));
        btnDrawAxis->setMinimumSize(QSize(46, 46));

        vboxLayout->addWidget(btnDrawAxis);

        btnDrawPoints = new QToolButton(frame_2);
        btnDrawPoints->setObjectName(QString::fromUtf8("btnDrawPoints"));
        btnDrawPoints->setMinimumSize(QSize(46, 46));

        vboxLayout->addWidget(btnDrawPoints);

        btnDrawLines = new QToolButton(frame_2);
        btnDrawLines->setObjectName(QString::fromUtf8("btnDrawLines"));
        btnDrawLines->setMinimumSize(QSize(46, 46));

        vboxLayout->addWidget(btnDrawLines);

        btnDrawTriangles = new QToolButton(frame_2);
        btnDrawTriangles->setObjectName(QString::fromUtf8("btnDrawTriangles"));
        btnDrawTriangles->setMinimumSize(QSize(46, 46));

        vboxLayout->addWidget(btnDrawTriangles);

        btnDrawWithGlow = new QToolButton(frame_2);
        btnDrawWithGlow->setObjectName(QString::fromUtf8("btnDrawWithGlow"));
        btnDrawWithGlow->setMinimumSize(QSize(46, 0));

        vboxLayout->addWidget(btnDrawWithGlow);

        btnDrawTexture = new QToolButton(frame_2);
        btnDrawTexture->setObjectName(QString::fromUtf8("btnDrawTexture"));
        btnDrawTexture->setMinimumSize(QSize(46, 46));

        vboxLayout->addWidget(btnDrawTexture);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        hboxLayout->addWidget(frame_2);

        glFrame = new GeoXGLWidget(GLGeometryViewer);
        glFrame->setObjectName(QString::fromUtf8("glFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(glFrame->sizePolicy().hasHeightForWidth());
        glFrame->setSizePolicy(sizePolicy);
        glFrame->setMinimumSize(QSize(16, 16));
        glFrame->setMouseTracking(false);

        hboxLayout->addWidget(glFrame);


        retranslateUi(GLGeometryViewer);

        QMetaObject::connectSlotsByName(GLGeometryViewer);
    } // setupUi

    void retranslateUi(QWidget *GLGeometryViewer)
    {
        GLGeometryViewer->setWindowTitle(QApplication::translate("GLGeometryViewer", "Form", 0, QApplication::UnicodeUTF8));
        btnCamera->setText(QApplication::translate("GLGeometryViewer", "camera", 0, QApplication::UnicodeUTF8));
        btnPick->setText(QApplication::translate("GLGeometryViewer", "select", 0, QApplication::UnicodeUTF8));
        btnClear->setText(QApplication::translate("GLGeometryViewer", "clear", 0, QApplication::UnicodeUTF8));
        btnCreate->setText(QApplication::translate("GLGeometryViewer", "add", 0, QApplication::UnicodeUTF8));
        btnDrawAxis->setText(QApplication::translate("GLGeometryViewer", "Draw\n"
"Axes", 0, QApplication::UnicodeUTF8));
        btnDrawPoints->setText(QApplication::translate("GLGeometryViewer", "Draw\n"
"Points", 0, QApplication::UnicodeUTF8));
        btnDrawLines->setText(QApplication::translate("GLGeometryViewer", "Draw\n"
"Lines", 0, QApplication::UnicodeUTF8));
        btnDrawTriangles->setText(QApplication::translate("GLGeometryViewer", "Draw\n"
"Triang.", 0, QApplication::UnicodeUTF8));
        btnDrawWithGlow->setText(QApplication::translate("GLGeometryViewer", "Glow", 0, QApplication::UnicodeUTF8));
        btnDrawTexture->setText(QApplication::translate("GLGeometryViewer", "Draw\n"
"Texture", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GLGeometryViewer: public Ui_GLGeometryViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLGEOMETRYVIEWERDESIGNER_H
