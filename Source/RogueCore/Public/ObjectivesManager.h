#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DelegateEventDelegate.h"
#include "ObjectivesManager.generated.h"

class UObjective;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UObjectivesManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateEvent OnObjectivesCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateEvent OnObjectivesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateEvent OnAllRequiredReturnObjectivesCompleted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UObjective* Objective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObjective*> SecondaryObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompletionRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ObjectivesInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ObjectivesStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCheatObjectivesCompleted;
    
public:
    UObjectivesManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ReturnObjectivesCompleted(bool& hasRequiredSecondary) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveChanged(UObjective* obj);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRequiredSecondaryObjective() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObjective* GetSecondaryObjective() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObjective* GetPrimaryObjective() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UObjective*> GetAllSecondaryObjectives() const;
    
    UFUNCTION(BlueprintCallable)
    void ExitPodDescending();
    
    UFUNCTION(BlueprintCallable)
    void ExitPodArrived();
    
    UFUNCTION(BlueprintCallable)
    void DropPodExited();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreRequiredSecondariesComplete() const;
    
};

