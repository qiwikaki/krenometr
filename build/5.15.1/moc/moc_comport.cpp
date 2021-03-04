/****************************************************************************
** Meta object code from reading C++ file 'comport.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../comport.h"
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
    QByteArrayData data[27];
    char stringdata0[293];
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
QT_MOC_LITERAL(4, 34, 7), // "maxRoll"
QT_MOC_LITERAL(5, 42, 7), // "minRoll"
QT_MOC_LITERAL(6, 50, 14), // "rotationUpdate"
QT_MOC_LITERAL(7, 65, 5), // "angle"
QT_MOC_LITERAL(8, 71, 14), // "maxRollChanged"
QT_MOC_LITERAL(9, 86, 14), // "minRollChanged"
QT_MOC_LITERAL(10, 101, 7), // "testmin"
QT_MOC_LITERAL(11, 109, 23), // "receiveMessageFromUSART"
QT_MOC_LITERAL(12, 133, 17), // "defineMessageType"
QT_MOC_LITERAL(13, 151, 5), // "msgid"
QT_MOC_LITERAL(14, 157, 20), // "handleMessageDorient"
QT_MOC_LITERAL(15, 178, 7), // "setRoll"
QT_MOC_LITERAL(16, 186, 7), // "rollmsg"
QT_MOC_LITERAL(17, 194, 8), // "setPitch"
QT_MOC_LITERAL(18, 203, 8), // "pitchmsg"
QT_MOC_LITERAL(19, 212, 10), // "setMaxroll"
QT_MOC_LITERAL(20, 223, 10), // "maxrollmsg"
QT_MOC_LITERAL(21, 234, 10), // "setMinroll"
QT_MOC_LITERAL(22, 245, 10), // "minrollmsg"
QT_MOC_LITERAL(23, 256, 10), // "settestmin"
QT_MOC_LITERAL(24, 267, 11), // "testmin_msg"
QT_MOC_LITERAL(25, 279, 5), // "MsgId"
QT_MOC_LITERAL(26, 285, 7) // "DORIENT"

    },
    "comport\0rollChanged\0\0pitchChanged\0"
    "maxRoll\0minRoll\0rotationUpdate\0angle\0"
    "maxRollChanged\0minRollChanged\0testmin\0"
    "receiveMessageFromUSART\0defineMessageType\0"
    "msgid\0handleMessageDorient\0setRoll\0"
    "rollmsg\0setPitch\0pitchmsg\0setMaxroll\0"
    "maxrollmsg\0setMinroll\0minrollmsg\0"
    "settestmin\0testmin_msg\0MsgId\0DORIENT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_comport[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       5,  128, // properties
       1,  148, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    0,   96,    2, 0x06 /* Public */,
       5,    0,   97,    2, 0x06 /* Public */,
       6,    1,   98,    2, 0x06 /* Public */,
       8,    1,  101,    2, 0x06 /* Public */,
       9,    1,  104,    2, 0x06 /* Public */,
      10,    0,  107,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,  108,    2, 0x08 /* Private */,
      12,    1,  109,    2, 0x08 /* Private */,
      14,    0,  112,    2, 0x08 /* Private */,
      15,    1,  113,    2, 0x08 /* Private */,
      17,    1,  116,    2, 0x08 /* Private */,
      19,    1,  119,    2, 0x08 /* Private */,
      21,    1,  122,    2, 0x08 /* Private */,
      23,    1,  125,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::Double,   24,

 // properties: name, type, flags
      16, QMetaType::QString, 0x00495003,
      18, QMetaType::QString, 0x00495003,
      20, QMetaType::QString, 0x00495003,
      22, QMetaType::QString, 0x00495003,
      24, QMetaType::Double, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       7,

 // enums: name, alias, flags, count, data
      25,   25, 0x0,    1,  153,

 // enum data: key, value
      26, uint(comport::DORIENT),

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
        case 2: _t->maxRoll(); break;
        case 3: _t->minRoll(); break;
        case 4: _t->rotationUpdate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->maxRollChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->minRollChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->testmin(); break;
        case 8: _t->receiveMessageFromUSART(); break;
        case 9: _t->defineMessageType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->handleMessageDorient(); break;
        case 11: _t->setRoll((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->setPitch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->setMaxroll((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->setMinroll((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->settestmin((*reinterpret_cast< const double(*)>(_a[1]))); break;
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
            using _t = void (comport::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&comport::maxRoll)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (comport::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&comport::minRoll)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (comport::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&comport::rotationUpdate)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (comport::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&comport::maxRollChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (comport::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&comport::minRollChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (comport::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&comport::testmin)) {
                *result = 7;
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
        case 2: *reinterpret_cast< QString*>(_v) = _t->maxrollmsg(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->minrollmsg(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->testmin_msg(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<comport *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRoll(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPitch(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setMaxroll(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setMinroll(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->settestmin(*reinterpret_cast< double*>(_v)); break;
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
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
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
void comport::maxRoll()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void comport::minRoll()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void comport::rotationUpdate(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void comport::maxRollChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void comport::minRollChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void comport::testmin()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
