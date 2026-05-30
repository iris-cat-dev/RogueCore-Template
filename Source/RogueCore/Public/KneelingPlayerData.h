#pragma once
#include "CoreMinimal.h"
#include "KneelingPlayerData.generated.h"

class APlayerCharacter;
class USceneComponent;

USTRUCT(BlueprintType)
struct FKneelingPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> Placement;
    
    ROGUECORE_API FKneelingPlayerData();
};

