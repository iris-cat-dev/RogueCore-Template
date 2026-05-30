#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "BXEBlueprintControlledObjective.generated.h"

class AActor;
class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UBXEBlueprintControlledObjective : public UObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> SpawnedObjectiveActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DBAAvoidCostCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseExpenitePayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeenRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeenUpdateRateSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ObjectiveCompleted, meta=(AllowPrivateAccess=true))
    bool ObjectiveCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ObjectiveShouldSpawnXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowDecoration;
    
public:
    UBXEBlueprintControlledObjective(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SetObjectiveCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_AddEnemies();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ObjectiveCompleted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetSpawnedObjectiveActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExpenitePayout() const;
    
    UFUNCTION(BlueprintCallable)
    void AddSpawnedObjectiveActors(const TArray<AActor*>& InSpawned);
    
    UFUNCTION(BlueprintCallable)
    void AddSpawnedObjectiveActor(AActor* InSpawned);
    
};

