/****************************************************************************
** Meta object code from reading C++ file 'Logic_of_the_maze.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/Logic_of_the_maze.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Logic_of_the_maze.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_Logic_of_the_maze_t {
    uint offsetsAndSizes[16];
    char stringdata0[18];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[25];
    char stringdata4[17];
    char stringdata5[19];
    char stringdata6[19];
    char stringdata7[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Logic_of_the_maze_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Logic_of_the_maze_t qt_meta_stringdata_Logic_of_the_maze = {
    {
        QT_MOC_LITERAL(0, 17),  // "Logic_of_the_maze"
        QT_MOC_LITERAL(18, 25),  // "myGameScreenImagesChanged"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 24),  // "agentScreenImagesChanged"
        QT_MOC_LITERAL(70, 16),  // "fillScreenImages"
        QT_MOC_LITERAL(87, 18),  // "myGameScreenImages"
        QT_MOC_LITERAL(106, 18),  // "QList<QStringList>"
        QT_MOC_LITERAL(125, 17)   // "agentScreenImages"
    },
    "Logic_of_the_maze",
    "myGameScreenImagesChanged",
    "",
    "agentScreenImagesChanged",
    "fillScreenImages",
    "myGameScreenImages",
    "QList<QStringList>",
    "agentScreenImages"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Logic_of_the_maze[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   35, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    3 /* Public */,
       3,    0,   33,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   34,    2, 0x0a,    5 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x00015009, uint(0), 0,
       7, 0x80000000 | 6, 0x00015009, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Logic_of_the_maze::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Logic_of_the_maze.offsetsAndSizes,
    qt_meta_data_Logic_of_the_maze,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Logic_of_the_maze_t,
        // property 'myGameScreenImages'
        QtPrivate::TypeAndForceComplete<QList<QStringList>, std::true_type>,
        // property 'agentScreenImages'
        QtPrivate::TypeAndForceComplete<QList<QStringList>, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Logic_of_the_maze, std::true_type>,
        // method 'myGameScreenImagesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'agentScreenImagesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fillScreenImages'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Logic_of_the_maze::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Logic_of_the_maze *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->myGameScreenImagesChanged(); break;
        case 1: _t->agentScreenImagesChanged(); break;
        case 2: _t->fillScreenImages(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Logic_of_the_maze::*)();
            if (_t _q_method = &Logic_of_the_maze::myGameScreenImagesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Logic_of_the_maze::*)();
            if (_t _q_method = &Logic_of_the_maze::agentScreenImagesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QStringList> >(); break;
        }
    }
else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Logic_of_the_maze *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QStringList>*>(_v) = _t->getMyGameScreenImages(); break;
        case 1: *reinterpret_cast< QList<QStringList>*>(_v) = _t->getAgentScreenImages(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Logic_of_the_maze::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Logic_of_the_maze::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Logic_of_the_maze.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Logic_of_the_maze::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Logic_of_the_maze::myGameScreenImagesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Logic_of_the_maze::agentScreenImagesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
