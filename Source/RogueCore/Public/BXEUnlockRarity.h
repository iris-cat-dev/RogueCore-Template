#pragma once
#include "CoreMinimal.h"
#include "EUnlockRarityType.h"
#include "SavablePrimaryDataAsset.h"
#include "BXEUnlockRarity.generated.h"

class URarityConditionBase;
class UUnlockVisualSettings;

UCLASS(Blueprintable)
class UBXEUnlockRarity : public USavablePrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnlockRarityType RarityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnlockVisualSettings* VisualSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URarityConditionBase*> SelectionConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttributeCount;
    
public:
    UBXEUnlockRarity();

};

