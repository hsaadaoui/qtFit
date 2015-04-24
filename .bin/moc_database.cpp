/****************************************************************************
** Meta object code from reading C++ file 'database.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/database/database.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'database.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Database_t {
    QByteArrayData data[12];
    char stringdata[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Database_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Database_t qt_meta_stringdata_Database = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Database"
QT_MOC_LITERAL(1, 9, 38), // "on_comboBox_tables_currentInd..."
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 8), // "argument"
QT_MOC_LITERAL(4, 58, 29), // "on_pushButton_execute_clicked"
QT_MOC_LITERAL(5, 88, 25), // "on_pushButton_add_clicked"
QT_MOC_LITERAL(6, 114, 28), // "on_pushButton_delete_clicked"
QT_MOC_LITERAL(7, 143, 26), // "on_pushButton_save_clicked"
QT_MOC_LITERAL(8, 170, 26), // "on_pushButton_open_clicked"
QT_MOC_LITERAL(9, 197, 28), // "on_comboBox_browsedb_clicked"
QT_MOC_LITERAL(10, 226, 34), // "on_comboBox_db_currentIndexCh..."
QT_MOC_LITERAL(11, 261, 4) // "arg1"

    },
    "Database\0on_comboBox_tables_currentIndexChanged\0"
    "\0argument\0on_pushButton_execute_clicked\0"
    "on_pushButton_add_clicked\0"
    "on_pushButton_delete_clicked\0"
    "on_pushButton_save_clicked\0"
    "on_pushButton_open_clicked\0"
    "on_comboBox_browsedb_clicked\0"
    "on_comboBox_db_currentIndexChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Database[] = {

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
       1,    1,   54,    2, 0x08 /* Private */,
       4,    0,   57,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void Database::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Database *_t = static_cast<Database *>(_o);
        switch (_id) {
        case 0: _t->on_comboBox_tables_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_execute_clicked(); break;
        case 2: _t->on_pushButton_add_clicked(); break;
        case 3: _t->on_pushButton_delete_clicked(); break;
        case 4: _t->on_pushButton_save_clicked(); break;
        case 5: _t->on_pushButton_open_clicked(); break;
        case 6: _t->on_comboBox_browsedb_clicked(); break;
        case 7: _t->on_comboBox_db_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Database::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Database.data,
      qt_meta_data_Database,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Database::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Database::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Database.stringdata))
        return static_cast<void*>(const_cast< Database*>(this));
    return QWidget::qt_metacast(_clname);
}

int Database::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
