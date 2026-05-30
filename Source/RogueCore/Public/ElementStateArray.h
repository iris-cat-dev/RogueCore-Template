#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "ElementState.h"
#include "ElementStateArray.generated.h"

class UElementComponent;
class UElementType;

USTRUCT(BlueprintType)
struct FElementStateArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UElementComponent* Owner;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FElementState> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TMap<UElementType*, int32> StateIndexLookup;
    
public:
    ROGUECORE_API FElementStateArray();
};

