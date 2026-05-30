#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UnlockableItemData.h"
#include "WeaponOverviewAttribute.h"
#include "CharacterBuildDataUtil.generated.h"

class UBXEUnlockBase;

UCLASS(Blueprintable)
class ROGUECORE_API UCharacterBuildDataUtil : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UBXEUnlockBase*> AllUnlocks;
    
public:
    UCharacterBuildDataUtil();

    UFUNCTION(BlueprintCallable)
    static void GetWeaponOverviewAttributes(const FUnlockableItemData& Item, TArray<FWeaponOverviewAttribute>& OutAttributes);
    
};

