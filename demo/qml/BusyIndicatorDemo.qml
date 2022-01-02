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
                text: qsTr("Size")
                width: 150
                height: 40
                verticalAlignment: Text.AlignVCenter
            }

            QtControls.SpinBox {
                id: sizeSpinBox
                value: 30
                width: 200
                height: 40
                from: 20
                to: 100
            }

            Text  {
                text: qsTr("Thickness")
                width: 150
                height: 40
                verticalAlignment: Text.AlignVCenter
            }

            QtControls.SpinBox {
                id: thicknessSpinBox
                value: 2
                width: 200
                height: 40
                from: 1
                to: 5
            }

            Text {
                text: qsTr("Interval")
                width: 150
                height: 40
                verticalAlignment: Text.AlignVCenter
            }

            QtControls.SpinBox {
                id: intervalSpinBox
                value: 1000
                width: 200
                height: 40
                from: 500
                to: 5000
                stepSize: 100
            }

            Item {
                Layout.fillHeight: true
            }
        }

        Item {
            Layout.fillWidth: true
            Layout.fillHeight: true

            MyControls.BusyIndicator {
                anchors.centerIn: parent
                size: sizeSpinBox.value
                thickness: thicknessSpinBox.value
                interval: intervalSpinBox.value
            }
        }
    }
}
