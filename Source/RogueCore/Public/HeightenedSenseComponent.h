#pragma once
#include "CoreMinimal.h"
#include "HeightenedSenseTracker.h"
#include "PerkEffectComponent.h"
#include "HeightenedSenseComponent.generated.h"

class AActor;
class UPawnAffliction;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UHeightenedSenseComponent : public UPerkEffectComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnAffliction* HeightenSenseAffliction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlertDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHeightenedSenseTracker> ActiveTrackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAfflictionActivated;
    
public:
    UHeightenedSenseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveTracker(AActor* TrackerActor);
    
    UFUNCTION(BlueprintCallable)
    void AddTracker(AActor* TrackerActor);
    
};

