#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Templates/SubclassOf.h"
#include "FuelLineEndPoint.generated.h"

class AFuelLineSegment;
class ATrackBuilderSegment;
class UFuelLineConnectPoint;
class UStaticMeshComponent;
class UTrackBuilderConnectPoint;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API AFuelLineEndPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFuelLineConnectPoint* ConnectPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFuelLineSegment> AllowedSegment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool OpenForConnection;
    
public:
    AFuelLineEndPoint(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetOpenForConnection(bool Open);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePing(bool InValidPlacement);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenForConnection() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CallbackConnectedWithSegment(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment);
    
};

