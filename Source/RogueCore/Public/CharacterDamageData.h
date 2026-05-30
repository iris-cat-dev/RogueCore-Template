#pragma once
#include "CoreMinimal.h"
#include "ActorDamageCollection.h"
#include "CharacterDamageData.generated.h"

USTRUCT(BlueprintType)
struct ROGUECORE_API FCharacterDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorDamageCollection> EnemyDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorDamageCollection> PlayerDamage;
    
    FCharacterDamageData();
};

