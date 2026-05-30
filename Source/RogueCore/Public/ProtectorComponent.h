#pragma once
#include "CoreMinimal.h"
#include "BXELogicUnlockComponent.h"
#include "Templates/SubclassOf.h"
#include "ProtectorComponent.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UProtectorComponent : public UBXELogicUnlockComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> ActiveStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChargesToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Active, meta=(AllowPrivateAccess=true))
    bool Active;
    
public:
    UProtectorComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnTempChargesChanged(int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Active();
    
    UFUNCTION(BlueprintCallable)
    void OnHealthChanged(float Health);
    
};

