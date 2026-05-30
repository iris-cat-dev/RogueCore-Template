#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PloverAttachmentComponent.generated.h"

class AFSDPawn;
class UPloverTargetSockets;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UPloverAttachmentComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AttachTarget, meta=(AllowPrivateAccess=true))
    AFSDPawn* AttachTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPloverTargetSockets* AttachementSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetAttachDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
public:
    UPloverAttachmentComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_AttachTarget();
    
    UFUNCTION(BlueprintCallable)
    bool GetAttachLocation(AFSDPawn* Target);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool AttachToTarget(AFSDPawn* Target);
    
};

