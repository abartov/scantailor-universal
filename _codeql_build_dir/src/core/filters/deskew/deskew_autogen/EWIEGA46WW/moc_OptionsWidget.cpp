/****************************************************************************
** Meta object code from reading C++ file 'OptionsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/core/filters/deskew/OptionsWidget.h"
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
struct qt_meta_stringdata_deskew__OptionsWidget_t {
    QByteArrayData data[14];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_deskew__OptionsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_deskew__OptionsWidget_t qt_meta_stringdata_deskew__OptionsWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "deskew::OptionsWidget"
QT_MOC_LITERAL(1, 22, 20), // "manualDeskewAngleSet"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 7), // "degrees"
QT_MOC_LITERAL(4, 52, 30), // "manualDeskewAngleSetExternally"
QT_MOC_LITERAL(5, 83, 19), // "spinBoxValueChanged"
QT_MOC_LITERAL(6, 103, 12), // "skew_degrees"
QT_MOC_LITERAL(7, 116, 11), // "modeChanged"
QT_MOC_LITERAL(8, 128, 9), // "auto_mode"
QT_MOC_LITERAL(9, 138, 16), // "showDeskewDialog"
QT_MOC_LITERAL(10, 155, 9), // "appliedTo"
QT_MOC_LITERAL(11, 165, 16), // "std::set<PageId>"
QT_MOC_LITERAL(12, 182, 5), // "pages"
QT_MOC_LITERAL(13, 188, 17) // "appliedToAllPages"

    },
    "deskew::OptionsWidget\0manualDeskewAngleSet\0"
    "\0degrees\0manualDeskewAngleSetExternally\0"
    "spinBoxValueChanged\0skew_degrees\0"
    "modeChanged\0auto_mode\0showDeskewDialog\0"
    "appliedTo\0std::set<PageId>\0pages\0"
    "appliedToAllPages"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_deskew__OptionsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   52,    2, 0x0a /* Public */,
       5,    1,   55,    2, 0x08 /* Private */,
       7,    1,   58,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,
      10,    1,   62,    2, 0x08 /* Private */,
      13,    1,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void deskew::OptionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OptionsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->manualDeskewAngleSet((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->manualDeskewAngleSetExternally((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->spinBoxValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->modeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->showDeskewDialog(); break;
        case 5: _t->appliedTo((*reinterpret_cast< std::set<PageId>(*)>(_a[1]))); break;
        case 6: _t->appliedToAllPages((*reinterpret_cast< std::set<PageId>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OptionsWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OptionsWidget::manualDeskewAngleSet)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject deskew::OptionsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<FilterOptionsWidget::staticMetaObject>(),
    qt_meta_stringdata_deskew__OptionsWidget.data,
    qt_meta_data_deskew__OptionsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *deskew::OptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *deskew::OptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_deskew__OptionsWidget.stringdata0))
        return static_cast<void*>(this);
    return FilterOptionsWidget::qt_metacast(_clname);
}

int deskew::OptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FilterOptionsWidget::qt_metacall(_c, _id, _a);
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
void deskew::OptionsWidget::manualDeskewAngleSet(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
