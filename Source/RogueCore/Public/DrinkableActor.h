#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OnPickedUpelegateDelegate.h"
#include "DrinkableActor.generated.h"

class APlayerCharacter;
class UDrinkableDataAsset;

UCLASS(Abstract, Blueprintable)
class ADrinkableActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPickedUpelegate OnPickedUp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DrinkableData, meta=(AllowPrivateAccess=true))
    UDrinkableDataAsset* DrinkableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool Filled;
    
public:
    ADrinkableActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Pickup(APlayerCharacter* byCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_DrinkableData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Fill();
    
};

