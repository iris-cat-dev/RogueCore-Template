#pragma once
#include "CoreMinimal.h"
#include "PlayerCharacter.h"
#include "MockPlayerCharacter.generated.h"

UCLASS(Blueprintable)
class AMockPlayerCharacter : public APlayerCharacter {
    GENERATED_BODY()
public:
    AMockPlayerCharacter(const FObjectInitializer& ObjectInitializer);

};

