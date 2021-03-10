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
    QByteArrayData data[46];
    char stringdata0[519];
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
QT_MOC_LITERAL(6, 50, 11), // "maxPeakText"
QT_MOC_LITERAL(7, 62, 11), // "minPeakText"
QT_MOC_LITERAL(8, 74, 13), // "periodChanged"
QT_MOC_LITERAL(9, 88, 14), // "rotationUpdate"
QT_MOC_LITERAL(10, 103, 5), // "angle"
QT_MOC_LITERAL(11, 109, 14), // "maxRollChanged"
QT_MOC_LITERAL(12, 124, 14), // "minRollChanged"
QT_MOC_LITERAL(13, 139, 7), // "testmin"
QT_MOC_LITERAL(14, 147, 7), // "testmax"
QT_MOC_LITERAL(15, 155, 8), // "peak_min"
QT_MOC_LITERAL(16, 164, 8), // "peak_max"
QT_MOC_LITERAL(17, 173, 23), // "receiveMessageFromUSART"
QT_MOC_LITERAL(18, 197, 17), // "defineMessageType"
QT_MOC_LITERAL(19, 215, 5), // "msgid"
QT_MOC_LITERAL(20, 221, 20), // "handleMessageDorient"
QT_MOC_LITERAL(21, 242, 7), // "setRoll"
QT_MOC_LITERAL(22, 250, 7), // "rollmsg"
QT_MOC_LITERAL(23, 258, 8), // "setPitch"
QT_MOC_LITERAL(24, 267, 8), // "pitchmsg"
QT_MOC_LITERAL(25, 276, 10), // "setMaxroll"
QT_MOC_LITERAL(26, 287, 10), // "maxrollmsg"
QT_MOC_LITERAL(27, 298, 10), // "setMinroll"
QT_MOC_LITERAL(28, 309, 10), // "minrollmsg"
QT_MOC_LITERAL(29, 320, 14), // "setPeakMaxText"
QT_MOC_LITERAL(30, 335, 14), // "peakmaxmsgtext"
QT_MOC_LITERAL(31, 350, 14), // "setPeakMinText"
QT_MOC_LITERAL(32, 365, 14), // "peakminmsgtext"
QT_MOC_LITERAL(33, 380, 9), // "setPeriod"
QT_MOC_LITERAL(34, 390, 9), // "periodmsg"
QT_MOC_LITERAL(35, 400, 10), // "settestmin"
QT_MOC_LITERAL(36, 411, 11), // "testmin_msg"
QT_MOC_LITERAL(37, 423, 10), // "settestmax"
QT_MOC_LITERAL(38, 434, 10), // "setPeakMin"
QT_MOC_LITERAL(39, 445, 12), // "peak_min_msg"
QT_MOC_LITERAL(40, 458, 10), // "setPeakMax"
QT_MOC_LITERAL(41, 469, 12), // "peak_max_msg"
QT_MOC_LITERAL(42, 482, 10), // "updateTime"
QT_MOC_LITERAL(43, 493, 11), // "testmax_msg"
QT_MOC_LITERAL(44, 505, 5), // "MsgId"
QT_MOC_LITERAL(45, 511, 7) // "DORIENT"

    },
    "comport\0rollChanged\0\0pitchChanged\0"
    "maxRoll\0minRoll\0maxPeakText\0minPeakText\0"
    "periodChanged\0rotationUpdate\0angle\0"
    "maxRollChanged\0minRollChanged\0testmin\0"
    "testmax\0peak_min\0peak_max\0"
    "receiveMessageFromUSART\0defineMessageType\0"
    "msgid\0handleMessageDorient\0setRoll\0"
    "rollmsg\0setPitch\0pitchmsg\0setMaxroll\0"
    "maxrollmsg\0setMinroll\0minrollmsg\0"
    "setPeakMaxText\0peakmaxmsgtext\0"
    "setPeakMinText\0peakminmsgtext\0setPeriod\0"
    "periodmsg\0settestmin\0testmin_msg\0"
    "settestmax\0setPeakMin\0peak_min_msg\0"
    "setPeakMax\0peak_max_msg\0updateTime\0"
    "testmax_msg\0MsgId\0DORIENT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_comport[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
      11,  218, // properties
       1,  262, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  159,    2, 0x06 /* Public */,
       3,    0,  160,    2, 0x06 /* Public */,
       4,    0,  161,    2, 0x06 /* Public */,
       5,    0,  162,    2, 0x06 /* Public */,
       6,    0,  163,    2, 0x06 /* Public */,
       7,    0,  164,    2, 0x06 /* Public */,
       8,    0,  165,    2, 0x06 /* Public */,
       9,    1,  166,    2, 0x06 /* Public */,
      11,    1,  169,    2, 0x06 /* Public */,
      12,    1,  172,    2, 0x06 /* Public */,
      13,    0,  175,    2, 0x06 /* Public */,
      14,    0,  176,    2, 0x06 /* Public */,
      15,    0,  177,    2, 0x06 /* Public */,
      16,    0,  178,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,  179,    2, 0x08 /* Private */,
      18,    1,  180,    2, 0x08 /* Private */,
      20,    0,  183,    2, 0x08 /* Private */,
      21,    1,  184,    2, 0x08 /* Private */,
      23,    1,  187,    2, 0x08 /* Private */,
      25,    1,  190,    2, 0x08 /* Private */,
      27,    1,  193,    2, 0x08 /* Private */,
      29,    1,  196,    2, 0x08 /* Private */,
      31,    1,  199,    2, 0x08 /* Private */,
      33,    1,  202,    2, 0x08 /* Private */,
      35,    1,  205,    2, 0x08 /* Private */,
      37,    1,  208,    2, 0x08 /* Private */,
      38,    1,  211,    2, 0x08 /* Private */,
      40,    1,  214,    2, 0x08 /* Private */,
      42,    0,  217,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::Double,   36,
    QMetaType::Void, QMetaType::Double,   36,
    QMetaType::Void, QMetaType::Double,   39,
    QMetaType::Void, QMetaType::Double,   41,
    QMetaType::Void,

 // properties: name, type, flags
      22, QMetaType::QString, 0x00495003,
      24, QMetaType::QString, 0x00495003,
      26, QMetaType::QString, 0x00495003,
      28, QMetaType::QString, 0x00495003,
      30, QMetaType::QString, 0x00495003,
      32, QMetaType::QString, 0x00495003,
      34, QMetaType::QString, 0x00495003,
      36, QMetaType::Double, 0x00495003,
      43, QMetaType::Double, 0x00495003,
      39, QMetaType::Double, 0x00495003,
      41, QMetaType::Double, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
      10,
      11,
      12,
      13,

 // enums: name, alias, flags, count, data
      44,   44, 0x0,    1,  267,

 // enum data: key, value
      45, uint(comport::DORIENT),

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
        case 4: _t->maxPeakText(); break;
        case 5: _t->minPeakText(); break;
        case 6: _t->periodChanged(); break;
        case 7: _t->rotationUpdate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->maxRollChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->minRollChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->testmin(); break;
        case 11: _t->testmax(); break;
        case 12: _t->peak_min(); break;
        case 13: _t->peak_max(); break;
        case 14: _t->receiveMessageFromUSART(); break;
        case 15: _t->defineMessageType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->handleMessageDorient(); break;
        case 17: _t->setRoll((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->setPitch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->setMaxroll((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->setMinroll((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->setPeakMaxText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->setPeakMinText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->setPeriod((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->settestmin((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 25: _t->settestmax((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 26: _t->setPeakMin((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 27: _t->setPeakMax((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 28: _t->updateTime(); break;
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
            using _t = void (comport::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&comport::maxPeakText)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (comport::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&comport::minPeakText)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (comport::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&comport::periodChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (comport::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&comport::rotationUpdate)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (comport::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&comport::maxRollChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (comport::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&comport::minRollChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (comport::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&comport::testmin)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (comport::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&comport::testmax)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (comport::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&comport::peak_min)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (comport::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&comport::peak_max)) {
                *result = 13;
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
        case 4: *reinterpret_cast< QString*>(_v) = _t->peakmaxmsgtext(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->peakminmsgtext(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->periodmsg(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->testmin_msg(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->testmax_msg(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->peak_min_msg(); break;
        case 10: *reinterpret_cast< double*>(_v) = _t->peak_max_msg(); break;
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
        case 4: _t->setPeakMaxText(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setPeakMinText(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setPeriod(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->settestmin(*reinterpret_cast< double*>(_v)); break;
        case 8: _t->settestmax(*reinterpret_cast< double*>(_v)); break;
        case 9: _t->setPeakMin(*reinterpret_cast< double*>(_v)); break;
        case 10: _t->setPeakMax(*reinterpret_cast< double*>(_v)); break;
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
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 29;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
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
void comport::maxPeakText()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void comport::minPeakText()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void comport::periodChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void comport::rotationUpdate(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void comport::maxRollChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void comport::minRollChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void comport::testmin()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void comport::testmax()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void comport::peak_min()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void comport::peak_max()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
