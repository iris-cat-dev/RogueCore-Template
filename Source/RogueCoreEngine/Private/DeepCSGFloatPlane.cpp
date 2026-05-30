#include "DeepCSGFloatPlane.h"

FDeepCSGFloatPlane::FDeepCSGFloatPlane() {
    this->Plane = FVector4f();
    this->Top = FDeepCSGNode();
    this->Bottom = FDeepCSGNode();
}

