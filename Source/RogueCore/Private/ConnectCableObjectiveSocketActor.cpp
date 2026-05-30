#include "ConnectCableObjectiveSocketActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Net/UnrealNetwork.h"

AConnectCableObjectiveSocketActor::AConnectCableObjectiveSocketActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->IsDisabled = false;
    this->Root = (USceneComponent*)RootComponent;
    this->SocketMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SocketMesh"));
    this->FuelLineEndPoint = CreateDefaultSubobject<UChildActorComponent>(TEXT("FuelLineEndPoint"));
    this->FuelLineEndPoint->SetupAttachment(SocketMesh);
    this->SocketMesh->SetupAttachment(RootComponent);
}


void AConnectCableObjectiveSocketActor::OnConnectedWithSegment(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment) {
}


void AConnectCableObjectiveSocketActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AConnectCableObjectiveSocketActor, IsDisabled);
}


