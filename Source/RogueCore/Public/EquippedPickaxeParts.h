#pragma once
#include "CoreMinimal.h"
#include "EPickaxePartLocation.h"
#include "EquippedPickaxeParts.generated.h"

class UPickaxePart;

USTRUCT(BlueprintType)
struct FEquippedPickaxeParts {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPickaxePartLocation> Locations;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UPickaxePart>> Parts;
    
public:
    ROGUECORE_API FEquippedPickaxeParts();
};

