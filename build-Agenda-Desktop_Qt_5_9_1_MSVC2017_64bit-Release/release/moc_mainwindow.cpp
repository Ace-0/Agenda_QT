/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Agenda/mainwindow.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[375];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "sendLogout"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 10), // "sendSearch"
QT_MOC_LITERAL(4, 34, 10), // "sendCreate"
QT_MOC_LITERAL(5, 45, 10), // "sendDelete"
QT_MOC_LITERAL(6, 56, 12), // "receiveLogin"
QT_MOC_LITERAL(7, 69, 17), // "receiveSearchDone"
QT_MOC_LITERAL(8, 87, 17), // "receiveCreateDone"
QT_MOC_LITERAL(9, 105, 17), // "receiveDeleteDone"
QT_MOC_LITERAL(10, 123, 20), // "on_logoutBtn_clicked"
QT_MOC_LITERAL(11, 144, 26), // "on_listMeetingsBtn_clicked"
QT_MOC_LITERAL(12, 171, 29), // "on_listSponMeetingBtn_clicked"
QT_MOC_LITERAL(13, 201, 29), // "on_listParMeetingsBtn_clicked"
QT_MOC_LITERAL(14, 231, 23), // "on_listUsersBtn_clicked"
QT_MOC_LITERAL(15, 255, 24), // "on_searchUserBtn_clicked"
QT_MOC_LITERAL(16, 280, 26), // "on_titleMeetingBtn_clicked"
QT_MOC_LITERAL(17, 307, 25), // "on_timeMeetingBtn_clicked"
QT_MOC_LITERAL(18, 333, 20), // "on_createBtn_clicked"
QT_MOC_LITERAL(19, 354, 20) // "on_deleteBtn_clicked"

    },
    "MainWindow\0sendLogout\0\0sendSearch\0"
    "sendCreate\0sendDelete\0receiveLogin\0"
    "receiveSearchDone\0receiveCreateDone\0"
    "receiveDeleteDone\0on_logoutBtn_clicked\0"
    "on_listMeetingsBtn_clicked\0"
    "on_listSponMeetingBtn_clicked\0"
    "on_listParMeetingsBtn_clicked\0"
    "on_listUsersBtn_clicked\0"
    "on_searchUserBtn_clicked\0"
    "on_titleMeetingBtn_clicked\0"
    "on_timeMeetingBtn_clicked\0"
    "on_createBtn_clicked\0on_deleteBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    0,  105,    2, 0x06 /* Public */,
       4,    0,  106,    2, 0x06 /* Public */,
       5,    0,  107,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,  108,    2, 0x08 /* Private */,
       7,    0,  109,    2, 0x08 /* Private */,
       8,    0,  110,    2, 0x08 /* Private */,
       9,    0,  111,    2, 0x08 /* Private */,
      10,    0,  112,    2, 0x08 /* Private */,
      11,    0,  113,    2, 0x08 /* Private */,
      12,    0,  114,    2, 0x08 /* Private */,
      13,    0,  115,    2, 0x08 /* Private */,
      14,    0,  116,    2, 0x08 /* Private */,
      15,    0,  117,    2, 0x08 /* Private */,
      16,    0,  118,    2, 0x08 /* Private */,
      17,    0,  119,    2, 0x08 /* Private */,
      18,    0,  120,    2, 0x08 /* Private */,
      19,    0,  121,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendLogout(); break;
        case 1: _t->sendSearch(); break;
        case 2: _t->sendCreate(); break;
        case 3: _t->sendDelete(); break;
        case 4: _t->receiveLogin(); break;
        case 5: _t->receiveSearchDone(); break;
        case 6: _t->receiveCreateDone(); break;
        case 7: _t->receiveDeleteDone(); break;
        case 8: _t->on_logoutBtn_clicked(); break;
        case 9: _t->on_listMeetingsBtn_clicked(); break;
        case 10: _t->on_listSponMeetingBtn_clicked(); break;
        case 11: _t->on_listParMeetingsBtn_clicked(); break;
        case 12: _t->on_listUsersBtn_clicked(); break;
        case 13: _t->on_searchUserBtn_clicked(); break;
        case 14: _t->on_titleMeetingBtn_clicked(); break;
        case 15: _t->on_timeMeetingBtn_clicked(); break;
        case 16: _t->on_createBtn_clicked(); break;
        case 17: _t->on_deleteBtn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendLogout)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendSearch)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendCreate)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::sendDelete)) {
                *result = 3;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::sendLogout()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::sendSearch()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::sendCreate()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainWindow::sendDelete()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
