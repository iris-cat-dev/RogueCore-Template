#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "BXECompanionStateDelegateDelegate.h"
#include "CompanionDroneHologram.h"
#include "DeepPathfinderCharacter.h"
#include "EBXECompanionDroneState.h"
#include "NameDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "BXECompanionDrone.generated.h"

class AActor;
class ADroneDestinationMarker;
class UAnimSequence;
class UAudioComponent;
class UCappedResource;
class UDialogDataAsset;
class UPlayersNegotiationSphere;
class UResourceBank;
class USceneComponent;
class USingleUsableComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class USoundCue;
class USplineComponent;
class USplineMeshComponent;
class UStaticMesh;
class UUnlockCollectionTag;
class UUserWidget;

UCLASS(Blueprintable)
class ABXECompanionDrone : public ADeepPathfinderCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* ArmSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* MovementAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ArmExtensionNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UResourceBank* ResourceBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CableHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CableHeadMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* GrindingAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* HackingAudio;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXECompanionStateDelegate OnStateEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXECompanionStateDelegate OnStateLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNameDelegate OnAiMessaged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FTransform ConnectorPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DestinationLocation, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize DestinationLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCompanionDroneHologram> Holograms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MovementAudioParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GrinderSpinRateParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayersNegotiationSphere* PlayerNegotiationSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnlockCollectionTag* RewardCollectionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnlockCollectionTag* ArtifactCollectionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnlockCollectionTag* PotentExpeniteCollectionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> MeshSegmentCashe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USingleUsableComponent*> SyncedUseList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADroneDestinationMarker> DestinationMarkerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADroneDestinationMarker* DestinationMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* TentacleHeadMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* SaluteAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> LookAtTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* CallResponseCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* CableConnectCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAudioComponent> CableConnectInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ArmSegment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CableRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CableExtensionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmSegmentLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtensionProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtensionTurnHeadTowardsTargetPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineTangentPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CallResponseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrinderAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrinderFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EBXECompanionDroneState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TrayOpen, meta=(AllowPrivateAccess=true))
    bool TrayOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrintAudioParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BlockLevelUpWhileDispensing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BeingDepositedTo, meta=(AllowPrivateAccess=true))
    bool BeingDepositedTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Header_NegotiatingArtifact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Header_NegotiatingUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutUpgradesWaiting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutUpgradesLastActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeBetweenConsecutiveShouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeOfLastShout;
    
public:
    ABXECompanionDrone(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartNegotiation();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetState(EBXECompanionDroneState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerNegotiationSphere(UPlayersNegotiationSphere* Sphere);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_MessageAi(FName Trigger);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTrayChanged();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnResourceAdded(UCappedResource* Resource, float Amount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TrayOpen();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State(EBXECompanionDroneState oldState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DestinationLocation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BeingDepositedTo();
    
    UFUNCTION(BlueprintCallable)
    void OnInsidePlayerChanged(int32 PlayerCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHologramEndUse(USingleUsableComponent* usable, UUserWidget* Widget, const FName& bone);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHologramEnabled(USingleUsableComponent* usable, UUserWidget* Widget, const FName& bone);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHologramDisabled(USingleUsableComponent* usable, UUserWidget* Widget, const FName& bone);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHologramBeginUse(USingleUsableComponent* usable, UUserWidget* Widget, const FName& bone);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBXECompanionDroneState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveButtonCount() const;
    
    UFUNCTION(BlueprintCallable)
    void CoupleHologram(USingleUsableComponent* usable, UUserWidget* Widget);
    
};

