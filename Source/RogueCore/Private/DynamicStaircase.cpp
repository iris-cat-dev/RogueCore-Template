#include "DynamicStaircase.h"
#include "Components/BoxComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Net/UnrealNetwork.h"
#include "PathfinderCollisionComponent.h"
#include "Components/InstancedStaticMeshComponent.h"

ADynamicStaircase::ADynamicStaircase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->Root = static_cast<USceneComponent*>(RootComponent);
    this->StairBody = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("StairBodyComp"));
    this->TopSegmentMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TopSegmentComp"));
    this->BottomSegmentMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BottomSegmentComp"));
    this->PathfinderCollision = CreateDefaultSubobject<UPathfinderCollisionComponent>(TEXT("PathfinderCollisionComp"));
    this->BlockingPathfinderCollision = CreateDefaultSubobject<UPathfinderCollisionComponent>(TEXT("BlockingPathfinderCollisionComp"));
    this->StairCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("PlayerCollision"));
    this->PreviewStairIndex = 0;
    this->PreviewStairLenght = -1.00f;
    this->CollisionOffset = 0.00f;
    this->SelectedStairVersion = -1;
    this->BlockingPathfinderCollision->SetupAttachment(RootComponent);
    this->BottomSegmentMesh->SetupAttachment(RootComponent);
    this->PathfinderCollision->SetupAttachment(RootComponent);
    this->StairBody->SetupAttachment(RootComponent);
    this->StairCollision->SetupAttachment(RootComponent);
    this->TopSegmentMesh->SetupAttachment(RootComponent);
}

void ADynamicStaircase::WaitForSetup() {
}

void ADynamicStaircase::OnRep_StairData() {
}

void ADynamicStaircase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADynamicStaircase, StairData);
}


