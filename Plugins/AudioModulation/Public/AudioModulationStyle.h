#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AudioModulationStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAudioModulationStyle : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAudioModulationStyle();

    UFUNCTION(BlueprintCallable)
    static FColor GetPatchColor();
    
    UFUNCTION(BlueprintCallable)
    static FColor GetParameterColor();
    
    UFUNCTION(BlueprintCallable)
    static FColor GetModulationGeneratorColor();
    
    UFUNCTION(BlueprintCallable)
    static FColor GetControlBusMixColor();
    
    UFUNCTION(BlueprintCallable)
    static FColor GetControlBusColor();
    
};

