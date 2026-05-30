#pragma once
#include "CoreMinimal.h"
#include "ESpacerigStartType.h"
#include "FSDGameMode.h"
#include "FSDGameModeSpaceRig.generated.h"

class AFSDPlayerController;
class ASpacerigStart;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AFSDGameModeSpaceRig : public AFSDGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 AmountOfPlayersSpawnedInMedbay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartedSession;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFSDPlayerController*> alreadySpawnedControllers;
    
public:
    AFSDGameModeSpaceRig(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    ASpacerigStart* GetFreeSpawnOfType(ESpacerigStartType aType, AFSDPlayerController* aController);
    
};

