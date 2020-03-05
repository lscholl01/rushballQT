/****************************************************************************
** Meta object code from reading C++ file 'cserveurtcp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../serveurTcp/cserveurtcp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cserveurtcp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CServeurTcp_t {
    QByteArrayData data[22];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CServeurTcp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CServeurTcp_t qt_meta_stringdata_CServeurTcp = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CServeurTcp"
QT_MOC_LITERAL(1, 12, 19), // "sigEvenementServeur"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 3), // "eve"
QT_MOC_LITERAL(4, 37, 9), // "sigErreur"
QT_MOC_LITERAL(5, 47, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(6, 76, 3), // "err"
QT_MOC_LITERAL(7, 80, 13), // "sigDataClient"
QT_MOC_LITERAL(8, 94, 11), // "adrIpClient"
QT_MOC_LITERAL(9, 106, 4), // "data"
QT_MOC_LITERAL(10, 111, 12), // "sigAdrClient"
QT_MOC_LITERAL(11, 124, 9), // "adrClient"
QT_MOC_LITERAL(12, 134, 13), // "sigMajClients"
QT_MOC_LITERAL(13, 148, 18), // "QList<QTcpSocket*>"
QT_MOC_LITERAL(14, 167, 5), // "liste"
QT_MOC_LITERAL(15, 173, 23), // "sigAfficherResumerTrame"
QT_MOC_LITERAL(16, 197, 7), // "CTrame*"
QT_MOC_LITERAL(17, 205, 5), // "trame"
QT_MOC_LITERAL(18, 211, 21), // "onNewConnectionClient"
QT_MOC_LITERAL(19, 233, 20), // "OnDisconnectedClient"
QT_MOC_LITERAL(20, 254, 14), // "onErreurReseau"
QT_MOC_LITERAL(21, 269, 17) // "onReadyReadClient"

    },
    "CServeurTcp\0sigEvenementServeur\0\0eve\0"
    "sigErreur\0QAbstractSocket::SocketError\0"
    "err\0sigDataClient\0adrIpClient\0data\0"
    "sigAdrClient\0adrClient\0sigMajClients\0"
    "QList<QTcpSocket*>\0liste\0"
    "sigAfficherResumerTrame\0CTrame*\0trame\0"
    "onNewConnectionClient\0OnDisconnectedClient\0"
    "onErreurReseau\0onReadyReadClient"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CServeurTcp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       7,    2,   70,    2, 0x06 /* Public */,
      10,    1,   75,    2, 0x06 /* Public */,
      12,    1,   78,    2, 0x06 /* Public */,
      15,    1,   81,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,   84,    2, 0x0a /* Public */,
      19,    0,   85,    2, 0x0a /* Public */,
      20,    1,   86,    2, 0x0a /* Public */,
      21,    0,   89,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void CServeurTcp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CServeurTcp *_t = static_cast<CServeurTcp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigEvenementServeur((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sigErreur((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 2: _t->sigDataClient((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->sigAdrClient((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->sigMajClients((*reinterpret_cast< QList<QTcpSocket*>(*)>(_a[1]))); break;
        case 5: _t->sigAfficherResumerTrame((*reinterpret_cast< CTrame*(*)>(_a[1]))); break;
        case 6: _t->onNewConnectionClient(); break;
        case 7: _t->OnDisconnectedClient(); break;
        case 8: _t->onErreurReseau((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 9: _t->onReadyReadClient(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QTcpSocket*> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CTrame* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CServeurTcp::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CServeurTcp::sigEvenementServeur)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CServeurTcp::*_t)(QAbstractSocket::SocketError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CServeurTcp::sigErreur)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CServeurTcp::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CServeurTcp::sigDataClient)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CServeurTcp::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CServeurTcp::sigAdrClient)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (CServeurTcp::*_t)(QList<QTcpSocket*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CServeurTcp::sigMajClients)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (CServeurTcp::*_t)(CTrame * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CServeurTcp::sigAfficherResumerTrame)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject CServeurTcp::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_CServeurTcp.data,
      qt_meta_data_CServeurTcp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CServeurTcp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CServeurTcp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CServeurTcp.stringdata0))
        return static_cast<void*>(const_cast< CServeurTcp*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int CServeurTcp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void CServeurTcp::sigEvenementServeur(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CServeurTcp::sigErreur(QAbstractSocket::SocketError _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CServeurTcp::sigDataClient(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CServeurTcp::sigAdrClient(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CServeurTcp::sigMajClients(QList<QTcpSocket*> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CServeurTcp::sigAfficherResumerTrame(CTrame * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
