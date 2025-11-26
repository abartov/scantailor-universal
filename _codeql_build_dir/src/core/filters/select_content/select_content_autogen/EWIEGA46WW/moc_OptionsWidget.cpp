/****************************************************************************
** Meta object code from reading C++ file 'OptionsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/core/filters/select_content/OptionsWidget.h"
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
struct qt_meta_stringdata_select_content__OptionsWidget_t {
    QByteArrayData data[15];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_select_content__OptionsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_select_content__OptionsWidget_t qt_meta_stringdata_select_content__OptionsWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "select_content::OptionsWidget"
QT_MOC_LITERAL(1, 30, 20), // "manualContentRectSet"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 12), // "content_rect"
QT_MOC_LITERAL(4, 65, 17), // "showApplyToDialog"
QT_MOC_LITERAL(5, 83, 11), // "modeChanged"
QT_MOC_LITERAL(6, 95, 9), // "auto_mode"
QT_MOC_LITERAL(7, 105, 8), // "autoMode"
QT_MOC_LITERAL(8, 114, 10), // "manualMode"
QT_MOC_LITERAL(9, 125, 17), // "fineTuningChanged"
QT_MOC_LITERAL(10, 143, 7), // "checked"
QT_MOC_LITERAL(11, 151, 24), // "contentDetectionDisabled"
QT_MOC_LITERAL(12, 176, 21), // "pageDetectionDisabled"
QT_MOC_LITERAL(13, 198, 20), // "pageDetectionEnabled"
QT_MOC_LITERAL(14, 219, 13) // "borderChanged"

    },
    "select_content::OptionsWidget\0"
    "manualContentRectSet\0\0content_rect\0"
    "showApplyToDialog\0modeChanged\0auto_mode\0"
    "autoMode\0manualMode\0fineTuningChanged\0"
    "checked\0contentDetectionDisabled\0"
    "pageDetectionDisabled\0pageDetectionEnabled\0"
    "borderChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_select_content__OptionsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       4,    0,   67,    2, 0x08 /* Private */,
       5,    1,   68,    2, 0x08 /* Private */,
       7,    0,   71,    2, 0x08 /* Private */,
       8,    0,   72,    2, 0x08 /* Private */,
       9,    1,   73,    2, 0x08 /* Private */,
      11,    0,   76,    2, 0x08 /* Private */,
      12,    0,   77,    2, 0x08 /* Private */,
      13,    0,   78,    2, 0x08 /* Private */,
      14,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QRectF,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void select_content::OptionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OptionsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->manualContentRectSet((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 1: _t->showApplyToDialog(); break;
        case 2: _t->modeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->autoMode(); break;
        case 4: _t->manualMode(); break;
        case 5: _t->fineTuningChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->contentDetectionDisabled(); break;
        case 7: _t->pageDetectionDisabled(); break;
        case 8: _t->pageDetectionEnabled(); break;
        case 9: _t->borderChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject select_content::OptionsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<FilterOptionsWidget::staticMetaObject>(),
    qt_meta_stringdata_select_content__OptionsWidget.data,
    qt_meta_data_select_content__OptionsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *select_content::OptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *select_content::OptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_select_content__OptionsWidget.stringdata0))
        return static_cast<void*>(this);
    return FilterOptionsWidget::qt_metacast(_clname);
}

int select_content::OptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FilterOptionsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
