QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT += charts

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    books.cpp \
    createbook.cpp \
    createtemplate.cpp \
    main.cpp \
    mainwindow.cpp \
    templates.cpp \
    utilities.cpp

HEADERS += \
    books.h \
    createbook.h \
    createtemplate.h \
    mainwindow.h \
    templates.h \
    utilities.h

FORMS += \
    books.ui \
    createbook.ui \
    createtemplate.ui \
    mainwindow.ui \
    templates.ui

TRANSLATIONS += \
    Readalot_bg_BG.ts
CONFIG += lrelease
CONFIG += embed_translations

COPIES += copyFiles
copyFiles.files = $$files(../json_files/*)
copyFiles.path = $$OUT_PWD/json_files

COPIES += copyFilesR
copyFilesR.files = $$files(../resources/*)
copyFilesR.path = $$OUT_PWD/resources

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
