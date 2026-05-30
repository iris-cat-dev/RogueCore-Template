#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CreditsReward.h"
#include "MissionShouts.h"
#include "ObjectiveMissionIcon.h"
#include "Templates/SubclassOf.h"
#include "UsableAccessDeniedInformation.h"
#include "Objective.generated.h"

class ADebrisDataActor;
class UBiome;
class UMissionStat;
class UObjective;
class UObjectiveWidget;
class UOptionalObjectiveWidget;
class UResourceData;
class UTexture2D;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UObjective : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveUpdatedSignature, UObjective*, Objective);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveUpdatedSignature OnObjectiveUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UObjectiveWidget> ObjectiveWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionShouts MissionShouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MissionDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompletionRewardInCredits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompletionRewardInXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ScaleObjectiveToMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowObjectiveInHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionStat* ObjectiveCompletedStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCompletedStatIncremented;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOptionalObjectiveWidget> OptionalObjectiveWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsPrimaryObjective, meta=(AllowPrivateAccess=true))
    int32 IsPrimaryObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRequiredObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MissionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBiome*> BannedInBiomes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ADebrisDataActor>> ObjectiveDebris;
    
public:
    UObjective(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SignalObjectiveUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_StartTracking();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsPrimaryObjective();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequiredObjective() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrimary() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsObjectiveResource(UResourceData* InResource) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinalBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReplicated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UObjectiveWidget> GetWidgetClassOrDefault(TSubclassOf<UObjectiveWidget> DefaultWidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRewardXP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCreditsReward GetRewardCredits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FUsableAccessDeniedInformation GetRequiredObjectiveAccessDeniedInformation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TSubclassOf<UOptionalObjectiveWidget> GetOptionalMissionWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetObjectiveText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetObjectiveIconFromClass(TSubclassOf<UObjective> objectiveClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTexture2D* GetObjectiveIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetObjectiveDescriptionFromClass(TSubclassOf<UObjective> objectiveClass, float missionLength);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetObjectiveDescription(float missionLength);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetObjectiveAssetName(const TSoftClassPtr<UObjective>& Objective);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetObjectiveAmountFromClass(TSubclassOf<UObjective> objectiveClass, float missionLength);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetObjectiveAmount(float missionLength) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FObjectiveMissionIcon GetMissionIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetInMissionText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetInMissionCounterText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UTexture2D* GetInMissionCounterIcon() const;
    
};

