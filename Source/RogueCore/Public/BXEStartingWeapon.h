#pragma once
#include "CoreMinimal.h"
#include "BXEStartingWeaponMissionStats.h"
#include "EUnlockableState.h"
#include "SavableDataAsset.h"
#include "UnlockableObject.h"
#include "BXEStartingWeapon.generated.h"

class UBXEChallenge;
class UBXEUnlockItem;
class UItemData;
class UItemID;
class UObject;

UCLASS(Blueprintable)
class ROGUECORE_API UBXEStartingWeapon : public USavableDataAsset, public IUnlockableObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEUnlockItem* UnlockAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEChallenge* UnlockChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXEStartingWeaponMissionStats MissionStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemID* LoadedItemID;
    
public:
    UBXEStartingWeapon();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetWeaponName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetWeaponDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    FText GetUnlockChallengeText(const UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBXEChallenge* GetUnlockChallenge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBXEUnlockItem* GetUnlockAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemID* GetItemID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemData* GetItemData() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool Equip(const UObject* WorldContext);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    virtual bool Unlock(const UObject* WorldContext) override PURE_VIRTUAL(Unlock, return false;);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    virtual TEnumAsByte<EUnlockableState> GetUnlockableState(const UObject* WorldContext) const override PURE_VIRTUAL(GetUnlockableState, return Unlockable;);
    
};

