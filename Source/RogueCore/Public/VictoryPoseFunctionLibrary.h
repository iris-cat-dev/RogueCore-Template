#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "VictoryPoseFunctionLibrary.generated.h"

class UObject;
class UPlayerCharacterID;
class UVictoryPose;

UCLASS(Blueprintable)
class UVictoryPoseFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVictoryPoseFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRandomVictoryPose(UVictoryPose* VictoryPose);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<UVictoryPose*> GetOwnedVictoryPoses(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UVictoryPose* GetEquippedVictoryPose(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    
};

