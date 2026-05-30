#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DelegateDelegate.h"
#include "RunState.h"
#include "RunStatistics.h"
#include "BXEGameStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBXEGameStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNewDeficultyDelegate, int32, DifficultyIndex);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewDeficultyDelegate OnNewDifficulty;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnNewDifficultySoonWarning;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RunState, meta=(AllowPrivateAccess=true))
    FRunState RunState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RunStatistics, meta=(AllowPrivateAccess=true))
    FRunStatistics RunStatistics;
    
public:
    UBXEGameStateComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SignalNewDifficultyStartingSoon() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SignalNewDifficulty(int32 DifficultyIndex) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RunStatistics();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RunState();
    
};

