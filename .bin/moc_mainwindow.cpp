/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Mainwindow_t {
    QByteArrayData data[9];
    char stringdata[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mainwindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mainwindow_t qt_meta_stringdata_Mainwindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Mainwindow"
QT_MOC_LITERAL(1, 11, 11), // "Menu_newgui"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 16), // "Menu_changeStyle"
QT_MOC_LITERAL(4, 41, 16), // "Menu_changeColor"
QT_MOC_LITERAL(5, 58, 17), // "Menu_combinePlots"
QT_MOC_LITERAL(6, 76, 10), // "Menu_about"
QT_MOC_LITERAL(7, 87, 9), // "Menu_help"
QT_MOC_LITERAL(8, 97, 13) // "Menu_tutorial"

    },
    "Mainwindow\0Menu_newgui\0\0Menu_changeStyle\0"
    "Menu_changeColor\0Menu_combinePlots\0"
    "Menu_about\0Menu_help\0Menu_tutorial"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mainwindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    1,   50,    2, 0x0a /* Public */,
       4,    1,   53,    2, 0x0a /* Public */,
       5,    1,   56,    2, 0x0a /* Public */,
       6,    0,   59,    2, 0x0a /* Public */,
       7,    0,   60,    2, 0x0a /* Public */,
       8,    0,   61,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Mainwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mainwindow *_t = static_cast<Mainwindow *>(_o);
        switch (_id) {
        case 0: _t->Menu_newgui(); break;
        case 1: _t->Menu_changeStyle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->Menu_changeColor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->Menu_combinePlots((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->Menu_about(); break;
        case 5: _t->Menu_help(); break;
        case 6: _t->Menu_tutorial(); break;
        default: ;
        }
    }
}

const QMetaObject Mainwindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Mainwindow.data,
      qt_meta_data_Mainwindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mainwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mainwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mainwindow.stringdata))
        return static_cast<void*>(const_cast< Mainwindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Mainwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
