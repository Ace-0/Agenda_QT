/****************************************************************************
** Meta object code from reading C++ file 'createdlg.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Agenda/createdlg.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createdlg.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CreateDlg_t {
    QByteArrayData data[11];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreateDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreateDlg_t qt_meta_stringdata_CreateDlg = {
    {
QT_MOC_LITERAL(0, 0, 9), // "CreateDlg"
QT_MOC_LITERAL(1, 10, 14), // "sendCreateDone"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 14), // "sendDeleteDone"
QT_MOC_LITERAL(4, 41, 13), // "receiveCreate"
QT_MOC_LITERAL(5, 55, 13), // "receiveDelete"
QT_MOC_LITERAL(6, 69, 20), // "on_finishBtn_clicked"
QT_MOC_LITERAL(7, 90, 20), // "on_cancelBtn_clicked"
QT_MOC_LITERAL(8, 111, 17), // "on_addBtn_clicked"
QT_MOC_LITERAL(9, 129, 21), // "on_confirmBtn_clicked"
QT_MOC_LITERAL(10, 151, 20) // "on_deleteBtn_clicked"

    },
    "CreateDlg\0sendCreateDone\0\0sendDeleteDone\0"
    "receiveCreate\0receiveDelete\0"
    "on_finishBtn_clicked\0on_cancelBtn_clicked\0"
    "on_addBtn_clicked\0on_confirmBtn_clicked\0"
    "on_deleteBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
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

       0        // eod
};

void CreateDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CreateDlg *_t = static_cast<CreateDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendCreateDone(); break;
        case 1: _t->sendDeleteDone(); break;
        case 2: _t->receiveCreate(); break;
        case 3: _t->receiveDelete(); break;
        case 4: _t->on_finishBtn_clicked(); break;
        case 5: _t->on_cancelBtn_clicked(); break;
        case 6: _t->on_addBtn_clicked(); break;
        case 7: _t->on_confirmBtn_clicked(); break;
        case 8: _t->on_deleteBtn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CreateDlg::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CreateDlg::sendCreateDone)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CreateDlg::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CreateDlg::sendDeleteDone)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CreateDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CreateDlg.data,
      qt_meta_data_CreateDlg,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CreateDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreateDlg.stringdata0))
        return static_cast<void*>(const_cast< CreateDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int CreateDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void CreateDlg::sendCreateDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CreateDlg::sendDeleteDone()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
