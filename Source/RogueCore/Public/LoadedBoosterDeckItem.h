#pragma once
#include "CoreMinimal.h"
#include "LoadedBoosterDeckItem.generated.h"

class UBioBoosterDeck;

USTRUCT(BlueprintType)
struct FLoadedBoosterDeckItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBioBoosterDeck* Deck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReplaceIndex;
    
    ROGUECORE_API FLoadedBoosterDeckItem();
};

