#pragma once
#include "CoreMinimal.h"
#include "BXELogicUnlockComponent.h"
#include "BXEActorCloseLogicUnlock.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBXEActorCloseLogicUnlock : public UBXELogicUnlockComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsInRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredActorCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CacheUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldDebugPrint;
    
public:
    UBXEActorCloseLogicUnlock(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldCountActor(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActorExit(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActorEnter(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyActorInRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalModifierValueAdditive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AActor*> GetRelevantActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumActorsInRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetMaxRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClampedInRangeModifierValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetActorsInRange() const;
    
};

