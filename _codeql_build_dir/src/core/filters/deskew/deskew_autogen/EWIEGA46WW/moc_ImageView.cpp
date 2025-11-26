/****************************************************************************
** Meta object code from reading C++ file 'ImageView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/core/filters/deskew/ImageView.h"
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
struct qt_meta_stringdata_deskew__ImageView_t {
    QByteArrayData data[7];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_deskew__ImageView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_deskew__ImageView_t qt_meta_stringdata_deskew__ImageView = {
    {
QT_MOC_LITERAL(0, 0, 17), // "deskew::ImageView"
QT_MOC_LITERAL(1, 18, 20), // "manualDeskewAngleSet"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 7), // "degrees"
QT_MOC_LITERAL(4, 48, 30), // "manualDeskewAngleSetExternally"
QT_MOC_LITERAL(5, 79, 12), // "doRotateLeft"
QT_MOC_LITERAL(6, 92, 13) // "doRotateRight"

    },
    "deskew::ImageView\0manualDeskewAngleSet\0"
    "\0degrees\0manualDeskewAngleSetExternally\0"
    "doRotateLeft\0doRotateRight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_deskew__ImageView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x0a /* Public */,
       5,    0,   40,    2, 0x0a /* Public */,
       6,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void deskew::ImageView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImageView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->manualDeskewAngleSet((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->manualDeskewAngleSetExternally((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->doRotateLeft(); break;
        case 3: _t->doRotateRight(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ImageView::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageView::manualDeskewAngleSet)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject deskew::ImageView::staticMetaObject = { {
    QMetaObject::SuperData::link<ImageViewBase::staticMetaObject>(),
    qt_meta_stringdata_deskew__ImageView.data,
    qt_meta_data_deskew__ImageView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *deskew::ImageView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *deskew::ImageView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_deskew__ImageView.stringdata0))
        return static_cast<void*>(this);
    return ImageViewBase::qt_metacast(_clname);
}

int deskew::ImageView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ImageViewBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void deskew::ImageView::manualDeskewAngleSet(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
