#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PlacementDeviceActor.generated.h"

class UPawnStat;

UCLASS(Abstract, Blueprintable)
class APlacementDeviceActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnStat* RadiusStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnStat* LifetimeStat;
    
public:
    APlacementDeviceActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInstigatorChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeviceRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeviceLifetime() const;
    
};

