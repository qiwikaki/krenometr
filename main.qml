import QtQuick 2.12
import QtQuick.Window 2.12
import QtCharts 2.3
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.12
import CPP.comport 1.0

Window {
    width: 800
    height: 600
    color: "#22202c"
    visible: true
    title: qsTr("Hello World")
    Comport {
        id: comport;
    }
    FontLoader {
        id: batavia
        source: "font/Corporate.ttf"
    }
    /////////// from -90 to 90 //////////
    Image {
        id:mainfont
        x:-200; y:-560
        source:"mainfont.png"
    }
    Image {
        id:scale
        //x:-100; y:-160;
        x:-200; y:-560;
        source:"scale.png"
        Connections {
            target: comport
            onRotationUpdate: {
                rotation360.angle = angle
            }
        }
        transform: Rotation {
            id: rotation360
            angle: 0
            origin.x: scale.width / 2
            origin.y: scale.height / 2
            Behavior on angle {
                SpringAnimation {
                    spring: 1.5
                    damping: 0.8
                }
            }
        }
    }
    Image {
        id:ampllefthand
        x:-200; y:-560
        source:"ampllefthand.png"
        RotationAnimator {
             target: ampllefthand;
             from: 0.0;
             to: 35.0;
             duration: 5000
             running: true
        }
    }
    Image {
        id:amplrighthand
        x:-200; y:-560
        source:"amplrighthand.png"
        RotationAnimator {
             target: amplrighthand;
             from: 0.0;
             to: -20.0;
             duration: 5000
             running: true
        }
    }
    Image {
        id:handle
        x:-200; y:-560
        source:"handle.png"
    }
    Image {
        id:indicators
        x:-100; y:-360
        source:"indicators.png"
    }
    Text {
            id: textRoll
            x: 345; y:420;
            text: comport.msg
            style: Text.Raised
            font.family: batavia.name
            font.pixelSize:50;
            //color: "steelblue"
            color: "#ffff00"
        }
    Text {
            id: angle
            x: 450; y:402;
            text: "°"
            style: Text.Raised
            font.family: batavia.name
            font.pixelSize:55;
            color: "#ffff00"
        }
    Text {
            id: textAmpl
            x: 660; y:450;
            text: "12°"
            style: Text.Raised; styleColor: "#22202c"
            font.family: batavia.name
            font.pixelSize:55;
            color: "steelblue"
            //color: "#ffffff"
        }
    Text {
            id: textPer
            x: 60; y:450;
            text: "17s"
            style: Text.Raised; styleColor: "#22202c"
            font.family: batavia.name
            font.pixelSize:55;
            color: "steelblue"
            //color: "#ffffff"
        }
}
