/****************************************************************************
** Meta object code from reading C++ file 'loginwindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Agenda/loginwindow.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginwindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoginWindow_t {
    QByteArrayData data[12];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginWindow_t qt_meta_stringdata_LoginWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LoginWindow"
QT_MOC_LITERAL(1, 12, 9), // "sendLogin"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "sendRegister"
QT_MOC_LITERAL(4, 36, 18), // "on_quitBtn_clicked"
QT_MOC_LITERAL(5, 55, 19), // "on_loginBtn_clicked"
QT_MOC_LITERAL(6, 75, 22), // "on_registerBtn_clicked"
QT_MOC_LITERAL(7, 98, 10), // "closeEvent"
QT_MOC_LITERAL(8, 109, 12), // "QCloseEvent*"
QT_MOC_LITERAL(9, 122, 5), // "event"
QT_MOC_LITERAL(10, 128, 13), // "receiveLogout"
QT_MOC_LITERAL(11, 142, 19) // "receiveRegisterDone"

    },
    "LoginWindow\0sendLogin\0\0sendRegister\0"
    "on_quitBtn_clicked\0on_loginBtn_clicked\0"
    "on_registerBtn_clicked\0closeEvent\0"
    "QCloseEvent*\0event\0receiveLogout\0"
    "receiveRegisterDone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
      10,    0,   62,    2, 0x08 /* Private */,
      11,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LoginWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoginWindow *_t = static_cast<LoginWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendLogin(); break;
        case 1: _t->sendRegister(); break;
        case 2: _t->on_quitBtn_clicked(); break;
        case 3: _t->on_loginBtn_clicked(); break;
        case 4: _t->on_registerBtn_clicked(); break;
        case 5: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 6: _t->receiveLogout(); break;
        case 7: _t->receiveRegisterDone(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LoginWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginWindow::sendLogin)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LoginWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginWindow::sendRegister)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject LoginWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_LoginWindow.data,
      qt_meta_data_LoginWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LoginWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoginWindow.stringdata0))
        return static_cast<void*>(const_cast< LoginWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int LoginWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void LoginWindow::sendLogin()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LoginWindow::sendRegister()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
