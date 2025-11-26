/****************************************************************************
** Meta object code from reading C++ file 'OptionsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/core/filters/fix_orientation/OptionsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OptionsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_fix_orientation__OptionsWidget_t {
    QByteArrayData data[9];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fix_orientation__OptionsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fix_orientation__OptionsWidget_t qt_meta_stringdata_fix_orientation__OptionsWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "fix_orientation::OptionsWidget"
QT_MOC_LITERAL(1, 31, 7), // "rotated"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 18), // "OrthogonalRotation"
QT_MOC_LITERAL(4, 59, 8), // "rotation"
QT_MOC_LITERAL(5, 68, 10), // "rotateLeft"
QT_MOC_LITERAL(6, 79, 11), // "rotateRight"
QT_MOC_LITERAL(7, 91, 13), // "resetRotation"
QT_MOC_LITERAL(8, 105, 17) // "showApplyToDialog"

    },
    "fix_orientation::OptionsWidget\0rotated\0"
    "\0OrthogonalRotation\0rotation\0rotateLeft\0"
    "rotateRight\0resetRotation\0showApplyToDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fix_orientation__OptionsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,
       7,    0,   44,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void fix_orientation::OptionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OptionsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rotated((*reinterpret_cast< OrthogonalRotation(*)>(_a[1]))); break;
        case 1: _t->rotateLeft(); break;
        case 2: _t->rotateRight(); break;
        case 3: _t->resetRotation(); break;
        case 4: _t->showApplyToDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OptionsWidget::*)(OrthogonalRotation );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OptionsWidget::rotated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject fix_orientation::OptionsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<FilterOptionsWidget::staticMetaObject>(),
    qt_meta_stringdata_fix_orientation__OptionsWidget.data,
    qt_meta_data_fix_orientation__OptionsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *fix_orientation::OptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fix_orientation::OptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_fix_orientation__OptionsWidget.stringdata0))
        return static_cast<void*>(this);
    return FilterOptionsWidget::qt_metacast(_clname);
}

int fix_orientation::OptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FilterOptionsWidget::qt_metacall(_c, _id, _a);
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
void fix_orientation::OptionsWidget::rotated(OrthogonalRotation _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
