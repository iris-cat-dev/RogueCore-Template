#pragma once
#include "CoreMinimal.h"
#include "TimesPerPlayerCount.generated.h"

USTRUCT(BlueprintType)
struct FTimesPerPlayerCount {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TwoPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreePlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FourPlayers;
    
public:
    ROGUECORE_API FTimesPerPlayerCount();
};

