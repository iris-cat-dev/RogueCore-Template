#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Example01State.h"
#include "TargetChangedDelegateDelegate.h"
#include "Example01ActorComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UExample01ActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetChangedDelegate OnTargetChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetTrackingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    FExample01State State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TargetCounter;
    
public:
    UExample01ActorComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTarget(AActor* NewTarget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_State(const FExample01State& oldState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTargetCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentTargetTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCurrentTarget() const;
    
};

