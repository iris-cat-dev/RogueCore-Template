#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "FSDPawn.h"
#include "StaggerParams.h"
#include "TriggerAI.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "DeepPathfinderCharacter.generated.h"

class UAIPlayerControlComponent;
class UDeepPatherFinderCharacterAfflictionComponent;
class UDeepPathfinderMovement;
class UMaterialInterface;
class UObject;
class UPawnAffliction;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ADeepPathfinderCharacter : public AFSDPawn, public ITriggerAI, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDeepPathfinderMovement* PathfinderMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CenterMassSocketName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDeepPatherFinderCharacterAfflictionComponent* Affliction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AnimationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanPlayerStandOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDormancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaggerDurationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaggerImunityWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UObject*> StaggerImmunitySources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StaggerPauseLogic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsStaggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FrozenPauseLogic;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int8 MeshDecalIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPawnAffliction* CurrentStaggerAffliction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> CachedMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowedInFormationChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIPlayerControlComponent* AIPlayerControlComponentCache;
    
public:
    ADeepPathfinderCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryJoinFormation();
    
    UFUNCTION(BlueprintCallable)
    void Stagger(const FStaggerParams& StaggerParams);
    
    UFUNCTION(BlueprintCallable)
    void SetStaggerImmunity(bool InImmune, const UObject* InStaggerImmunitySource);
    
    UFUNCTION(BlueprintCallable)
    void SetHidden(bool shouldHide);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPausedMovementElapsed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControlledByPlayer(bool IsControlled, bool IsLocallyControlled);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetActorRotation(const FRotator& Rotator);
    
public:
    UFUNCTION(BlueprintCallable)
    void LeaveFormation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanStagger() const;
    

    // Fix for true pure virtual functions not being implemented
};


