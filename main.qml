import QtQuick 2.11
import QtQuick.Window 2.11
import QtQuick.Controls 2.2

Window {
    visible: true
    width: 2 * Screen.width / 3
    height: 2 * Screen.height / 3
    title: qsTr("Hello World")

    SwipeView {
        id: swipeView
        anchors.fill: parent
        currentIndex: 0

        Page1 {
        }

        Page2 {
        }
    }
}
