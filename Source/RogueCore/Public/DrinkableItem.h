#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AnimatedItem.h"
#include "DrinkableItem.generated.h"

class UDrinkableDataAsset;

UCLASS(Abstract, Blueprintable)
class ADrinkableItem : public AAnimatedItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DrinkableData, meta=(AllowPrivateAccess=true))
    UDrinkableDataAsset* DrinkableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Filled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideThrowAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ThrowAngleOverride;
    
public:
    ADrinkableItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetThrowAngleOverride(FVector Override);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideThrowAngle(bool Override);
    
    UFUNCTION(BlueprintCallable)
    void SetFilled(bool aFilled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DrinkableData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOverridenThrowingAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsThrowAngleOverriden() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Consume();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientConsumed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckCanSalute() const;
    
};

