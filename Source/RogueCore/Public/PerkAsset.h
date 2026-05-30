#pragma once
#include "CoreMinimal.h"
#include "CoolDownProgressStyle.h"
#include "EPerkHUDActivationLocation.h"
#include "EPerkUsageType.h"
#include "PerkEffectItem.h"
#include "SavableDataAsset.h"
#include "Templates/SubclassOf.h"
#include "PerkAsset.generated.h"

class APlayerController;
class UDialogDataAsset;
class UFileMediaSource;
class UObject;
class UPerkActivationWidget;
class UPerkHUDIconWidget;
class UPerkLogic;
class UPlayerCharacterID;
class UTexture2D;

UCLASS(Blueprintable)
class ROGUECORE_API UPerkAsset : public USavableDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFileMediaSource> MediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerRequiredLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnhancementPointCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UPerkLogic>> LogicClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPerkEffectItem> effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxUseCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutOnUseCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDownBetweenUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoolDownProgressStyle CooldownUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPerkHUDIconWidget> HudIconWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UPerkActivationWidget>> HudActivationWidgets;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsHighlighted;
    
public:
    UPerkAsset();

    UFUNCTION(BlueprintCallable)
    bool UseCharge(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool Unequip(UObject* WorldContext, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void SetHighlighted(UObject* WorldContext, bool IsHighlighted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsageType(const EPerkUsageType InType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPerkUsageType GetUsageType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDialogDataAsset* GetShoutOnUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerRequiredLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxUses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UPerkHUDIconWidget> GetHudIconWidgetClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UPerkActivationWidget>> GetHudActivationWidgets(EPerkHUDActivationLocation Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescriptionAt(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCoolDownProgressStyle GetCooldownUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldown() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool Equip(UObject* WorldContext, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseCharge(APlayerController* PlayerController) const;
    
};

