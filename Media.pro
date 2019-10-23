QT += quick multimedia core multimediawidgets


CONFIG += c++11
SOURCES += \
        main.cpp \
    player.cpp \
    playlistmodel.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH = $$PWD/ohMyTaglib/include

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

LIBS += -L$$PWD/ohMyTaglib/ -lohMyTaglib
INCLUDEPATH += $$PWD/ohMyTaglib/include
DEPENDPATH += $$PWD/ohMyTaglib/include


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

#LIBS += -ltag

DISTFILES +=

HEADERS += \
    player.h \
    playlistmodel.h
