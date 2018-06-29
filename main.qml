import QtQuick 2.11
import QtQuick.Window 2.11

Window {
    visible: true
    width: 2 * Screen.width / 3
    height: 2 * Screen.height / 3
    title: qsTr("Hello World")

    LoadingPage {
        anchors.fill: parent
    }
}
