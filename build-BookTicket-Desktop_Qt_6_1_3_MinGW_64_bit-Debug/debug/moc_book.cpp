/****************************************************************************
** Meta object code from reading C++ file 'book.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../Project/BookTicket/book.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'book.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_book_t {
    const uint offsetsAndSize[12];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_book_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_book_t qt_meta_stringdata_book = {
    {
QT_MOC_LITERAL(0, 4), // "book"
QT_MOC_LITERAL(5, 8), // "mysignal"
QT_MOC_LITERAL(14, 0), // ""
QT_MOC_LITERAL(15, 9), // "mysignal2"
QT_MOC_LITERAL(25, 9), // "mysignal4"
QT_MOC_LITERAL(35, 18) // "on_btnBook_clicked"

    },
    "book\0mysignal\0\0mysignal2\0mysignal4\0"
    "on_btnBook_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_book[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    0 /* Public */,
       3,    0,   39,    2, 0x06,    1 /* Public */,
       4,    0,   40,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   41,    2, 0x08,    3 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void book::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<book *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mysignal(); break;
        case 1: _t->mysignal2(); break;
        case 2: _t->mysignal4(); break;
        case 3: _t->on_btnBook_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (book::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&book::mysignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (book::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&book::mysignal2)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (book::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&book::mysignal4)) {
                *result = 2;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject book::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_book.offsetsAndSize,
    qt_meta_data_book,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_book_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *book::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *book::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_book.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int book::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void book::mysignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void book::mysignal2()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void book::mysignal4()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
