#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "PerkSubsystem.generated.h"

class UPerkAsset;
class UPerkDelegateItem;

UCLASS(Blueprintable)
class ROGUECORE_API UPerkSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UPerkAsset*, UPerkDelegateItem*> PerkDelegates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPerkAsset*> Enhancements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPerkAsset*> EnhancementsMap;
    
public:
    UPerkSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPerkDelegateItem* GetPerkDelegates(UPerkAsset* Perk);
    
};

