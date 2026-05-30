#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "UnlockableItemSave.generated.h"

USTRUCT(BlueprintType)
struct FUnlockableItemSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> Unlocked;
    
public:
    ROGUECORE_API FUnlockableItemSave();
};

