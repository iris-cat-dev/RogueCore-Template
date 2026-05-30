#include "RotateToFace.h"

URotateToFace::URotateToFace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Target = nullptr;
    this->Face = 1;
}

void URotateToFace::SetTarget(AActor* NewTarget) {
}

void URotateToFace::SetShouldFaceAway(bool FaceAway) {
}


