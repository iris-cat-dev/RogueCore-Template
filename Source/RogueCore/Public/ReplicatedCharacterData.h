#pragma once
#include "CoreMinimal.h"
#include "ReplicatedCharacterData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FReplicatedCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanTakeDamage;
    
    ROGUECORE_API FReplicatedCharacterData();
};

