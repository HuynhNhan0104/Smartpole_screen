/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#include <serialObserver.h>


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_smartpole_screen()
{
    qmlRegisterTypesAndRevisions<SerialObserver>("smartpole_screen", 1);
    qmlRegisterModule("smartpole_screen", 1, 0);
}

static const QQmlModuleRegistration smartpolescreenRegistration("smartpole_screen", qml_register_types_smartpole_screen);
