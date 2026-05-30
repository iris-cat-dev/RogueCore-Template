#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ConnectCableObjectiveSocketActor.generated.h"

class ATrackBuilderSegment;
class UChildActorComponent;
class USceneComponent;
class UStaticMeshComponent;
class UTrackBuilderConnectPoint;

UCLASS(Blueprintable)
class ROGUECORE_API AConnectCableObjectiveSocketActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SocketMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* FuelLineEndPoint;
    
public:
    AConnectCableObjectiveSocketActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisabled();
    
    UFUNCTION(BlueprintCallable)
    void OnConnectedWithSegment(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCableConnected();
    
};

