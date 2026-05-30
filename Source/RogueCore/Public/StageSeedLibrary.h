#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "RunCreationParameters.h"
#include "StageSeedParameters.h"
#include "StageSeedLibrary.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UStageSeedLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStageSeedLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetInvalidStageSeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FStageSeedParameters DecodeStageSeed(const FString& SeedString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString CreateStageSeed(const FStageSeedParameters& Parameters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRunCreationParameters ApplyStageSeed(const FRunCreationParameters& CreationParameters, const FString& SeedString);
    
};

