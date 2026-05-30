#pragma once
#include "CoreMinimal.h"
#include "DamageLogger.generated.h"

USTRUCT(BlueprintType)
struct FDamageLogger {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LoggerEnabled;
    
public:
    ROGUECORE_API FDamageLogger();
};

