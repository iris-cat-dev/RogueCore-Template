#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EnhancementClaimEntry.generated.h"

USTRUCT(BlueprintType)
struct FEnhancementClaimEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid EnhancementID;
    
    ROGUECORE_API FEnhancementClaimEntry();
};

