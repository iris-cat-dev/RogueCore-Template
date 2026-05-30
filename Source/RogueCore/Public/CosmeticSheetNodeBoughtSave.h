#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "CosmeticSheetNodeBoughtSave.generated.h"

USTRUCT(BlueprintType)
struct FCosmeticSheetNodeBoughtSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid CosmeticSheetSaveGameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodeID;
    
    ROGUECORE_API FCosmeticSheetNodeBoughtSave();

    bool operator==(const FCosmeticSheetNodeBoughtSave& Other) const
    {
        return true;
    }

};
// Hash function (must be in the same namespace as the struct)
FORCEINLINE uint32 GetTypeHash(const FCosmeticSheetNodeBoughtSave& Struct)
{
    return 0;
}
