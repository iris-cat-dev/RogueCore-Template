#pragma once
#include "CoreMinimal.h"
#include "ParsedActorDamageCollection.h"
#include "ParsedCharacterDamageData.generated.h"

USTRUCT(BlueprintType)
struct ROGUECORE_API FParsedCharacterDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FParsedActorDamageCollection> EnemyDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FParsedActorDamageCollection> PlayerDamage;
    
    FParsedCharacterDamageData();
};

