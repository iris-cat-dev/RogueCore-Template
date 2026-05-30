#include "GeneratorLine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SplineComponent.h"
#include "Net/UnrealNetwork.h"
#include "SplineDecoratorComponent.h"

AGeneratorLine::AGeneratorLine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_DormantAll;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->SplineDecorator = CreateDefaultSubobject<USplineDecoratorComponent>(TEXT("SplineDecorator"));
    this->MeshInstance = nullptr;
    this->HeightOffsetMin = -100.00f;
    this->HeightOffsetMax = 100.00f;
    this->MaxSegmentLength = 1000.00f;
    this->CarveRadius = 50.00f;
    this->SnapDirection = ESnapToDirection::Top;
    this->Connected = true;
    this->DecoratorLightMaterialSlot = 1;
    this->SplineComponent->SetupAttachment(RootComponent);
    this->SplineDecorator->SetupAttachment(RootComponent);
}

void AGeneratorLine::SetConnected(bool InConnected) {
}

void AGeneratorLine::OnRep_Path() {
}

void AGeneratorLine::OnRep_Connected() {
}

void AGeneratorLine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGeneratorLine, ReplicatedPath);
    DOREPLIFETIME(AGeneratorLine, Connected);
}


