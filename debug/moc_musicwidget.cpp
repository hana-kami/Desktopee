/****************************************************************************
** Meta object code from reading C++ file 'musicwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../musicwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'musicwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_musicWidget_t {
    QByteArrayData data[8];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_musicWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_musicWidget_t qt_meta_stringdata_musicWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "musicWidget"
QT_MOC_LITERAL(1, 12, 27), // "on_m_buttonPrevious_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 23), // "on_m_buttonNext_clicked"
QT_MOC_LITERAL(4, 65, 38), // "on_horizontalSlider_music_val..."
QT_MOC_LITERAL(5, 104, 5), // "value"
QT_MOC_LITERAL(6, 110, 28), // "on_m_buttonPlayPause_clicked"
QT_MOC_LITERAL(7, 139, 7) // "checked"

    },
    "musicWidget\0on_m_buttonPrevious_clicked\0"
    "\0on_m_buttonNext_clicked\0"
    "on_horizontalSlider_music_valueChanged\0"
    "value\0on_m_buttonPlayPause_clicked\0"
    "checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_musicWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void musicWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        musicWidget *_t = static_cast<musicWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_m_buttonPrevious_clicked(); break;
        case 1: _t->on_m_buttonNext_clicked(); break;
        case 2: _t->on_horizontalSlider_music_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_m_buttonPlayPause_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject musicWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_musicWidget.data,
      qt_meta_data_musicWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *musicWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *musicWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_musicWidget.stringdata0))
        return static_cast<void*>(const_cast< musicWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int musicWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
