#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ParsedRunHistoryCharacterData.h"
#include "ParsedRunHistoryEntry.h"
#include "RunHistoryBasicCharacterStats.h"
#include "RunHistoryLibrary.generated.h"

UCLASS(Blueprintable)
class URunHistoryLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URunHistoryLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool WasCooperActiveInRunEntry(const FParsedRunHistoryEntry& RunHistory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FParsedRunHistoryCharacterData FindRunHistoryCharacterData(const TArray<FParsedRunHistoryCharacterData>& CharacterDataArray, const int32 PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRunHistoryBasicCharacterStats FindRunHistoryBasicCharacterStat(const TArray<FRunHistoryBasicCharacterStats>& Stats, const int32 PlayerId, bool& WasFound);
    
};

