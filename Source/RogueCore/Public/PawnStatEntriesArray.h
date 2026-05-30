#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PawnStatEntry.h"
#include "PawnStatEntriesArray.generated.h"

class UPawnStatsComponent;

USTRUCT(BlueprintType)
struct FPawnStatEntriesArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPawnStatEntry> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UPawnStatsComponent* Owner;
    
    ROGUECORE_API FPawnStatEntriesArray();
};

