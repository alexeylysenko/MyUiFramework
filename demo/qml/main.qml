import QtQuick 2.15
import QtQuick.Layouts 1.15
import QtQuick.Controls 2.15

ApplicationWindow {
    id: window
    width: 800
    height: 480
    visible: true

    Column {
        anchors.fill: parent

        TabBar {
            id: bar
            width: parent.width
            height: 40

            TabButton {
                text: qsTr("Button")
            }

            TabButton {
                text: qsTr("BusyIndicator")
            }

            TabButton {
                text: qsTr("Icon")
            }
        }

        StackLayout {
            width: parent.width
            height: parent.height - bar.height
            currentIndex: bar.currentIndex

            ButtonDemo {}

            BusyIndicatorDemo {}

            IconDemo {}
        }
    }
}
