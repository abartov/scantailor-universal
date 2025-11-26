/****************************************************************************
** Meta object code from reading C++ file 'ImageView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/core/filters/page_layout/ImageView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImageView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_page_layout__ImageView_t {
    QByteArrayData data[17];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_page_layout__ImageView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_page_layout__ImageView_t qt_meta_stringdata_page_layout__ImageView = {
    {
QT_MOC_LITERAL(0, 0, 22), // "page_layout::ImageView"
QT_MOC_LITERAL(1, 23, 19), // "invalidateThumbnail"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 6), // "PageId"
QT_MOC_LITERAL(4, 51, 7), // "page_id"
QT_MOC_LITERAL(5, 59, 23), // "invalidateAllThumbnails"
QT_MOC_LITERAL(6, 83, 17), // "marginsSetLocally"
QT_MOC_LITERAL(7, 101, 7), // "Margins"
QT_MOC_LITERAL(8, 109, 10), // "margins_mm"
QT_MOC_LITERAL(9, 120, 20), // "marginsSetExternally"
QT_MOC_LITERAL(10, 141, 20), // "leftRightLinkToggled"
QT_MOC_LITERAL(11, 162, 6), // "linked"
QT_MOC_LITERAL(12, 169, 20), // "topBottomLinkToggled"
QT_MOC_LITERAL(13, 190, 16), // "alignmentChanged"
QT_MOC_LITERAL(14, 207, 9), // "Alignment"
QT_MOC_LITERAL(15, 217, 9), // "alignment"
QT_MOC_LITERAL(16, 227, 24) // "aggregateHardSizeChanged"

    },
    "page_layout::ImageView\0invalidateThumbnail\0"
    "\0PageId\0page_id\0invalidateAllThumbnails\0"
    "marginsSetLocally\0Margins\0margins_mm\0"
    "marginsSetExternally\0leftRightLinkToggled\0"
    "linked\0topBottomLinkToggled\0"
    "alignmentChanged\0Alignment\0alignment\0"
    "aggregateHardSizeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_page_layout__ImageView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    1,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   61,    2, 0x0a /* Public */,
      10,    1,   64,    2, 0x0a /* Public */,
      12,    1,   67,    2, 0x0a /* Public */,
      13,    1,   70,    2, 0x0a /* Public */,
      16,    0,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,

       0        // eod
};

void page_layout::ImageView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImageView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->invalidateThumbnail((*reinterpret_cast< const PageId(*)>(_a[1]))); break;
        case 1: _t->invalidateAllThumbnails(); break;
        case 2: _t->marginsSetLocally((*reinterpret_cast< const Margins(*)>(_a[1]))); break;
        case 3: _t->marginsSetExternally((*reinterpret_cast< const Margins(*)>(_a[1]))); break;
        case 4: _t->leftRightLinkToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->topBottomLinkToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->alignmentChanged((*reinterpret_cast< const Alignment(*)>(_a[1]))); break;
        case 7: _t->aggregateHardSizeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ImageView::*)(PageId const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageView::invalidateThumbnail)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ImageView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageView::invalidateAllThumbnails)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ImageView::*)(Margins const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageView::marginsSetLocally)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject page_layout::ImageView::staticMetaObject = { {
    QMetaObject::SuperData::link<ImageViewBase::staticMetaObject>(),
    qt_meta_stringdata_page_layout__ImageView.data,
    qt_meta_data_page_layout__ImageView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *page_layout::ImageView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *page_layout::ImageView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_page_layout__ImageView.stringdata0))
        return static_cast<void*>(this);
    return ImageViewBase::qt_metacast(_clname);
}

int page_layout::ImageView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ImageViewBase::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void page_layout::ImageView::invalidateThumbnail(PageId const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void page_layout::ImageView::invalidateAllThumbnails()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void page_layout::ImageView::marginsSetLocally(Margins const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
