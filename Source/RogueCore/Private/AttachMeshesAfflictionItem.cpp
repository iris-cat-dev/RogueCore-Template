#include "AttachMeshesAfflictionItem.h"

FAttachMeshesAfflictionItem::FAttachMeshesAfflictionItem() {
    this->SkeletalMesh = nullptr;
    this->StaticMesh = nullptr;
    this->Animation = nullptr;
    this->Scale = 0.00f;
    this->AttachType = ECharacterMesh;
    this->LoopAnimation = false;
    this->RandomRotaiton = false;
    this->RandomScale = false;
    this->CastShadows = false;
    this->Offset = FVector::ZeroVector;
    this->Rotation = FRotator::ZeroRotator;
    this->BoneName = FName();
}

