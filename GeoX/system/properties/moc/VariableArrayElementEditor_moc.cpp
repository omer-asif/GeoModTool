/****************************************************************************
** Meta object code from reading C++ file 'VariableArrayElementEditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../VariableArrayElementEditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VariableArrayElementEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VariableArrayElementEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x0a,
      37,   27,   27,   27, 0x0a,
      61,   49,   27,   27, 0x0a,
     100,   27,   27,   27, 0x0a,
     118,  114,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_VariableArrayElementEditor[] = {
    "VariableArrayElementEditor\0\0sltAdd()\0"
    "sltDelete()\0item,column\0"
    "sltItemActivated(QTreeWidgetItem*,int)\0"
    "sltModified()\0obj\0sltEditorDestroyed(QObject*)\0"
};

void VariableArrayElementEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VariableArrayElementEditor *_t = static_cast<VariableArrayElementEditor *>(_o);
        switch (_id) {
        case 0: _t->sltAdd(); break;
        case 1: _t->sltDelete(); break;
        case 2: _t->sltItemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->sltModified(); break;
        case 4: _t->sltEditorDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VariableArrayElementEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VariableArrayElementEditor::staticMetaObject = {
    { &ElementEditor::staticMetaObject, qt_meta_stringdata_VariableArrayElementEditor,
      qt_meta_data_VariableArrayElementEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VariableArrayElementEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VariableArrayElementEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VariableArrayElementEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VariableArrayElementEditor))
        return static_cast<void*>(const_cast< VariableArrayElementEditor*>(this));
    return ElementEditor::qt_metacast(_clname);
}

int VariableArrayElementEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ElementEditor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
