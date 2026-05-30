#pragma once
#include "CoreMinimal.h"
#include "ENamedCountdownState.h"
#include "NamedCountdownFloat.generated.h"

USTRUCT(BlueprintType)
struct FNamedCountdownFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENamedCountdownState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondsRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HaveQuickFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> StartedByPlayerIds;
    
    ROGUECORE_API FNamedCountdownFloat();
};

