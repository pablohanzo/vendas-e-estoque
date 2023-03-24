/****************************************************************************
** Meta object code from reading C++ file 'gp_principal.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gestaoProduto/gp_principal.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gp_principal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_gp_principal_t {};
static constexpr auto qt_meta_stringdata_gp_principal = QtMocHelpers::stringData(
    "gp_principal",
    "on_btn_bloquear_clicked",
    "",
    "on_btn_novavenda_clicked",
    "on_actionEstoque_triggered",
    "on_actionColaboradores_triggered",
    "on_actionVendas_triggered",
    "on_actionSair_triggered",
    "on_actionSobre_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_gp_principal_t {
    uint offsetsAndSizes[18];
    char stringdata0[13];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[25];
    char stringdata4[27];
    char stringdata5[33];
    char stringdata6[26];
    char stringdata7[24];
    char stringdata8[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_gp_principal_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_gp_principal_t qt_meta_stringdata_gp_principal = {
    {
        QT_MOC_LITERAL(0, 12),  // "gp_principal"
        QT_MOC_LITERAL(13, 23),  // "on_btn_bloquear_clicked"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 24),  // "on_btn_novavenda_clicked"
        QT_MOC_LITERAL(63, 26),  // "on_actionEstoque_triggered"
        QT_MOC_LITERAL(90, 32),  // "on_actionColaboradores_triggered"
        QT_MOC_LITERAL(123, 25),  // "on_actionVendas_triggered"
        QT_MOC_LITERAL(149, 23),  // "on_actionSair_triggered"
        QT_MOC_LITERAL(173, 24)   // "on_actionSobre_triggered"
    },
    "gp_principal",
    "on_btn_bloquear_clicked",
    "",
    "on_btn_novavenda_clicked",
    "on_actionEstoque_triggered",
    "on_actionColaboradores_triggered",
    "on_actionVendas_triggered",
    "on_actionSair_triggered",
    "on_actionSobre_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_gp_principal[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject gp_principal::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_gp_principal.offsetsAndSizes,
    qt_meta_data_gp_principal,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_gp_principal_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<gp_principal, std::true_type>,
        // method 'on_btn_bloquear_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_novavenda_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionEstoque_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionColaboradores_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionVendas_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSair_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSobre_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void gp_principal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gp_principal *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btn_bloquear_clicked(); break;
        case 1: _t->on_btn_novavenda_clicked(); break;
        case 2: _t->on_actionEstoque_triggered(); break;
        case 3: _t->on_actionColaboradores_triggered(); break;
        case 4: _t->on_actionVendas_triggered(); break;
        case 5: _t->on_actionSair_triggered(); break;
        case 6: _t->on_actionSobre_triggered(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *gp_principal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gp_principal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gp_principal.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int gp_principal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
