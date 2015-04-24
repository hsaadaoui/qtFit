/****************************************************************************
** Meta object code from reading C++ file 'results.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/results/results.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'results.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Results_t {
    QByteArrayData data[12];
    char stringdata[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Results_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Results_t qt_meta_stringdata_Results = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Results"
QT_MOC_LITERAL(1, 8, 34), // "on_lineEdit_filename_returnPr..."
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 28), // "on_pushButton_browse_clicked"
QT_MOC_LITERAL(4, 73, 26), // "on_pushButton_plot_clicked"
QT_MOC_LITERAL(5, 100, 27), // "on_pushButton_clear_clicked"
QT_MOC_LITERAL(6, 128, 30), // "on_tabWidget_tabCloseRequested"
QT_MOC_LITERAL(7, 159, 5), // "index"
QT_MOC_LITERAL(8, 165, 27), // "on_pushButton_purge_clicked"
QT_MOC_LITERAL(9, 193, 26), // "on_pushButton_next_clicked"
QT_MOC_LITERAL(10, 220, 32), // "on_lineEdit_filename_textChanged"
QT_MOC_LITERAL(11, 253, 4) // "arg1"

    },
    "Results\0on_lineEdit_filename_returnPressed\0"
    "\0on_pushButton_browse_clicked\0"
    "on_pushButton_plot_clicked\0"
    "on_pushButton_clear_clicked\0"
    "on_tabWidget_tabCloseRequested\0index\0"
    "on_pushButton_purge_clicked\0"
    "on_pushButton_next_clicked\0"
    "on_lineEdit_filename_textChanged\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Results[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void Results::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Results *_t = static_cast<Results *>(_o);
        switch (_id) {
        case 0: _t->on_lineEdit_filename_returnPressed(); break;
        case 1: _t->on_pushButton_browse_clicked(); break;
        case 2: _t->on_pushButton_plot_clicked(); break;
        case 3: _t->on_pushButton_clear_clicked(); break;
        case 4: _t->on_tabWidget_tabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_purge_clicked(); break;
        case 6: _t->on_pushButton_next_clicked(); break;
        case 7: _t->on_lineEdit_filename_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Results::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Results.data,
      qt_meta_data_Results,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Results::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Results::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Results.stringdata))
        return static_cast<void*>(const_cast< Results*>(this));
    return QWidget::qt_metacast(_clname);
}

int Results::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
