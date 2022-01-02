import QtQuick 2.15
import QtQuick.Layouts 1.15
import QtQuick.Templates 2.15 as T

import com.my.controls 1.0

T.Button {
    id: control

    property int type: ButtonType.Primary
    property url iconSource: ""
    property real iconWidth: 40
    property real iconHeight: 40
    property real radius: 3
    property real minimumWidth: _private.calculateMinimumWidth()
    property real minimumHeight: _private.calculateMinimumHeight()

    readonly property var textMetrics: TextMetrics {
        font: control.font
        text: control.text
    }

    leftPadding: 20
    rightPadding: 20
    topPadding: 5
    bottomPadding: 5
    spacing: 5

    QtObject {
        id: _private

        function calculateMinimumWidth() {
            var buttonWidth = Math.ceil(control.textMetrics.advanceWidth) + control.leftPadding + control.rightPadding
            if (control.iconSource.toString() !== "") {
                buttonWidth += control.iconWidth + control.spacing
            }

            return buttonWidth
        }

        function calculateMinimumHeight() {
            var buttonHeight = Math.ceil(control.textMetrics.height)
            if (control.iconSource.toString() !== "") {
                buttonHeight = Math.max(buttonHeight, control.iconHeight)
            }
            buttonHeight += control.topPadding + control.bottomPadding

            return buttonHeight
        }
    }

    implicitWidth: Math.max(_private.calculateMinimumWidth(), control.minimumWidth)
    implicitHeight: Math.max(_private.calculateMinimumHeight(), control.minimumHeight)

    background: Rectangle {
        anchors {
            fill: parent
            topMargin: control.topInset
            bottomMargin: control.bottomInset
            leftMargin: control.leftInset
            rightMargin: control.rightInset
        }
        color: Style.buttonPalette.backgroundColor(control.type, control.enabled, control.pressed)
        border.color: Style.buttonPalette.borderColor(control.type, control.enabled, control.pressed)
        radius: control.radius
    }

    contentItem: RowLayout {
        anchors {
            fill: parent
            topMargin: control.topPadding
            bottomMargin: control.bottomPadding
            leftMargin: control.leftPadding
            rightMargin: control.rightPadding
        }
        spacing: control.spacing

        Icon {
            Layout.alignment: Qt.AlignVCenter
            width: control.iconWidth
            height: control.iconHeight
            source: control.iconSource
            color: Style.buttonPalette.textColor(control.type, control.enabled, control.pressed)
            visible: control.iconSource.toString() !== ""
        }

        Text {
            Layout.alignment: Qt.AlignVCenter
            Layout.fillWidth: true
            height: parent.height
            text: control.text
            font: control.font
            color: Style.buttonPalette.textColor(control.type, control.enabled, control.pressed)
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            elide: Text.ElideRight
        }
    }
}
