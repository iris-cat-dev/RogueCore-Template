#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PlayerReviveLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class UPlayerReviveLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayerReviveLibrary();

    UFUNCTION(BlueprintCallable)
    static bool MoveActorToDeadPlayerFallbackPosition(AActor* ActorToMove);
    
};

