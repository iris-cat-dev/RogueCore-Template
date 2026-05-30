#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "AbilityItemAnimInstance.generated.h"

class AAbilityItem;

UCLASS(Blueprintable, NonTransient)
class UAbilityItemAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEqupped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsAbilityAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAbilityItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShowRoomIdleBreak;
    
public:
    UAbilityItemAnimInstance();

    UFUNCTION(BlueprintCallable)
    void OnUnequipped();
    
    UFUNCTION(BlueprintCallable)
    void OnEquipped();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInShowRoom() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EquippedAndAvailable() const;
    
};

