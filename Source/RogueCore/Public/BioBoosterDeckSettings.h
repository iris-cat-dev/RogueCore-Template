#pragma once
#include "CoreMinimal.h"
#include "BioBoosterDecks.h"
#include "BioBoosterDeckSettings.generated.h"

class UPlayerCharacterID;

USTRUCT(BlueprintType)
struct FBioBoosterDeckSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPlayerCharacterID*, FBioBoosterDecks> DefaultDecks;
    
    ROGUECORE_API FBioBoosterDeckSettings();
};

