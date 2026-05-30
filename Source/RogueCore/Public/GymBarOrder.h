#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GymBarOrder.generated.h"

class UDrinkableDataAsset;

UCLASS(Blueprintable)
class ROGUECORE_API UGymBarOrder : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDrinkableDataAsset* Drink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SetAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RepsPerSet;
    
    UGymBarOrder();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDrinkableDataAsset* GetDrink() const;
    
};

