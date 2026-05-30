#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DamageListener.h"
#include "BXELogicUnlockComponent.generated.h"

class APlayerCharacter;
class UWeaponTagBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBXELogicUnlockComponent : public UActorComponent, public IDamageListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Stacks, meta=(AllowPrivateAccess=true))
    TArray<float> Stacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWeaponTagBase*> ListensForTags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 DamageListenerProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TriggerBlueprintEvents;
    
public:
    UBXELogicUnlockComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void Receive_InitializeUnlockLogic();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void Receive_ClearUnlockForDestroy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_AddStack(float newStack);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Stacks();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalUpgradeValueMultiplied() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalUpgradeValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClampedUpgradeValue(float Previous) const;
    

    // Fix for true pure virtual functions not being implemented
};

