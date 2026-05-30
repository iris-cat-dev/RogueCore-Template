#pragma once
#include "CoreMinimal.h"
#include "GDElementTypes.generated.h"

class UElementType;

USTRUCT(BlueprintType)
struct FGDElementTypes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UElementType*> ElementTypes;
    
    ROGUECORE_API FGDElementTypes();
};

