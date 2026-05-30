#pragma once
#include "CoreMinimal.h"
#include "ETreasureType.h"
#include "SavableDataAsset.h"
#include "ItemAquisitionSource.generated.h"

UCLASS(Blueprintable)
class UItemAquisitionSource : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETreasureType> TreasureTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SourceDepletedMessage;
    
    UItemAquisitionSource();

};

