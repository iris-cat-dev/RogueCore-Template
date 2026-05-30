#pragma once
#include "CoreMinimal.h"
#include "BioBoosterDecks.generated.h"

class UBioBoosterDeck;

USTRUCT(BlueprintType)
struct FBioBoosterDecks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBioBoosterDeck*> BioBoosterDecks;
    
    ROGUECORE_API FBioBoosterDecks();
};

