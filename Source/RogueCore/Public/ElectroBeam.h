#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "DelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "ElectroBeam.generated.h"

class UAudioComponent;
class UCapsuleComponent;
class UHealthComponentBase;
class UNiagaraComponent;
class USceneComponent;
class UStatusEffect;

UCLASS(Abstract, Blueprintable)
class AElectroBeam : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* collider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ParentPlants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SourceLocation, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize SourceLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TargetLocation, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* DelaySource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* DelayTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* BeamEffectNS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ZappSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UStatusEffect>> StatusEffectsToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinLitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxUnlitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinUnlitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldFlicker;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnLitChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnorePlayerOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsLit, meta=(AllowPrivateAccess=true))
    bool IsLit;
    
public:
    AElectroBeam(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetTarget(USceneComponent* TargetPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetSource(USceneComponent* SourcePoint);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetParents(AActor* firstParent, AActor* secondParent);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLit(bool NewLit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_TargetActorSet_Server(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_SourceActorSet_Server(AActor* NewSource);
    
public:
    UFUNCTION(BlueprintCallable)
    void RecalculateBeam();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetLocation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SourceLocation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsLit();
    
    UFUNCTION(BlueprintCallable)
    void OnParentDeath(UHealthComponentBase* HealthComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsLit() const;
    
    UFUNCTION(BlueprintCallable)
    UCapsuleComponent* GetCollider();
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* GetAudio();
    
    UFUNCTION(BlueprintCallable)
    void DelayedSetTarget(USceneComponent* TargetPoint);
    
    UFUNCTION(BlueprintCallable)
    void DelayedSetSource(USceneComponent* SourcePoint);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateCollisionAndEffect();
    
};

