#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ENamedCountdownState.h"
#include "NamedCountdownInt.h"
#include "NamedCountdownLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UNamedCountdownLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNamedCountdownLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void StartNamedCountdownWithQuickFinish(const UObject* WorldContext, const FName Name, const int32 CountdownSeconds);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void StartNamedCountdown(const UObject* WorldContext, const FName Name, const int32 CountdownSeconds);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ResetNamedCountdown(const UObject* WorldContext, const FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static ENamedCountdownState GetNamedCountdownState(const UObject* WorldContext, const FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FNamedCountdownInt GetNamedCountdown(const UObject* WorldContext, const FName Name);
    
};

