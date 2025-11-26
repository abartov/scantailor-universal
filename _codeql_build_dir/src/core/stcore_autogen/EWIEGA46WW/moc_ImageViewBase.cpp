/****************************************************************************
** Meta object code from reading C++ file 'ImageViewBase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/core/ImageViewBase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImageViewBase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ImageViewBase_t {
    QByteArrayData data[8];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageViewBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageViewBase_t qt_meta_stringdata_ImageViewBase = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ImageViewBase"
QT_MOC_LITERAL(1, 14, 25), // "copyZoneToPagesDlgRequest"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4), // "zone"
QT_MOC_LITERAL(4, 46, 29), // "deleteZoneFromPagesDlgRequest"
QT_MOC_LITERAL(5, 76, 25), // "initiateBuildingHqVersion"
QT_MOC_LITERAL(6, 102, 16), // "updateScrollBars"
QT_MOC_LITERAL(7, 119, 17) // "reactToScrollBars"

    },
    "ImageViewBase\0copyZoneToPagesDlgRequest\0"
    "\0zone\0deleteZoneFromPagesDlgRequest\0"
    "initiateBuildingHqVersion\0updateScrollBars\0"
    "reactToScrollBars"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageViewBase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   45,    2, 0x08 /* Private */,
       6,    0,   46,    2, 0x08 /* Private */,
       7,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::VoidStar,    3,
    QMetaType::Void, QMetaType::VoidStar,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ImageViewBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImageViewBase *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->copyZoneToPagesDlgRequest((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 1: _t->deleteZoneFromPagesDlgRequest((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 2: _t->initiateBuildingHqVersion(); break;
        case 3: _t->updateScrollBars(); break;
        case 4: _t->reactToScrollBars(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ImageViewBase::*)(void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageViewBase::copyZoneToPagesDlgRequest)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ImageViewBase::*)(void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageViewBase::deleteZoneFromPagesDlgRequest)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ImageViewBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractScrollArea::staticMetaObject>(),
    qt_meta_stringdata_ImageViewBase.data,
    qt_meta_data_ImageViewBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ImageViewBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageViewBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ImageViewBase.stringdata0))
        return static_cast<void*>(this);
    return QAbstractScrollArea::qt_metacast(_clname);
}

int ImageViewBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
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
void ImageViewBase::copyZoneToPagesDlgRequest(void * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ImageViewBase::deleteZoneFromPagesDlgRequest(void * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
