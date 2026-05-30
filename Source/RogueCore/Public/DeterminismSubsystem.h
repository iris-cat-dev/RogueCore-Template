#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "DeterminismSubsystem.generated.h"

UCLASS(Blueprintable)
class UDeterminismSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UDeterminismSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 IncrementedNamedInteger(const FName Name, const int32 MinValue, const int32 MaxValue);
    
};

