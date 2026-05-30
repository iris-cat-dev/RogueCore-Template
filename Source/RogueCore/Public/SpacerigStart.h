#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "ESpacerigStartType.h"
#include "GameFramework/PlayerStart.h"
#include "SpacerigStart.generated.h"

class AFSDPlayerController;

UCLASS(Blueprintable)
class ASpacerigStart : public APlayerStart {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerSpawnInHub, AFSDPlayerController*, Controller);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSpawnInHub OnPlayerSpawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSpawnInHub OnPlayerLeave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFSDPlayerController* UsedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpacerigStartType StartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartPriorityIndex;
    
    ASpacerigStart(const FObjectInitializer& ObjectInitializer);

};

