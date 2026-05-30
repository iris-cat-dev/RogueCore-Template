#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ClassPerkLibrary.generated.h"

class UPerkAsset;
class UPlayerCharacterID;

UCLASS(Blueprintable)
class UClassPerkLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UClassPerkLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UPerkAsset*> GetAvailableClassPerks(const UPlayerCharacterID* Character);
    
};

