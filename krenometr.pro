PROJECT_ROOT_PATH = $${PWD}/

QT += charts qml quick serialport \
    widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        kren.cpp \
        main.cpp \
        comport.cpp

RESOURCES += qml.qrc \
    font.qrc \
    sprites.qrc

TRANSLATIONS += \
    krenometr_ru_RU.ts

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
#qnx: target.path = /tmp/$${TARGET}/bin
#else: unix:!android: target.path = /opt/$${TARGET}/bin
#!isEmpty(target.path): INSTALLS += target

HEADERS += \
    comport.h \
    kren.h
    linux-rasp-pi-g++ {
        DEFINES += LINUX_ARM_GNUEABI
        PLATFORM = raspberry
        # Add library wiringpi for work GPIO
        #LIBS += -L/mnt/rasp-pi-rootfs/usr/local/lib -lwiringPi
        #LIBS += -L/home/tech/raspi/sysroot/usr/local/lib -lwiringPi

        # Include library specific for Raspberry Pi

        #INCLUDEPATH += /mnt/rasp-pi-rootfs/usr/local/include
        INCLUDEPATH += /home/tech/raspi/sysroot/usr/local/include
        # Deployment on Raspberry Pi
        target.path = /home/pi/
        INSTALLS += target
    }

    linux-rpi3-g++ {
        DEFINES += LINUX_ARM_GNUEABI
        PLATFORM = raspberry
        # Add library wiringpi for work GPIO
        #LIBS += -L/opt/qtrpi/raspbian/sysroot-minimal/usr/local/lib -lwiringPi
        #LIBS += -L/home/tech/raspi/sysroot/usr/local/lib -lwiringPi
        # Include library specific for Raspberry Pi
        #INCLUDEPATH += /opt/qtrpi/raspbian/sysroot-minimal/usr/local/include
        INCLUDEPATH += /home/tech/raspi/sysroot/usr/local/include
        # Deployment on Raspberry Pi
        target.path = /home/pi/
        INSTALLS += target
}

BIN_PATH = $${PROJECT_ROOT_PATH}/bin/$${PLATFORM}/$${BUILD_FLAG}/$${QT_VERSION}
BUILD_PATH = $${PROJECT_ROOT_PATH}/build/$${PLATFORM}/$${BUILD_FLAG}/$${QT_VERSION}

MOC_DIR = $${BUILD_PATH}/moc/
OBJECTS_DIR = $${BUILD_PATH}/obj/
RCC_DIR = $${BUILD_PATH}/rcc/
UI_DIR = $${BUILD_PATH}/ui/
