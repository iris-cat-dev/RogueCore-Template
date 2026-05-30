#pragma once
#include "CoreMinimal.h"
#include "CarriableItem.h"
#include "Gem.generated.h"

class UBXEBlueprintControlledObjective;
class UCarriableInstantUsable;
class UResourceData;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API AGem : public ACarriableItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCarriableInstantUsable* usable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* ResourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBXEBlueprintControlledObjective* SpawnedByObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideResourceAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ResourceAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool hasBeenReleased;
    
public:
    AGem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetResourceAmount(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void SetHasBeenReleased(bool NewHasBeenReleased);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasBeenReleased() const;
    
};

