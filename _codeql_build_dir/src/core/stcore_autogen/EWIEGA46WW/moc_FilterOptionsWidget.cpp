/****************************************************************************
** Meta object code from reading C++ file 'FilterOptionsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/core/FilterOptionsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FilterOptionsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FilterOptionsWidget_t {
    QByteArrayData data[10];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FilterOptionsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FilterOptionsWidget_t qt_meta_stringdata_FilterOptionsWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "FilterOptionsWidget"
QT_MOC_LITERAL(1, 20, 15), // "reloadRequested"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 19), // "invalidateThumbnail"
QT_MOC_LITERAL(4, 57, 6), // "PageId"
QT_MOC_LITERAL(5, 64, 7), // "page_id"
QT_MOC_LITERAL(6, 72, 8), // "PageInfo"
QT_MOC_LITERAL(7, 81, 9), // "page_info"
QT_MOC_LITERAL(8, 91, 23), // "invalidateAllThumbnails"
QT_MOC_LITERAL(9, 115, 8) // "goToPage"

    },
    "FilterOptionsWidget\0reloadRequested\0"
    "\0invalidateThumbnail\0PageId\0page_id\0"
    "PageInfo\0page_info\0invalidateAllThumbnails\0"
    "goToPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FilterOptionsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,
       3,    1,   43,    2, 0x06 /* Public */,
       8,    0,   46,    2, 0x06 /* Public */,
       9,    1,   47,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void FilterOptionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FilterOptionsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->reloadRequested(); break;
        case 1: _t->invalidateThumbnail((*reinterpret_cast< const PageId(*)>(_a[1]))); break;
        case 2: _t->invalidateThumbnail((*reinterpret_cast< const PageInfo(*)>(_a[1]))); break;
        case 3: _t->invalidateAllThumbnails(); break;
        case 4: _t->goToPage((*reinterpret_cast< const PageId(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FilterOptionsWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterOptionsWidget::reloadRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FilterOptionsWidget::*)(PageId const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterOptionsWidget::invalidateThumbnail)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FilterOptionsWidget::*)(PageInfo const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterOptionsWidget::invalidateThumbnail)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FilterOptionsWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterOptionsWidget::invalidateAllThumbnails)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FilterOptionsWidget::*)(PageId const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterOptionsWidget::goToPage)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FilterOptionsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FilterOptionsWidget.data,
    qt_meta_data_FilterOptionsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FilterOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FilterOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FilterOptionsWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FilterOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void FilterOptionsWidget::reloadRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FilterOptionsWidget::invalidateThumbnail(PageId const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FilterOptionsWidget::invalidateThumbnail(PageInfo const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FilterOptionsWidget::invalidateAllThumbnails()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void FilterOptionsWidget::goToPage(PageId const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
