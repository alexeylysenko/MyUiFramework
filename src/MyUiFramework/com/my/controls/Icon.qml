import QtQuick 2.15
import QtGraphicalEffects 1.15

import com.my.controls 1.0

Item {
    id: root

    property alias source: image.source
    property alias fillMode: image.fillMode

    property size sourceSize: Qt.size(width, height)
    property color color: Style.iconPalette.color

    implicitWidth: root.sourceSize.width
    implicitHeight: root.sourceSize.height

    Image {
        id: image
        anchors.fill: parent
        smooth: true
        visible: false
        fillMode: Image.PreserveAspectFit
        sourceSize: root.sourceSize
    }

    ColorOverlay {
        anchors.fill: image
        source: image
        color: root.color
    }
}
