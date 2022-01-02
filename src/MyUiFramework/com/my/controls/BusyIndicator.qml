import QtQuick 2.15
import QtQuick.Controls 2.15 as T

import com.my.controls 1.0

T.BusyIndicator {
    id: control

    property real size: 30
    property real thickness: 2
    property color startColor: Style.busyIndicatorPalette.startColor
    property color endColor: Style.busyIndicatorPalette.endColor
    property int interval: 1000

    implicitWidth: 30
    implicitHeight: 30
    width: control.size
    height: control.size

    QtObject {
        id: _private

        function interpolateColors(color1, color2, factor) {
            const items = ['r', 'g', 'b', 'a']
            var result = Qt.rgba(color1.r, color1.g, color1.b, color1.a)
            items.forEach(function(item) {
                result[item] = result[item] + factor * (color2[item] - color1[item])
            })
            return result
        }
    }

    contentItem: Item {
        anchors.fill: parent

        Repeater {
            id: repeater
            model: 9

            delegate: Rectangle {
                property real rotationAngle: index / repeater.count * 360 + 180

                x: control.contentItem.width / 2
                y: control.contentItem.height / 2
                implicitWidth: control.thickness
                implicitHeight: control.contentItem.height * 0.3
                radius: 5
                color: _private.interpolateColors(control.startColor, control.endColor, index / (repeater.count - 1))
                transform: [
                    Translate {
                        x: 0
                        y: control.contentItem.height / 2 - height
                    },
                    Rotation {
                        angle: rotationAngle
                    }
                ]

                Timer {
                    interval: control.interval / repeater.count
                    running: control.visible && control.running
                    repeat: control.running
                    onTriggered: {
                        parent.rotationAngle += 360 / repeater.count
                    }
                }
            }
        }
    }
}
