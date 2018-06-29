import QtQuick 2.0
import QtQuick.Layouts 1.3

ColumnLayout {
    id: grid

    Rectangle {
        Layout.alignment: Qt.AlignTop
        Layout.fillWidth: true
        Layout.preferredHeight: grid.height / 2
        color: "black"

        Image {
            id: logo
            source: "images/logo.jpg"
        }
    }

    Rectangle {
        id: app_logo_container
        Layout.alignment: Qt.AlignBottom
        Layout.fillWidth: true
        Layout.preferredHeight: grid.height / 2
        color: "red"
        border.color: "red"
        border.width: 10

        Image {
            id: app
            source: "images/logo.jpg"

        }
    }
}
