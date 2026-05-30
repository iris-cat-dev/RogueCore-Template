#pragma once
#include "CoreMinimal.h"
#include "CoreSpawnEnemyBase.h"
#include "DelegateEventDelegate.h"
#include "SpawnLordAdEnemy.generated.h"

class AActor;
class ASpawnLordEnemy;
class UGrabberComponent;

UCLASS(Blueprintable)
class ROGUECORE_API ASpawnLordAdEnemy : public ACoreSpawnEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateEvent OnUndock;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateEvent OnDock;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateEvent OnGoingHome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HomeSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsDocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsHomeless;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGrabberComponent* Grabber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASpawnLordEnemy* Boss;
    
public:
    ASpawnLordAdEnemy(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Undock();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(float damageTaken);
    
    UFUNCTION(BlueprintCallable)
    bool GrabPlayer(AActor* Target);
    
public:
    UFUNCTION(BlueprintCallable)
    void GoHome();
    
    UFUNCTION(BlueprintCallable)
    void Dock();
    
};

