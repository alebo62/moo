QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        Student_info.cpp \
        analysis.cpp \
        extract_fails.cpp \
        find_urls.cpp \
        grade.cpp \
        mai6.cpp \
        main.cpp \
        main4.cpp \
        main5.cpp \
        main6_2.cpp \
        main9.cpp \
        median.cpp \
        split_string.cpp \
        str.cpp \
        string_frame.cpp \
        vec.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    Student_info.h \
    grade.h \
    median.h \
    str.h \
    vec.h
