#pragma once
#include "CoreMinimal.h"
#include "EFilterType.h"
#include "EnemyFilter.generated.h"

class UEnemyDescriptor;

USTRUCT(BlueprintType)
struct FEnemyFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyDescriptor*> FilteredEnemies;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFilterType FilterType;
    
public:
    ROGUECORE_API FEnemyFilter();
};

