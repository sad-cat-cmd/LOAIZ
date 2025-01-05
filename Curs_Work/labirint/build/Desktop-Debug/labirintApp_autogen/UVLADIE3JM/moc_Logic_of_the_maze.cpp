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
    uint offsetsAndSizes[48];
    char stringdata0[18];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[25];
    char stringdata4[8];
    char stringdata5[9];
    char stringdata6[20];
    char stringdata7[17];
    char stringdata8[19];
    char stringdata9[19];
    char stringdata10[30];
    char stringdata11[5];
    char stringdata12[11];
    char stringdata13[3];
    char stringdata14[3];
    char stringdata15[9];
    char stringdata16[14];
    char stringdata17[20];
    char stringdata18[10];
    char stringdata19[11];
    char stringdata20[8];
    char stringdata21[19];
    char stringdata22[19];
    char stringdata23[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Logic_of_the_maze_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Logic_of_the_maze_t qt_meta_stringdata_Logic_of_the_maze = {
    {
        QT_MOC_LITERAL(0, 17),  // "Logic_of_the_maze"
        QT_MOC_LITERAL(18, 25),  // "myGameScreenImagesChanged"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 24),  // "agentScreenImagesChanged"
        QT_MOC_LITERAL(70, 7),  // "gameWon"
        QT_MOC_LITERAL(78, 8),  // "agentWon"
        QT_MOC_LITERAL(87, 19),  // "logic_generate_maze"
        QT_MOC_LITERAL(107, 16),  // "fillScreenImages"
        QT_MOC_LITERAL(124, 18),  // "findPlayerPosition"
        QT_MOC_LITERAL(143, 18),  // "std::pair<int,int>"
        QT_MOC_LITERAL(162, 29),  // "std::vector<std::vector<int>>"
        QT_MOC_LITERAL(192, 4),  // "maze"
        QT_MOC_LITERAL(197, 10),  // "movePlayer"
        QT_MOC_LITERAL(208, 2),  // "dx"
        QT_MOC_LITERAL(211, 2),  // "dy"
        QT_MOC_LITERAL(214, 8),  // "findPath"
        QT_MOC_LITERAL(223, 13),  // "vector<Point>"
        QT_MOC_LITERAL(237, 19),  // "vector<vector<int>>"
        QT_MOC_LITERAL(257, 9),  // "moveAgent"
        QT_MOC_LITERAL(267, 10),  // "startAgent"
        QT_MOC_LITERAL(278, 7),  // "cleanup"
        QT_MOC_LITERAL(286, 18),  // "myGameScreenImages"
        QT_MOC_LITERAL(305, 18),  // "QList<QStringList>"
        QT_MOC_LITERAL(324, 17)   // "agentScreenImages"
    },
    "Logic_of_the_maze",
    "myGameScreenImagesChanged",
    "",
    "agentScreenImagesChanged",
    "gameWon",
    "agentWon",
    "logic_generate_maze",
    "fillScreenImages",
    "findPlayerPosition",
    "std::pair<int,int>",
    "std::vector<std::vector<int>>",
    "maze",
    "movePlayer",
    "dx",
    "dy",
    "findPath",
    "vector<Point>",
    "vector<vector<int>>",
    "moveAgent",
    "startAgent",
    "cleanup",
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
      12,   14, // methods
       2,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    3 /* Public */,
       3,    0,   87,    2, 0x06,    4 /* Public */,
       4,    0,   88,    2, 0x06,    5 /* Public */,
       5,    0,   89,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   90,    2, 0x0a,    7 /* Public */,
       7,    0,   91,    2, 0x0a,    8 /* Public */,
       8,    1,   92,    2, 0x0a,    9 /* Public */,
      12,    2,   95,    2, 0x0a,   11 /* Public */,
      15,    1,  100,    2, 0x0a,   14 /* Public */,
      18,    0,  103,    2, 0x0a,   16 /* Public */,
      19,    0,  104,    2, 0x0a,   17 /* Public */,
      20,    0,  105,    2, 0x0a,   18 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 9, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   14,
    0x80000000 | 16, 0x80000000 | 17,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      21, 0x80000000 | 22, 0x00015009, uint(0), 0,
      23, 0x80000000 | 22, 0x00015009, uint(1), 0,

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
        // method 'gameWon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'agentWon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'logic_generate_maze'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fillScreenImages'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'findPlayerPosition'
        QtPrivate::TypeAndForceComplete<std::pair<int,int>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::vector<std::vector<int>> &, std::false_type>,
        // method 'movePlayer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'findPath'
        QtPrivate::TypeAndForceComplete<vector<Point>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const vector<vector<int>> &, std::false_type>,
        // method 'moveAgent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startAgent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cleanup'
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
        case 2: _t->gameWon(); break;
        case 3: _t->agentWon(); break;
        case 4: _t->logic_generate_maze(); break;
        case 5: _t->fillScreenImages(); break;
        case 6: { std::pair<int,int> _r = _t->findPlayerPosition((*reinterpret_cast< std::add_pointer_t<std::vector<std::vector<int>>>>(_a[1])));
            if (_a[0]) *reinterpret_cast< std::pair<int,int>*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->movePlayer((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 8: { vector<Point> _r = _t->findPath((*reinterpret_cast< std::add_pointer_t<vector<vector<int>>>>(_a[1])));
            if (_a[0]) *reinterpret_cast< vector<Point>*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->moveAgent(); break;
        case 10: _t->startAgent(); break;
        case 11: _t->cleanup(); break;
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
        {
            using _t = void (Logic_of_the_maze::*)();
            if (_t _q_method = &Logic_of_the_maze::gameWon; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Logic_of_the_maze::*)();
            if (_t _q_method = &Logic_of_the_maze::agentWon; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
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

// SIGNAL 2
void Logic_of_the_maze::gameWon()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Logic_of_the_maze::agentWon()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
