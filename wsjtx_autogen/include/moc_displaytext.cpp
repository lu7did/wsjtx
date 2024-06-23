/****************************************************************************
** Meta object code from reading C++ file 'displaytext.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "widgets/displaytext.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'displaytext.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DisplayText_t {
    QByteArrayData data[16];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DisplayText_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DisplayText_t qt_meta_stringdata_DisplayText = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DisplayText"
QT_MOC_LITERAL(1, 12, 14), // "selectCallsign"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(4, 50, 9), // "leftClick"
QT_MOC_LITERAL(5, 60, 6), // "erased"
QT_MOC_LITERAL(6, 67, 10), // "appendText"
QT_MOC_LITERAL(7, 78, 4), // "text"
QT_MOC_LITERAL(8, 83, 2), // "bg"
QT_MOC_LITERAL(9, 86, 2), // "fg"
QT_MOC_LITERAL(10, 89, 5), // "call1"
QT_MOC_LITERAL(11, 95, 5), // "call2"
QT_MOC_LITERAL(12, 101, 5), // "erase"
QT_MOC_LITERAL(13, 107, 18), // "highlight_callsign"
QT_MOC_LITERAL(14, 126, 8), // "callsign"
QT_MOC_LITERAL(15, 135, 16) // "last_period_only"

    },
    "DisplayText\0selectCallsign\0\0"
    "Qt::KeyboardModifiers\0leftClick\0erased\0"
    "appendText\0text\0bg\0fg\0call1\0call2\0"
    "erase\0highlight_callsign\0callsign\0"
    "last_period_only"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DisplayText[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       5,    0,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    5,   71,    2, 0x0a /* Public */,
       6,    4,   82,    2, 0x2a /* Public | MethodCloned */,
       6,    3,   91,    2, 0x2a /* Public | MethodCloned */,
       6,    2,   98,    2, 0x2a /* Public | MethodCloned */,
       6,    1,  103,    2, 0x2a /* Public | MethodCloned */,
      12,    0,  106,    2, 0x0a /* Public */,
      13,    4,  107,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QColor, QMetaType::QColor, QMetaType::QString, QMetaType::QString,    7,    8,    9,   10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QColor, QMetaType::QColor, QMetaType::QString,    7,    8,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QColor, QMetaType::QColor,    7,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QColor,    7,    8,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QColor, QMetaType::QColor, QMetaType::Bool,   14,    8,    9,   15,

       0        // eod
};

void DisplayText::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DisplayText *_t = static_cast<DisplayText *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectCallsign((*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[1]))); break;
        case 1: _t->leftClick((*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[1]))); break;
        case 2: _t->erased(); break;
        case 3: _t->appendText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 4: _t->appendText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 5: _t->appendText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3]))); break;
        case 6: _t->appendText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 7: _t->appendText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->erase(); break;
        case 9: _t->highlight_callsign((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DisplayText::*)(Qt::KeyboardModifiers );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DisplayText::selectCallsign)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DisplayText::*)(Qt::KeyboardModifiers );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DisplayText::leftClick)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DisplayText::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DisplayText::erased)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DisplayText::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_DisplayText.data,
      qt_meta_data_DisplayText,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DisplayText::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DisplayText::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DisplayText.stringdata0))
        return static_cast<void*>(this);
    return QTextEdit::qt_metacast(_clname);
}

int DisplayText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void DisplayText::selectCallsign(Qt::KeyboardModifiers _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DisplayText::leftClick(Qt::KeyboardModifiers _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DisplayText::erased()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
