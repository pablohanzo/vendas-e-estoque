/****************************************************************************
** Meta object code from reading C++ file 'gp_gestaovendas.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gestaoProduto/gp_gestaovendas.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gp_gestaovendas.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_gp_gestaovendas_t {};
static constexpr auto qt_meta_stringdata_gp_gestaovendas = QtMocHelpers::stringData(
    "gp_gestaovendas",
    "on_tw_listavendas_itemSelectionChanged",
    "",
    "on_btn_filtrargvenda_clicked",
    "on_btn_imprimirgvenda_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_gp_gestaovendas_t {
    uint offsetsAndSizes[10];
    char stringdata0[16];
    char stringdata1[39];
    char stringdata2[1];
    char stringdata3[29];
    char stringdata4[30];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_gp_gestaovendas_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_gp_gestaovendas_t qt_meta_stringdata_gp_gestaovendas = {
    {
        QT_MOC_LITERAL(0, 15),  // "gp_gestaovendas"
        QT_MOC_LITERAL(16, 38),  // "on_tw_listavendas_itemSelecti..."
        QT_MOC_LITERAL(55, 0),  // ""
        QT_MOC_LITERAL(56, 28),  // "on_btn_filtrargvenda_clicked"
        QT_MOC_LITERAL(85, 29)   // "on_btn_imprimirgvenda_clicked"
    },
    "gp_gestaovendas",
    "on_tw_listavendas_itemSelectionChanged",
    "",
    "on_btn_filtrargvenda_clicked",
    "on_btn_imprimirgvenda_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_gp_gestaovendas[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    0,   33,    2, 0x08,    2 /* Private */,
       4,    0,   34,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject gp_gestaovendas::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_gp_gestaovendas.offsetsAndSizes,
    qt_meta_data_gp_gestaovendas,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_gp_gestaovendas_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<gp_gestaovendas, std::true_type>,
        // method 'on_tw_listavendas_itemSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_filtrargvenda_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_imprimirgvenda_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void gp_gestaovendas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gp_gestaovendas *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_tw_listavendas_itemSelectionChanged(); break;
        case 1: _t->on_btn_filtrargvenda_clicked(); break;
        case 2: _t->on_btn_imprimirgvenda_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *gp_gestaovendas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gp_gestaovendas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gp_gestaovendas.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int gp_gestaovendas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    }
    return _id;
}
QT_WARNING_POP
