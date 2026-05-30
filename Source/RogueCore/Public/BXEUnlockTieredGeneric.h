#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockGenericBase.h"
#include "BXEUnlockTier.h"
#include "BXEUnlockTieredGeneric.generated.h"

class UBXEUnlockRarity;
class UWeaponTagBase;

UCLASS(Blueprintable)
class UBXEUnlockTieredGeneric : public UBXEUnlockGenericBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UBXEUnlockRarity*, FBXEUnlockTier> TieredUnlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWeaponTagBase*> WeaponTagCache;
    
public:
    UBXEUnlockTieredGeneric();

    UFUNCTION(BlueprintCallable)
    TArray<UBXEUnlockRarity*> GetAvailableRarities();
    
};

