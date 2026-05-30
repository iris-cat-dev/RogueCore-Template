#include "TentaclePlantNode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Net/UnrealNetwork.h"

ATentaclePlantNode::ATentaclePlantNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mesh"));
    this->TentacleCableType = nullptr;
    this->TentacleCable = nullptr;
    this->TentaclePlant = nullptr;
    this->TentacleIndex = -1;
    this->mesh->SetupAttachment(RootComponent);
}

void ATentaclePlantNode::OnPathCompleted(bool wasCompleted) {
}

void ATentaclePlantNode::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATentaclePlantNode, TentaclePlant);
    DOREPLIFETIME(ATentaclePlantNode, TentacleIndex);
}


