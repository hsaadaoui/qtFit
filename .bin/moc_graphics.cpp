/****************************************************************************
** Meta object code from reading C++ file 'graphics.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/graphics/graphics.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphics.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Graphics_t {
    QByteArrayData data[14];
    char stringdata[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Graphics_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Graphics_t qt_meta_stringdata_Graphics = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Graphics"
QT_MOC_LITERAL(1, 9, 30), // "on_tabWidget_tabCloseRequested"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 5), // "index"
QT_MOC_LITERAL(4, 47, 28), // "on_pushButton_export_clicked"
QT_MOC_LITERAL(5, 76, 27), // "on_pushButton_clear_clicked"
QT_MOC_LITERAL(6, 104, 27), // "on_pushButton_purge_clicked"
QT_MOC_LITERAL(7, 132, 26), // "on_pushButton_next_clicked"
QT_MOC_LITERAL(8, 159, 15), // "mouseMoveSignal"
QT_MOC_LITERAL(9, 175, 12), // "QMouseEvent*"
QT_MOC_LITERAL(10, 188, 5), // "event"
QT_MOC_LITERAL(11, 194, 16), // "mousePressSignal"
QT_MOC_LITERAL(12, 211, 18), // "mouseReleaseSignal"
QT_MOC_LITERAL(13, 230, 12) // "beforeReplot"

    },
    "Graphics\0on_tabWidget_tabCloseRequested\0"
    "\0index\0on_pushButton_export_clicked\0"
    "on_pushButton_clear_clicked\0"
    "on_pushButton_purge_clicked\0"
    "on_pushButton_next_clicked\0mouseMoveSignal\0"
    "QMouseEvent*\0event\0mousePressSignal\0"
    "mouseReleaseSignal\0beforeReplot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Graphics[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    0,   62,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    1,   66,    2, 0x08 /* Private */,
      11,    1,   69,    2, 0x08 /* Private */,
      12,    1,   72,    2, 0x08 /* Private */,
      13,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

void Graphics::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Graphics *_t = static_cast<Graphics *>(_o);
        switch (_id) {
        case 0: _t->on_tabWidget_tabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_export_clicked(); break;
        case 2: _t->on_pushButton_clear_clicked(); break;
        case 3: _t->on_pushButton_purge_clicked(); break;
        case 4: _t->on_pushButton_next_clicked(); break;
        case 5: _t->mouseMoveSignal((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 6: _t->mousePressSignal((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 7: _t->mouseReleaseSignal((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 8: _t->beforeReplot(); break;
        default: ;
        }
    }
}

const QMetaObject Graphics::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Graphics.data,
      qt_meta_data_Graphics,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Graphics::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Graphics::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Graphics.stringdata))
        return static_cast<void*>(const_cast< Graphics*>(this));
    return QWidget::qt_metacast(_clname);
}

int Graphics::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
