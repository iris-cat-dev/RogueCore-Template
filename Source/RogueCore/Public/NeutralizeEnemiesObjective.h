#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "NeutralizeEnemiesObjective.generated.h"

class UEnemyID;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNeutralizeEnemiesObjective : public UObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyID*> BannedEnemies;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=NotifiedKilledCountChanged, meta=(AllowPrivateAccess=true))
    int32 TargetCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=NotifiedKilledCountChanged, meta=(AllowPrivateAccess=true))
    int32 KilledCount;
    
public:
    UNeutralizeEnemiesObjective(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyKilledCountComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyKilledCountChanged();
    
private:
    UFUNCTION(BlueprintCallable)
    void NotifiedKilledCountChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTargetCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissingCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKilledCount() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 FindTargetCountForLevel() const;
    
};

