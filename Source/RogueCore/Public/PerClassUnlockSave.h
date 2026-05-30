#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PerClassUnlockSave.generated.h"

USTRUCT(BlueprintType)
struct FPerClassUnlockSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid CosmeticSheetSaveGameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PlayerCharacterID;
    
    ROGUECORE_API FPerClassUnlockSave();

    bool operator==(const FPerClassUnlockSave& Other) const
    {
        return true;
    }
};

// Hash function (must be in the same namespace as the struct)
FORCEINLINE uint32 GetTypeHash(const FPerClassUnlockSave& Struct)
{
    return 0;
}