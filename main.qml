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
        id:scale
        x:-100; y:-160;
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
        id:handle
        x:-100; y:-160
        source:"handle.png"
    }
    Image {
        id:roll
        x:-100; y:-160
        source:"roll.png"
    }
    Image {
        id:indicators
        x:-100; y:-160
        source:"indicators.png"
    }
    Text {
            id: textRoll
            x: 355; y:210;
            text: comport.msg
            style: Text.Raised; styleColor: "#22202c"
            font.family: batavia.name
            font.pixelSize:42;
            //color: "steelblue"
            color: "#ffff00"
        }
}
