/****************************************************************************
** Meta object code from reading C++ file 'cihmappserveurtcp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../serveurTcp/cihmappserveurtcp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cihmappserveurtcp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CIhmAppServeurTcp_t {
    QByteArrayData data[19];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CIhmAppServeurTcp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CIhmAppServeurTcp_t qt_meta_stringdata_CIhmAppServeurTcp = {
    {
QT_MOC_LITERAL(0, 0, 17), // "CIhmAppServeurTcp"
QT_MOC_LITERAL(1, 18, 20), // "on_pbEnvoyer_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 18), // "onEvenementServeur"
QT_MOC_LITERAL(4, 59, 3), // "eve"
QT_MOC_LITERAL(5, 63, 10), // "onDataRecu"
QT_MOC_LITERAL(6, 74, 11), // "adrIpClient"
QT_MOC_LITERAL(7, 86, 4), // "data"
QT_MOC_LITERAL(8, 91, 15), // "onErreurServeur"
QT_MOC_LITERAL(9, 107, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(10, 136, 3), // "err"
QT_MOC_LITERAL(11, 140, 11), // "onAdrClient"
QT_MOC_LITERAL(12, 152, 9), // "adrClient"
QT_MOC_LITERAL(13, 162, 17), // "onListeMajClients"
QT_MOC_LITERAL(14, 180, 18), // "QList<QTcpSocket*>"
QT_MOC_LITERAL(15, 199, 5), // "liste"
QT_MOC_LITERAL(16, 205, 22), // "onAfficherResumerTrame"
QT_MOC_LITERAL(17, 228, 7), // "CTrame*"
QT_MOC_LITERAL(18, 236, 5) // "trame"

    },
    "CIhmAppServeurTcp\0on_pbEnvoyer_clicked\0"
    "\0onEvenementServeur\0eve\0onDataRecu\0"
    "adrIpClient\0data\0onErreurServeur\0"
    "QAbstractSocket::SocketError\0err\0"
    "onAdrClient\0adrClient\0onListeMajClients\0"
    "QList<QTcpSocket*>\0liste\0"
    "onAfficherResumerTrame\0CTrame*\0trame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CIhmAppServeurTcp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    1,   50,    2, 0x08 /* Private */,
       5,    2,   53,    2, 0x08 /* Private */,
       8,    1,   58,    2, 0x08 /* Private */,
      11,    1,   61,    2, 0x08 /* Private */,
      13,    1,   64,    2, 0x08 /* Private */,
      16,    1,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,

       0        // eod
};

void CIhmAppServeurTcp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CIhmAppServeurTcp *_t = static_cast<CIhmAppServeurTcp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pbEnvoyer_clicked(); break;
        case 1: _t->onEvenementServeur((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->onDataRecu((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->onErreurServeur((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 4: _t->onAdrClient((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->onListeMajClients((*reinterpret_cast< QList<QTcpSocket*>(*)>(_a[1]))); break;
        case 6: _t->onAfficherResumerTrame((*reinterpret_cast< CTrame*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QTcpSocket*> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CTrame* >(); break;
            }
            break;
        }
    }
}

const QMetaObject CIhmAppServeurTcp::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CIhmAppServeurTcp.data,
      qt_meta_data_CIhmAppServeurTcp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CIhmAppServeurTcp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CIhmAppServeurTcp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CIhmAppServeurTcp.stringdata0))
        return static_cast<void*>(const_cast< CIhmAppServeurTcp*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CIhmAppServeurTcp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
