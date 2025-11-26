/****************************************************************************
** Meta object code from reading C++ file 'PictureZoneEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/core/filters/output/PictureZoneEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PictureZoneEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_output__PictureZoneEditor_t {
    QByteArrayData data[11];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_output__PictureZoneEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_output__PictureZoneEditor_t qt_meta_stringdata_output__PictureZoneEditor = {
    {
QT_MOC_LITERAL(0, 0, 25), // "output::PictureZoneEditor"
QT_MOC_LITERAL(1, 26, 19), // "invalidateThumbnail"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 6), // "PageId"
QT_MOC_LITERAL(4, 54, 7), // "page_id"
QT_MOC_LITERAL(5, 62, 19), // "disablePictureLayer"
QT_MOC_LITERAL(6, 82, 27), // "advancePictureMaskAnimation"
QT_MOC_LITERAL(7, 110, 33), // "initiateBuildingScreenPicture..."
QT_MOC_LITERAL(8, 144, 11), // "commitZones"
QT_MOC_LITERAL(9, 156, 11), // "zoneRemoved"
QT_MOC_LITERAL(10, 168, 15) // "updateRequested"

    },
    "output::PictureZoneEditor\0invalidateThumbnail\0"
    "\0PageId\0page_id\0disablePictureLayer\0"
    "advancePictureMaskAnimation\0"
    "initiateBuildingScreenPictureMask\0"
    "commitZones\0zoneRemoved\0updateRequested"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_output__PictureZoneEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,
       9,    0,   56,    2, 0x08 /* Private */,
      10,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void output::PictureZoneEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PictureZoneEditor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->invalidateThumbnail((*reinterpret_cast< const PageId(*)>(_a[1]))); break;
        case 1: _t->disablePictureLayer(); break;
        case 2: _t->advancePictureMaskAnimation(); break;
        case 3: _t->initiateBuildingScreenPictureMask(); break;
        case 4: _t->commitZones(); break;
        case 5: _t->zoneRemoved(); break;
        case 6: _t->updateRequested(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PictureZoneEditor::*)(PageId const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PictureZoneEditor::invalidateThumbnail)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PictureZoneEditor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PictureZoneEditor::disablePictureLayer)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject output::PictureZoneEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<ImageViewBase::staticMetaObject>(),
    qt_meta_stringdata_output__PictureZoneEditor.data,
    qt_meta_data_output__PictureZoneEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *output::PictureZoneEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *output::PictureZoneEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_output__PictureZoneEditor.stringdata0))
        return static_cast<void*>(this);
    return ImageViewBase::qt_metacast(_clname);
}

int output::PictureZoneEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ImageViewBase::qt_metacall(_c, _id, _a);
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
void output::PictureZoneEditor::invalidateThumbnail(PageId const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void output::PictureZoneEditor::disablePictureLayer()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
