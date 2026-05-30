#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETextGender -FallbackName=ETextGender
#include "ECharacterGender.h"
#include "TextTalkingTo.h"
#include "FSDTextFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UFSDTextFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDTextFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText TextFromTimeSpan(const FTimespan& InTimespan, bool InShowDays, bool InShowHours, bool InShowMinutes, bool InShowSeconds, FText InDelimiter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText TextFromInt(float Value, int32 MinimumDigits);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText TextFromFloat(float Value, int32 FractionalDigits);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText TextAsPercentage(float Value, int32 MaxFractionalDigits);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ETextGender GetTextGender(ECharacterGender InCharacterGender);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetFormattedTextGenderedAndPlural(FText InText, ECharacterGender InGender, FTextTalkingTo TalkingTo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetFormattedTextGendered(FText InText, ECharacterGender InGender);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText AppendTextNewLine(const FText& Text1, const FText& Text2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText AppendTextDoubleNewLine(const FText& Text1, const FText& Text2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText AppendText(const FText& Text1, const FText& Text2, const FText& Delimiter);
    
};

