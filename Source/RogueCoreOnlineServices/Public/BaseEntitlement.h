#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreUtils -ObjectName=AquisitionSource -FallbackName=AquisitionSource
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreUtils -ObjectName=SaveGameIDInterface -FallbackName=SaveGameIDInterface
#include "AquisitionSource.h"
#include "OnEntitlementStateChangedDelegate.h"
#include "SaveGameIDInterface.h"
#include "BaseEntitlement.generated.h"

class IEntitlementRewardPool;
class UEntitlementRewardPool;
class UBuildRestriction;
class UEntitlementSubsystem;

UCLASS(Abstract, Blueprintable)
class ROGUECOREONLINESERVICES_API UBaseEntitlement : public UDataAsset, public ISaveGameIDInterface, public IAquisitionSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOneTimeUse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEntitlementStateChanged OnUnlockStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFakeUnlockedStateInEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEditorUnlockedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBuildRestriction* RestrictedToPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IEntitlementRewardPool> EntitlementRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AquisitionSourceTag;
    
public:
    UBaseEntitlement();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnLocked() const;
    
    UFUNCTION(BlueprintCallable)
    void CheckIfUnlockConditionIsMet(UEntitlementSubsystem* EntitlementSubsystem);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    virtual FGameplayTag GetAquisitionSourceTag() const override PURE_VIRTUAL(GetAquisitionSourceTag, return FGameplayTag{};);
    
};

