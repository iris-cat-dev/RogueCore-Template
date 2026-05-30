#include "Example01Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Example01ActorComponent.h"
#include "Net/UnrealNetwork.h"

AExample01Actor::AExample01Actor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootComponent"));
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->ExampleComponent = CreateDefaultSubobject<UExample01ActorComponent>(TEXT("ExampleComponent"));
    this->mesh = nullptr;
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}

void AExample01Actor::TargetChangedCallback(AActor* NewTarget) {
}

void AExample01Actor::SetTarget(AActor* NewTarget) {
}

void AExample01Actor::SetMesh(UStaticMesh* NewMesh) {
}

void AExample01Actor::OnRep_Mesh() {
}

void AExample01Actor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AExample01Actor, mesh);
}


