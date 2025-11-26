/****************************************************************************
** Meta object code from reading C++ file 'ExportThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/exporting/ExportThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExportThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_exporting__ExportThread_t {
    QByteArrayData data[13];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_exporting__ExportThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_exporting__ExportThread_t qt_meta_stringdata_exporting__ExportThread = {
    {
QT_MOC_LITERAL(0, 0, 23), // "exporting::ExportThread"
QT_MOC_LITERAL(1, 24, 14), // "imageProcessed"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 14), // "exportCanceled"
QT_MOC_LITERAL(4, 55, 15), // "exportCompleted"
QT_MOC_LITERAL(5, 71, 13), // "needReprocess"
QT_MOC_LITERAL(6, 85, 6), // "PageId"
QT_MOC_LITERAL(7, 92, 7), // "page_id"
QT_MOC_LITERAL(8, 100, 7), // "QImage*"
QT_MOC_LITERAL(9, 108, 12), // "fore_subscan"
QT_MOC_LITERAL(10, 121, 5), // "error"
QT_MOC_LITERAL(11, 127, 8), // "errorStr"
QT_MOC_LITERAL(12, 136, 6) // "cancel"

    },
    "exporting::ExportThread\0imageProcessed\0"
    "\0exportCanceled\0exportCompleted\0"
    "needReprocess\0PageId\0page_id\0QImage*\0"
    "fore_subscan\0error\0errorStr\0cancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_exporting__ExportThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    2,   47,    2, 0x06 /* Public */,
      10,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,
    QMetaType::Void, QMetaType::QString,   11,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void exporting::ExportThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExportThread *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->imageProcessed(); break;
        case 1: _t->exportCanceled(); break;
        case 2: _t->exportCompleted(); break;
        case 3: _t->needReprocess((*reinterpret_cast< const PageId(*)>(_a[1])),(*reinterpret_cast< QImage*(*)>(_a[2]))); break;
        case 4: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ExportThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExportThread::imageProcessed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ExportThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExportThread::exportCanceled)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ExportThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExportThread::exportCompleted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ExportThread::*)(const PageId & , QImage * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExportThread::needReprocess)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ExportThread::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExportThread::error)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject exporting::ExportThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_exporting__ExportThread.data,
    qt_meta_data_exporting__ExportThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *exporting::ExportThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *exporting::ExportThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_exporting__ExportThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int exporting::ExportThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void exporting::ExportThread::imageProcessed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void exporting::ExportThread::exportCanceled()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void exporting::ExportThread::exportCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void exporting::ExportThread::needReprocess(const PageId & _t1, QImage * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void exporting::ExportThread::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
