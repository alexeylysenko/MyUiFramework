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
                text: qsTr("Width")
                width: 150
                height: 40
                verticalAlignment: Text.AlignVCenter
            }

            QtControls.SpinBox {
                id: widthSpinBox
                value: 50
                width: 200
                height: 40
                from: 30
                to: 200
                stepSize: 10
            }

            Text  {
                text: qsTr("Height")
                width: 150
                height: 40
                verticalAlignment: Text.AlignVCenter
            }

            QtControls.SpinBox {
                id: heightSpinBox
                value: 50
                width: 200
                height: 40
                from: 30
                to: 200
                stepSize: 10
            }

            Text  {
                text: qsTr("Source width")
                width: 150
                height: 40
                verticalAlignment: Text.AlignVCenter
            }

            QtControls.SpinBox {
                id: sourceWidthSpinBox
                value: 50
                width: 200
                height: 40
                from: 30
                to: 200
                stepSize: 10
            }

            Text  {
                text: qsTr("Source height")
                width: 150
                height: 40
                verticalAlignment: Text.AlignVCenter
            }

            QtControls.SpinBox {
                id: sourceHeightSpinBox
                value: 50
                width: 200
                height: 40
                from: 30
                to: 200
                stepSize: 10
            }

            Text  {
                text: qsTr("Fill mode")
                width: 150
                height: 40
                verticalAlignment: Text.AlignVCenter
            }

            QtControls.ComboBox {
                id: fillModeComboBox
                model: ListModel {
                    ListElement {
                        text: "Stretch"
                        value: Image.Stretch
                    }
                    ListElement {
                        text: "PreserveAspectFit"
                        value: Image.PreserveAspectFit
                    }
                    ListElement {
                        text: "PreserveAspectCrop"
                        value: Image.PreserveAspectCrop
                    }
                }

                width: 200
                height: 40
                currentIndex: 1
                textRole: "text"
                valueRole: "value"
            }

            Text  {
                text: qsTr("Source")
                width: 150
                height: 40
                verticalAlignment: Text.AlignVCenter
            }

            QtControls.ComboBox {
                id: sourceComboBox
                model: ListModel {
                    ListElement {
                        text: "Test icon 1"
                        value: "qrc:/icon/test-icon.svg"
                    }
                    ListElement {
                        text: "Test icon 2"
                        value: "qrc:/icon/test-icon-2.svg"
                    }
                }
                width: 200
                height: 40
                currentIndex: 0
                textRole: "text"
                valueRole: "value"
            }

            Item {
                Layout.fillHeight: true
            }
        }

        Item {
            Layout.fillWidth: true
            Layout.fillHeight: true

            MyControls.Icon {
                anchors.centerIn: parent
                width: widthSpinBox.value
                height: heightSpinBox.value
                sourceSize: Qt.size(sourceWidthSpinBox.value, sourceHeightSpinBox.value)
                fillMode: fillModeComboBox.currentValue
                source: sourceComboBox.currentValue
            }
        }
    }
}
