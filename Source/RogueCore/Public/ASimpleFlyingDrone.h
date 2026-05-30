#pragma once
#include "CoreMinimal.h"
#include "DeepPathfinderCharacter.h"
#include "NetMontageAble.h"
#include "ASimpleFlyingDrone.generated.h"

class UAnimInstance;
class UAnimMontage;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ROGUECORE_API AASimpleFlyingDrone : public ADeepPathfinderCharacter, public INetMontageAble {
    GENERATED_BODY()
public:
    AASimpleFlyingDrone(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    virtual float QueueMontage(UAnimMontage* Montage) override PURE_VIRTUAL(QueueMontage, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual USkeletalMeshComponent* GetSkeletalMesh() const override PURE_VIRTUAL(GetSkeletalMesh, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual UAnimInstance* GetAnimInstance() const override PURE_VIRTUAL(GetAnimInstance, return NULL;);
    
};

