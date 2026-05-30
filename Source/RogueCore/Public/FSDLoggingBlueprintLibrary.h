#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "FSDLoggingBlueprintLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class ROGUECORE_API UFSDLoggingBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDLoggingBlueprintLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrintText(const UObject* WorldContextObject, const FText InText, const FString& InCategory, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float duration, const FName Key);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrintString(const UObject* WorldContextObject, const FString& InString, const FString& InCategory, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float duration, const FName Key);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrintLogShipping(const UObject* WorldContextObject, const FString& InString, const FString& InCategory, const FName Key);
    
    UFUNCTION(BlueprintCallable)
    static void LogString(const FString& InString, const FString& InCategory, bool bPrintToLog);
    
};

