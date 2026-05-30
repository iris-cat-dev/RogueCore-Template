#pragma once
#include "CoreMinimal.h"
#include "AbilityComponent.h"
#include "AbilityInRangeComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAbilityInRangeComponent : public UAbilityComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CacheUpdateTime;
    
public:
    UAbilityInRangeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldCountActor(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActorExit(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActorEnter(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyActorInRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AActor*> GetRelevantActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetMaxRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetActorsInRange() const;
    
};

