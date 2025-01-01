// /qt-project.org/imports/QtQuick/Studio/LogicHelper/RangeMapper.qml
#include <QtQml/qqmlprivate.h>
#include <QtCore/qdatetime.h>
#include <QtCore/qobject.h>
#include <QtCore/qstring.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qurl.h>
#include <QtCore/qvariant.h>
#include <QtQml/qjsengine.h>
#include <QtQml/qjsprimitivevalue.h>
#include <QtQml/qjsvalue.h>
#include <QtQml/qqmlcomponent.h>
#include <QtQml/qqmlcontext.h>
#include <QtQml/qqmlengine.h>
#include <type_traits>
namespace QmlCacheGeneratedCode {
namespace _qt_0x2d_project_0x2e_org_imports_QtQuick_Studio_LogicHelper_RangeMapper_qml {
extern const unsigned char qmlData alignas(16) [];
extern const unsigned char qmlData alignas(16) [] = {

0x71,0x76,0x34,0x63,0x64,0x61,0x74,0x61,
0x36,0x0,0x0,0x0,0x2,0x4,0x6,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x98,0x4,0x0,0x0,0x31,0x63,0x33,0x61,
0x65,0x34,0x64,0x38,0x62,0x38,0x63,0x30,
0x35,0x63,0x30,0x31,0x32,0x32,0x31,0x37,
0x62,0x34,0x64,0x64,0x62,0x61,0x38,0x62,
0x30,0x34,0x65,0x38,0x35,0x65,0x37,0x64,
0x66,0x33,0x62,0x31,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1d,0xf0,0x67,0xf2,
0xd4,0xaf,0x5a,0x46,0xa3,0x88,0x98,0xf1,
0x5a,0x8d,0xc,0xf9,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x23,0x0,0x0,0x0,
0xb,0x0,0x0,0x0,0xe8,0x1,0x0,0x0,
0x1,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xfc,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xfc,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xfc,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0xfc,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x34,0x1,0x0,0x0,
0x2,0x0,0x0,0x0,0x40,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x50,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x50,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x50,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x50,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x50,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x50,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x50,0x1,0x0,0x0,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x40,0x3,0x0,0x0,
0x50,0x1,0x0,0x0,0x33,0x0,0x0,0x0,
0xa0,0x0,0x0,0x0,0x33,0x0,0x0,0x0,
0x90,0x0,0x0,0x0,0x33,0x0,0x0,0x0,
0x80,0x0,0x0,0x0,0x33,0x0,0x0,0x0,
0x70,0x0,0x0,0x0,0x33,0x0,0x0,0x0,
0x90,0x0,0x0,0x0,0x33,0x0,0x0,0x0,
0x40,0x0,0x0,0x0,0x33,0x0,0x0,0x0,
0x70,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xfc,0xff,
0x0,0x0,0x0,0x0,0x0,0x0,0xa5,0xbf,
0x50,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0xff,0xff,0xff,0xff,0xb,0x0,0x0,0x0,
0x5a,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x8,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x5b,0x0,0x0,0x0,
0x1e,0x0,0x0,0x0,0x5c,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x5d,0x0,0x0,0x0,
0x2e,0x0,0x3c,0x1,0x18,0x8,0x2e,0x2,
0x3c,0x3,0xa2,0x8,0x18,0x9,0x2e,0x4,
0x3c,0x5,0x18,0xa,0x2e,0x6,0x3c,0x7,
0xa2,0xa,0x9e,0x9,0x18,0x7,0x2e,0x8,
0x3c,0x9,0x18,0x8,0x1a,0x7,0x9,0x2e,
0xa,0x3c,0xb,0x18,0xa,0x2e,0xc,0x3c,
0xd,0xa2,0xa,0x9c,0x9,0x80,0x8,0x2,
0x16,0x6,0x2,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x18,0x2,0x0,0x0,0x20,0x2,0x0,0x0,
0x38,0x2,0x0,0x0,0x50,0x2,0x0,0x0,
0x68,0x2,0x0,0x0,0x78,0x2,0x0,0x0,
0x90,0x2,0x0,0x0,0xc0,0x2,0x0,0x0,
0xe0,0x2,0x0,0x0,0x0,0x3,0x0,0x0,
0x20,0x3,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x51,0x0,0x75,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x4f,0x0,0x62,0x0,0x6a,0x0,0x65,0x0,
0x63,0x0,0x74,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x6f,0x0,0x62,0x0,
0x6a,0x0,0x65,0x0,0x63,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x69,0x0,0x6e,0x0,
0x70,0x0,0x75,0x0,0x74,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x6f,0x0,0x75,0x0,
0x74,0x0,0x70,0x0,0x75,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x15,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x6f,0x0,0x75,0x0,0x74,0x0,
0x70,0x0,0x75,0x0,0x74,0x0,0x0,0x0,
0xc,0x0,0x0,0x0,0x69,0x0,0x6e,0x0,
0x70,0x0,0x75,0x0,0x74,0x0,0x4d,0x0,
0x69,0x0,0x6e,0x0,0x69,0x0,0x6d,0x0,
0x75,0x0,0x6d,0x0,0x0,0x0,0x0,0x0,
0xc,0x0,0x0,0x0,0x69,0x0,0x6e,0x0,
0x70,0x0,0x75,0x0,0x74,0x0,0x4d,0x0,
0x61,0x0,0x78,0x0,0x69,0x0,0x6d,0x0,
0x75,0x0,0x6d,0x0,0x0,0x0,0x0,0x0,
0xd,0x0,0x0,0x0,0x6f,0x0,0x75,0x0,
0x74,0x0,0x70,0x0,0x75,0x0,0x74,0x0,
0x4d,0x0,0x69,0x0,0x6e,0x0,0x69,0x0,
0x6d,0x0,0x75,0x0,0x6d,0x0,0x0,0x0,
0xd,0x0,0x0,0x0,0x6f,0x0,0x75,0x0,
0x74,0x0,0x70,0x0,0x75,0x0,0x74,0x0,
0x4d,0x0,0x61,0x0,0x78,0x0,0x69,0x0,
0x6d,0x0,0x75,0x0,0x6d,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x24,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1e,0x0,0x10,0x0,
0xa,0x2,0x0,0x0,0x28,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x3,0x0,0x0,0x0,
0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,
0x0,0x0,0x6,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x9c,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x9c,0x0,0x0,0x0,
0x9c,0x0,0x0,0x0,0x0,0x0,0x6,0x0,
0x9c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2c,0x1,0x0,0x0,0x4f,0x0,0x10,0x0,
0x50,0x0,0x50,0x0,0x2c,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x2c,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x0,
0x3,0x0,0x0,0x20,0x55,0x0,0x50,0x0,
0x5,0x0,0x0,0x0,0x3,0x0,0x0,0x20,
0x5a,0x0,0x50,0x0,0x7,0x0,0x0,0x0,
0x3,0x0,0x0,0x20,0x62,0x0,0x50,0x0,
0x8,0x0,0x0,0x0,0x3,0x0,0x0,0x20,
0x67,0x0,0x50,0x0,0x9,0x0,0x0,0x0,
0x3,0x0,0x0,0x20,0x6c,0x0,0x50,0x0,
0xa,0x0,0x0,0x0,0x3,0x0,0x0,0x20,
0x71,0x0,0x50,0x0,0xa,0x0,0x0,0x0,
0x0,0x0,0x2,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x71,0x0,0x30,0x1,
0x71,0x0,0x20,0x2,0x9,0x0,0x0,0x0,
0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x6c,0x0,0x30,0x1,
0x6c,0x0,0x20,0x2,0x8,0x0,0x0,0x0,
0x0,0x0,0x2,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x67,0x0,0x30,0x1,
0x67,0x0,0x10,0x2,0x7,0x0,0x0,0x0,
0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x62,0x0,0x30,0x1,
0x62,0x0,0x10,0x2,0x5,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x5a,0x0,0x30,0x1,
0x5a,0x0,0xb0,0x1,0x4,0x0,0x0,0x0,
0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x55,0x0,0x30,0x1,
0x55,0x0,0xa0,0x1,0x0,0x0,0x0,0x0
};
QT_WARNING_PUSH
QT_WARNING_DISABLE_MSVC(4573)

template <typename Binding>
void wrapCall(const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr, Binding &&binding)
{
    using return_type = std::invoke_result_t<Binding, const QQmlPrivate::AOTCompiledContext *, void **>;
    if constexpr (std::is_same_v<return_type, void>) {
       Q_UNUSED(dataPtr)
       binding(aotContext, argumentsPtr);
    } else {
        if (dataPtr) {
           new (dataPtr) return_type(binding(aotContext, argumentsPtr));
        } else {
           binding(aotContext, argumentsPtr);
        }
    }
}
extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[] = {
{ 0, QMetaType::fromType<double>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
double r9_1;
double r7_1;
double r8_1;
double r2_2;
QObject *r2_1;
double r10_1;
// var slope = (object.outputMaximum - object.outputMinimum) / (object.inputMaximum - object.inputMinimum)
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadContextIdLookup(0, &r2_1)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadContextIdLookup(0);
if (aotContext->engine->hasError())
    return double();
}
// generate_GetLookup
while (!aotContext->getObjectLookup(1, r2_1, &r2_2)) {
aotContext->setInstructionPointer(4);
aotContext->initGetObjectLookup(1, r2_1, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return double();
}
// generate_StoreReg
r8_1 = r2_2;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadContextIdLookup(2, &r2_1)) {
aotContext->setInstructionPointer(8);
aotContext->initLoadContextIdLookup(2);
if (aotContext->engine->hasError())
    return double();
}
// generate_GetLookup
while (!aotContext->getObjectLookup(3, r2_1, &r2_2)) {
aotContext->setInstructionPointer(10);
aotContext->initGetObjectLookup(3, r2_1, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return double();
}
// generate_Sub
r2_2 = (r8_1 - r2_2);
// generate_StoreReg
r9_1 = r2_2;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadContextIdLookup(4, &r2_1)) {
aotContext->setInstructionPointer(16);
aotContext->initLoadContextIdLookup(4);
if (aotContext->engine->hasError())
    return double();
}
// generate_GetLookup
while (!aotContext->getObjectLookup(5, r2_1, &r2_2)) {
aotContext->setInstructionPointer(18);
aotContext->initGetObjectLookup(5, r2_1, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return double();
}
// generate_StoreReg
r10_1 = r2_2;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadContextIdLookup(6, &r2_1)) {
aotContext->setInstructionPointer(22);
aotContext->initLoadContextIdLookup(6);
if (aotContext->engine->hasError())
    return double();
}
// generate_GetLookup
while (!aotContext->getObjectLookup(7, r2_1, &r2_2)) {
aotContext->setInstructionPointer(24);
aotContext->initGetObjectLookup(7, r2_1, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return double();
}
// generate_Sub
r2_2 = (r10_1 - r2_2);
// generate_Div
r2_2 = (r9_1 / r2_2);
// generate_StoreReg
r7_1 = r2_2;
// return object.outputMinimum + slope * (object.input - object.inputMinimum)
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadContextIdLookup(8, &r2_1)) {
aotContext->setInstructionPointer(32);
aotContext->initLoadContextIdLookup(8);
if (aotContext->engine->hasError())
    return double();
}
// generate_GetLookup
while (!aotContext->getObjectLookup(9, r2_1, &r2_2)) {
aotContext->setInstructionPointer(34);
aotContext->initGetObjectLookup(9, r2_1, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return double();
}
// generate_StoreReg
r8_1 = r2_2;
// generate_MoveReg
r9_1 = r7_1;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadContextIdLookup(10, &r2_1)) {
aotContext->setInstructionPointer(41);
aotContext->initLoadContextIdLookup(10);
if (aotContext->engine->hasError())
    return double();
}
// generate_GetLookup
while (!aotContext->getObjectLookup(11, r2_1, &r2_2)) {
aotContext->setInstructionPointer(43);
aotContext->initGetObjectLookup(11, r2_1, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return double();
}
// generate_StoreReg
r10_1 = r2_2;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadContextIdLookup(12, &r2_1)) {
aotContext->setInstructionPointer(47);
aotContext->initLoadContextIdLookup(12);
if (aotContext->engine->hasError())
    return double();
}
// generate_GetLookup
while (!aotContext->getObjectLookup(13, r2_1, &r2_2)) {
aotContext->setInstructionPointer(49);
aotContext->initGetObjectLookup(13, r2_1, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return double();
}
// generate_Sub
r2_2 = (r10_1 - r2_2);
// generate_Mul
r2_2 = (r9_1 * r2_2);
// generate_Add
r2_2 = (r8_1 + r2_2);
// generate_Ret
return r2_2;
});}
 },{ 0, QMetaType::fromType<void>(), {}, nullptr }};
QT_WARNING_POP
}
}