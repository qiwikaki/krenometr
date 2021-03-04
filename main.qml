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
    /*Image {
        id:font
        x:-200; y:-560
        source:"font.png"
    }*/
    Image {
        id:scale
        //x:-100; y:-160;
        x:-250; y:-610;
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
                    spring: 1.9
                    damping: 0.5
                }
            }
        }
    }
    Image {
        id:ampllefthand
        x:-250; y:-610;
        source:"ampllefthand.png"
        Connections {
            target: comport
            onRotationUpdate: {
               rotationMin.angle = angle
            }
            /*onMinRollChanged: {
                rotationMin.angle = angle //+ comport.minRoll
            }*/
        }
        transform: Rotation {
            id: rotationMin
            angle: 90
            origin.x: scale.width / 2
            origin.y: scale.height / 2
            Behavior on angle {
                SpringAnimation {
                    spring: 1.9
                    damping: 0.5
                }
            }
        }
    }
    /*Image {
        id:amplrighthand
        x:-250; y:-610;
        source:"amplrighthand.png"
        Connections {
            target: comport
            onRotationUpdate: {
               rotationMax.angle = angle
            }
        }
        transform: Rotation {
            id: rotationMax
            angle: 0
            origin.x: scale.width / 2
            origin.y: scale.height / 2
            Behavior on angle {
                SpringAnimation {
                    spring: 1.9
                    damping: 0.5
                }
            }
        }
    }*/
    Image {
        id:handle
        x:-250; y:-610
        source:"handle.png"
    }
    Image {
        id:indicators
        x:-100; y:-360
        source:"indicators.png"
    }
    Image {
        id:ampl
        x:-250; y:-610
        source:"ampl.png"
    }
    Image {
        id:charging
        x:-250; y:-610
        source:"charging.png"
    }
    Text {
            id: textRoll
            x: 300; y:390;
            text: comport.rollmsg
            style: Text.Raised
            font.family: batavia.name
            font.pixelSize:80;
            //color: "steelblue"
            color: "#ffff00"
        }
    Text {
            id: textPitch
            x: 370; y:547;
            text: comport.pitchmsg
            style: Text.Raised
            font.family: batavia.name
            font.pixelSize:30;
            //color: "steelblue"
            color: "#ffffff"
        }
    Text {
            id: angle
            x: 460; y:380;
            text: "°"
            style: Text.Raised
            font.family: batavia.name
            font.pixelSize:60;
            color: "#ffff00"
        }
    Text {
            id: textRollAlarm
            x: 660; y:500;
            text: "12°"
            style: Text.Raised; styleColor: "#22202c"
            font.family: batavia.name
            font.pixelSize:50;
            //color: "steelblue"
            color: "#ffffff"
        }
    Text {
            id: textPer
            x: 65; y:500;
            text: "17s"
            style: Text.Raised; styleColor: "#22202c"
            font.family: batavia.name
            font.pixelSize:50;
            //color: "steelblue"
            color: "#ffffff"
        }
    Text {
            id: textLeftAmpl
            x: 40; y:180;
            text: comport.minrollmsg
            style: Text.Raised;
            font.family: batavia.name
            font.pixelSize:25;
            //color: "steelblue"
            color: "#ffffff"
        }
    Text {
            id: textRightAmpl
            x: 730; y:180;
            text: comport.maxrollmsg
            style: Text.Raised;
            font.family: batavia.name
            font.pixelSize:25;
            //color: "steelblue"
            color: "#ffffff"
        }
}
