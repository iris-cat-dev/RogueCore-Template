#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CrossbowProjectileControlled.generated.h"

class ACrossbowProjectileBase;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UCrossbowProjectileControlled : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* HomingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACrossbowProjectileBase* CastedOwner;
    
public:
    UCrossbowProjectileControlled(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UpdateHomingTarget();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UpdateHomingTarget(const FVector& Target);
    
    UFUNCTION(BlueprintCallable)
    void CancelControl();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_UpdateHomingTarget(const FVector& Target);
    
};

