import QtQuick 2.11
import QtQuick.Window 2.11
import QtQuick.Controls 2.2

Window {
    visible: true
    width: 2 * Screen.width / 3
    height: 2 * Screen.height / 3
    title: qsTr("Hello World")

    StackView {
        id: stack
        initialItem: view
        anchors.fill: parent

        Component {
            id: view

            MouseArea {
                Text {
                    text: stack.depth
                    anchors.centerIn: parent
                }
                onClicked: stack.push(view)
            }
        }
    }
}
