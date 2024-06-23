/****************************************************************************
** Meta object code from reading C++ file 'pskreporterwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "widgets/pskreporterwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pskreporterwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PSKReporterWidget_t {
    QByteArrayData data[16];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PSKReporterWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PSKReporterWidget_t qt_meta_stringdata_PSKReporterWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PSKReporterWidget"
QT_MOC_LITERAL(1, 18, 7), // "clicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "callsing"
QT_MOC_LITERAL(4, 36, 4), // "band"
QT_MOC_LITERAL(5, 41, 7), // "refresh"
QT_MOC_LITERAL(6, 49, 4), // "init"
QT_MOC_LITERAL(7, 54, 11), // "updateTable"
QT_MOC_LITERAL(8, 66, 4), // "data"
QT_MOC_LITERAL(9, 71, 14), // "scrollToBottom"
QT_MOC_LITERAL(10, 86, 15), // "responseHandler"
QT_MOC_LITERAL(11, 102, 14), // "QNetworkReply*"
QT_MOC_LITERAL(12, 117, 5), // "reply"
QT_MOC_LITERAL(13, 123, 29), // "on_pskTable_cellDoubleClicked"
QT_MOC_LITERAL(14, 153, 3), // "row"
QT_MOC_LITERAL(15, 157, 6) // "column"

    },
    "PSKReporterWidget\0clicked\0\0callsing\0"
    "band\0refresh\0init\0updateTable\0data\0"
    "scrollToBottom\0responseHandler\0"
    "QNetworkReply*\0reply\0on_pskTable_cellDoubleClicked\0"
    "row\0column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PSKReporterWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   54,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x2a /* Public | MethodCloned */,
       7,    1,   58,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,
      10,    1,   62,    2, 0x08 /* Private */,
      13,    2,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,

       0        // eod
};

void PSKReporterWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PSKReporterWidget *_t = static_cast<PSKReporterWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->refresh((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->refresh(); break;
        case 3: _t->updateTable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->scrollToBottom(); break;
        case 5: _t->responseHandler((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->on_pskTable_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PSKReporterWidget::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PSKReporterWidget::clicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PSKReporterWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PSKReporterWidget.data,
      qt_meta_data_PSKReporterWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PSKReporterWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PSKReporterWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PSKReporterWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PSKReporterWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void PSKReporterWidget::clicked(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
