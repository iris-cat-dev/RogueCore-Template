#pragma once
#include "CoreMinimal.h"
#include "EProductionStatus.h"
#include "EUnlockType.h"
#include "SavablePrimaryDataAsset.h"
#include "BXEUnlockBase.generated.h"

class UBXEAttributeUnlock;
class UBXEUnlockAttributeWeightPool;
class UBXEUnlockCategory;
class UBXEUnlockConditionBase;
class UBXEUnlockRarity;
class UDialogDataAsset;
class UTexture2D;
class UUnlockVisualSettings;
class UWeaponTagBase;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API UBXEUnlockBase : public USavablePrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBXEUnlockCategory*> Categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBXEUnlockConditionBase*> SelectionConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UnlockUsesRandomRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutNegotiationSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEUnlockRarity* DefaultRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnlockVisualSettings* VisualSettingsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEUnlockAttributeWeightPool* AttributeCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBXEAttributeUnlock*> AlwaysAppliedAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditionalAttributeAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnlockType UnlockType;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProductionStatus LogicStatus;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProductionStatus ParticleStatus;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProductionStatus SoundStatus;
    
public:
    UBXEUnlockBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUnlockVisualSettings* GetVisualSettings(UBXEUnlockRarity* InRarity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUnlockType GetUnlockType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UWeaponTagBase*> GetRelatedWeaponTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFunctionalDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBXEUnlockAttributeWeightPool* GetAttributeCollection();
    
};

