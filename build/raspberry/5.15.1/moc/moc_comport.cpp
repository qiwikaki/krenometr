/****************************************************************************
** Meta object code from reading C++ file 'comport.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../comport.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'comport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_comport_t {
    QByteArrayData data[16];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_comport_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_comport_t qt_meta_stringdata_comport = {
    {
QT_MOC_LITERAL(0, 0, 7), // "comport"
QT_MOC_LITERAL(1, 8, 11), // "rollChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 12), // "pitchChanged"
QT_MOC_LITERAL(4, 34, 14), // "rotationUpdate"
QT_MOC_LITERAL(5, 49, 5), // "angle"
QT_MOC_LITERAL(6, 55, 23), // "receiveMessageFromUSART"
QT_MOC_LITERAL(7, 79, 17), // "defineMessageType"
QT_MOC_LITERAL(8, 97, 5), // "msgid"
QT_MOC_LITERAL(9, 103, 20), // "handleMessageDorient"
QT_MOC_LITERAL(10, 124, 7), // "setRoll"
QT_MOC_LITERAL(11, 132, 7), // "rollmsg"
QT_MOC_LITERAL(12, 140, 8), // "setPitch"
QT_MOC_LITERAL(13, 149, 8), // "pitchmsg"
QT_MOC_LITERAL(14, 158, 5), // "MsgId"
QT_MOC_LITERAL(15, 164, 7) // "DORIENT"

    },
    "comport\0rollChanged\0\0pitchChanged\0"
    "rotationUpdate\0angle\0receiveMessageFromUSART\0"
    "defineMessageType\0msgid\0handleMessageDorient\0"
    "setRoll\0rollmsg\0setPitch\0pitchmsg\0"
    "MsgId\0DORIENT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_comport[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   70, // properties
       1,   78, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    1,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   59,    2, 0x08 /* Private */,
       7,    1,   60,    2, 0x08 /* Private */,
       9,    0,   63,    2, 0x08 /* Private */,
      10,    1,   64,    2, 0x08 /* Private */,
      12,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,

 // properties: name, type, flags
      11, QMetaType::QString, 0x00495003,
      13, QMetaType::QString, 0x00495003,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, alias, flags, count, data
      14,   14, 0x0,    1,   83,

 // enum data: key, value
      15, uint(comport::DORIENT),

       0        // eod
};

void comport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<comport *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rollChanged(); break;
        case 1: _t->pitchChanged(); break;
        case 2: _t->rotationUpdate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->receiveMessageFromUSART(); break;
        case 4: _t->defineMessageType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->handleMessageDorient(); break;
        case 6: _t->setRoll((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setPitch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (comport::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&comport::rollChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (comport::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&comport::pitchChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (comport::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&comport::rotationUpdate)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<comport *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->rollmsg(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->pitchmsg(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<comport *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRoll(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPitch(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject comport::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_comport.data,
    qt_meta_data_comport,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *comport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *comport::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_comport.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int comport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void comport::rollChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void comport::pitchChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void comport::rotationUpdate(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
