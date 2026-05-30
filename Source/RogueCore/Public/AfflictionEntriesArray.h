#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "AfflictionEntry.h"
#include "AfflictionEntriesArray.generated.h"

class UPawnAfflictionComponent;

USTRUCT(BlueprintType)
struct FAfflictionEntriesArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAfflictionEntry> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UPawnAfflictionComponent* Owner;
    
    ROGUECORE_API FAfflictionEntriesArray();
};

