/****************************************************************************
** Meta object code from reading C++ file 'serialUpdatingData.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../serialUpdatingData.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialUpdatingData.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
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
struct qt_meta_stringdata_CLASSSerialUpdatingDataENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSerialUpdatingDataENDCLASS = QtMocHelpers::stringData(
    "SerialUpdatingData",
    "QML.Element",
    "auto",
    "pm25ValueChanged",
    "",
    "pm10ValueChanged",
    "temparatureValueChanged",
    "humidityValueChanged",
    "noiseValueChanged",
    "atmValueChanged",
    "valueChanged",
    "ValueChanged",
    "pm25Value",
    "pm10Value",
    "temparatureValue",
    "humidityValue",
    "noiseValue",
    "atmValue",
    "Value",
    "value"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSerialUpdatingDataENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
       7,   16, // methods
       8,   65, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   58,    4, 0x06,    9 /* Public */,
       5,    0,   59,    4, 0x06,   10 /* Public */,
       6,    0,   60,    4, 0x06,   11 /* Public */,
       7,    0,   61,    4, 0x06,   12 /* Public */,
       8,    0,   62,    4, 0x06,   13 /* Public */,
       9,    0,   63,    4, 0x06,   14 /* Public */,
      10,    0,   64,    4, 0x06,   15 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::Double, 0x00015103, uint(0), 0,
      13, QMetaType::Double, 0x00015103, uint(1), 0,
      14, QMetaType::Double, 0x00015103, uint(2), 0,
      15, QMetaType::Double, 0x00015103, uint(3), 0,
      16, QMetaType::Double, 0x00015103, uint(4), 0,
      17, QMetaType::Double, 0x00015103, uint(5), 0,
      18, QMetaType::Double, 0x00015103, uint(1879048203), 0,
      19, QMetaType::Double, 0x00015103, uint(6), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject SerialUpdatingData::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSSerialUpdatingDataENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSerialUpdatingDataENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'pm25Value'
        double,
        // property 'pm10Value'
        double,
        // property 'temparatureValue'
        double,
        // property 'humidityValue'
        double,
        // property 'noiseValue'
        double,
        // property 'atmValue'
        double,
        // property 'Value'
        double,
        // property 'value'
        double,
        // Q_OBJECT / Q_GADGET
        SerialUpdatingData,
        // method 'pm25ValueChanged'
        void,
        // method 'pm10ValueChanged'
        void,
        // method 'temparatureValueChanged'
        void,
        // method 'humidityValueChanged'
        void,
        // method 'noiseValueChanged'
        void,
        // method 'atmValueChanged'
        void,
        // method 'valueChanged'
        void
    >,
    nullptr
} };

void SerialUpdatingData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SerialUpdatingData *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pm25ValueChanged(); break;
        case 1: _t->pm10ValueChanged(); break;
        case 2: _t->temparatureValueChanged(); break;
        case 3: _t->humidityValueChanged(); break;
        case 4: _t->noiseValueChanged(); break;
        case 5: _t->atmValueChanged(); break;
        case 6: _t->valueChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SerialUpdatingData::*)();
            if (_t _q_method = &SerialUpdatingData::pm25ValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SerialUpdatingData::*)();
            if (_t _q_method = &SerialUpdatingData::pm10ValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SerialUpdatingData::*)();
            if (_t _q_method = &SerialUpdatingData::temparatureValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SerialUpdatingData::*)();
            if (_t _q_method = &SerialUpdatingData::humidityValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SerialUpdatingData::*)();
            if (_t _q_method = &SerialUpdatingData::noiseValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SerialUpdatingData::*)();
            if (_t _q_method = &SerialUpdatingData::atmValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SerialUpdatingData::*)();
            if (_t _q_method = &SerialUpdatingData::valueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SerialUpdatingData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->getPm25Value(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->getPm10Value(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->getTemparatureValue(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->getHumidityValue(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->getNoiseValue(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->getAtmValue(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->getValue(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->getValue(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SerialUpdatingData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPm25Value(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setPm10Value(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setTemparatureValue(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setHumidityValue(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setNoiseValue(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setAtmValue(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setValue(*reinterpret_cast< double*>(_v)); break;
        case 7: _t->setValue(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *SerialUpdatingData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialUpdatingData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSerialUpdatingDataENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SerialUpdatingData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SerialUpdatingData::pm25ValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SerialUpdatingData::pm10ValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SerialUpdatingData::temparatureValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SerialUpdatingData::humidityValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SerialUpdatingData::noiseValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SerialUpdatingData::atmValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void SerialUpdatingData::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
namespace CheckNotifySignalValidity_CLASSSerialUpdatingDataENDCLASS {
template<typename T> using has_nullary_ValueChanged = decltype(std::declval<T>().ValueChanged());
template<typename T> using has_unary_ValueChanged = decltype(std::declval<T>().ValueChanged(std::declval<double>()));
static_assert(qxp::is_detected_v<has_nullary_ValueChanged, SerialUpdatingData> || qxp::is_detected_v<has_unary_ValueChanged, SerialUpdatingData>,
              "NOTIFY signal ValueChanged does not exist in class (or is private in its parent)");
}
QT_WARNING_POP
