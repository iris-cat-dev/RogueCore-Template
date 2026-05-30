#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "StageNameBank.generated.h"

UCLASS(Blueprintable)
class UStageNameBank : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> FirstNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> LastNames;
    
public:
    UStageNameBank();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetRandomGeneratedNames(UPARAM(Ref) FRandomStream& Random, int32 count) const;
    
};

