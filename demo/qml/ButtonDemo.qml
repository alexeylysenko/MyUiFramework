import QtQuick 2.15
import QtQuick.Layouts 1.15
import QtQuick.Controls 2.15 as QtControls

import com.my.controls 1.0 as MyControls

Item {
    id: root

    RowLayout {
        anchors.fill: parent
        anchors.margins: 10

        Grid {
            Layout.preferredWidth: parent.width / 2
            Layout.fillHeight: true
            columns: 2
            rowSpacing: 5

            Text  {
                text: qsTr("Text")
                width: 150
                height: 40
                verticalAlignment: Text.AlignVCenter
            }

            QtControls.TextField {
                id: textField
                text: "Button"
                width: 200
                height: 40
            }

            Text  {
                text: qsTr("Type")
                width: 150
                height: 40
                verticalAlignment: Text.AlignVCenter
            }

            QtControls.ComboBox {
                id: typeComboBox
                model: [qsTr("Primary"), qsTr("Secondary")]
                width: 200
                height: 40
            }

            Text {
                text: qsTr("Enabled")
                width: 150
                height: 40
                verticalAlignment: Text.AlignVCenter
            }

            QtControls.CheckBox {
                id: enabledCheckBox
                checked: true
                height: 40
            }

            Text {
                text: qsTr("Show icon")
                width: 150
                height: 40
                verticalAlignment: Text.AlignVCenter
            }

            QtControls.CheckBox {
                id: showIconCheckBox
                checked: false
                height: 40
            }

            Text {
                text: qsTr("Left inset")
                width: 150
                height: 40
                verticalAlignment: Text.AlignVCenter
            }

            QtControls.SpinBox {
                id: leftInset
                value: 0
                width: 200
                height: 40
                from: 0
                to: 20
            }

            Text {
                text: qsTr("Right inset")
                width: 150
                height: 40
                verticalAlignment: Text.AlignVCenter
            }

            QtControls.SpinBox {
                id: rightInset
                value: 0
                width: 200
                height: 40
                from: 0
                to: 20
            }

            Text {
                text: qsTr("Top inset")
                width: 150
                height: 40
                verticalAlignment: Text.AlignVCenter
            }

            QtControls.SpinBox {
                id: topInset
                value: 0
                width: 200
                height: 40
                from: 0
                to: 20
            }

            Text {
                text: qsTr("Bottom inset")
                width: 150
                height: 40
                verticalAlignment: Text.AlignVCenter
            }

            QtControls.SpinBox {
                id: bottomInset
                value: 0
                width: 200
                height: 40
                from: 0
                to: 20
            }

            Text {
                text: qsTr("Show clickable area")
                width: 150
                height: 40
                verticalAlignment: Text.AlignVCenter
            }

            QtControls.CheckBox {
                id: showClickableAreaCheckBox
                checked: false
                height: 40
            }

            Item {
                Layout.fillHeight: true
            }
        }

        Item {
            Layout.fillWidth: true
            Layout.fillHeight: true

            MyControls.Button {
                id: button
                anchors.centerIn: parent
                type: typeComboBox.currentIndex === 0 ? MyControls.ButtonType.Primary : MyControls.ButtonType.Secondary
                text: textField.text
                enabled: enabledCheckBox.checked
                leftInset: leftInset.value
                rightInset: rightInset.value
                topInset: topInset.value
                bottomInset: bottomInset.value
                height: 60
                width: 200
                iconSource: showIconCheckBox.checked ? "qrc:/icon/test-icon.svg" : ""
            }

            Rectangle {
                anchors.fill: button
                visible: showClickableAreaCheckBox.checked
                color: "#40ff0000"
            }
        }
    }
}
