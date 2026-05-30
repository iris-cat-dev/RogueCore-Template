#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "DualAbilityItem.h"
#include "Templates/SubclassOf.h"
#include "GuardianAbilityItem.generated.h"

class AActor;
class AAuraBubble;
class UAnimMontage;
class UDialogDataAsset;
class UPerkAsset;

UCLASS(Blueprintable)
class ROGUECORE_API AGuardianAbilityItem : public ADualAbilityItem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGuardianAbilityItemDelegate);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPerkAsset* RequiredPerkToRepelEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* QuickUseShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* AuraShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SalvoActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> AuraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> SalvoInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AAuraBubble> AuraInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Item_QuickUseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Item_SecondaryQuickUseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Item_AuraUseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Item_SecondaryAuraUseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_QuickUseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_QuickUseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_AuraUseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_AuraUseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AruaDurationPerCharge;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuardianAbilityItemDelegate OnAuraActiveChanged;
    
public:
    AGuardianAbilityItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_ToggleAura(bool Active, FVector_NetQuantize Origin, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_QuickUse(FVector_NetQuantize Origin, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAuraAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAuraActive() const;
    
    UFUNCTION(BlueprintCallable)
    void DrainTick();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanActivateAura() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void AnimationPlayed();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ToggleAura(bool Active, FVector_NetQuantize Origin, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_QuickUse(FVector_NetQuantize Origin, FRotator Rotation);
    
};

