#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "GameplayTagContainer.h"
#include "ActiveOutline.h"
#include "DialogTalkingTo.h"
#include "DialogVoiceSettings.h"
#include "EAsyncLoadPriority.h"
#include "EShoutType.h"
#include "MissionShoutDelegateDelegate.h"
#include "MissionShoutEndDelegateDelegate.h"
#include "MissionShoutQueueItem.h"
#include "Templates/SubclassOf.h"
#include "CommunicationComponent.generated.h"

class AActor;
class APlayerCharacter;
class UAudioComponent;
class UCharacterShoutsData;
class UDialogDataAsset;
class UObject;
class UShoutWidget;
class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCommunicationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FShoutDelegate, APlayerCharacter*, InSender, FText, InText, float, InDuration);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShoutDelegate OnSubtitleShout;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShoutDelegate OnPlayerShout;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionShoutDelegate OnMissionShout;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionShoutEndDelegate OnMissionShoutEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionShoutEndDelegate OnMissionControlFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShoutingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UShoutWidget> ShoutWidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterShoutsData* CharacterShouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinShoutDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseRangeShoutDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogVoiceSettings VoiceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UDialogDataAsset*, float> DelayedShouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer KillShoutAllowedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMissionControlPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* MissionControlAudioComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UShoutWidget*> ActiveShouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActiveOutline> ActiveOutlines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* LastShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAudioComponent> ShoutAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UDialogDataAsset*, float> ShoutHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMissionShoutQueueItem> MissionShoutQueue;
    
public:
    UCommunicationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopMissionControl(bool InClearQueue);
    
    UFUNCTION(BlueprintCallable)
    void ShoutCustomOrDefault(UDialogDataAsset* CustomShout, EShoutType DefaultShout);
    
    UFUNCTION(BlueprintCallable)
    void ShoutCustomLocalOnly(UDialogDataAsset* NewShout);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ShoutCustomFurthestDwarf(UObject* WorldContext, UDialogDataAsset* NewShout, FVector TargetLocation, const float MinimumDistance, const AActor* ExcludedPlayer);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ShoutCustomClosestDwarf(UObject* WorldContext, UDialogDataAsset* NewShout, FVector TargetLocation, const AActor* ExcludedPlayer);
    
    UFUNCTION(BlueprintCallable)
    void ShoutCustom(UDialogDataAsset* NewShout);
    
    UFUNCTION(BlueprintCallable)
    void Shout(EShoutType NewShout);
    
    UFUNCTION(BlueprintCallable)
    void SetVoicePitchMultiplier(float InPitch);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetMissionControlPaused(UObject* WorldContext, bool IsPaused);
    
private:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerShoutCustomFurthestDwarf(UDialogDataAsset* NewShout, const FVector& TargetLocation, const float MinimumDistance, const AActor* ExcludedPlayer);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerShoutCustomClosestDwarf(UDialogDataAsset* NewShout, const FVector& TargetLocation, const AActor* ExcludedPlayer);
    
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerShout(UDialogDataAsset* NewShout, const FDialogVoiceSettings& InVoiceSettings);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerMissionShoutInArea(UDialogDataAsset* NewShout, const int32 Index, const bool bPriority, const FVector Center, const float Radius);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerMissionShout(UDialogDataAsset* NewShout, int32 Index, bool bPriority);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetVoicePitchMultiplier(float InPitch);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetVoicePitchMultiplier();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAudioComponent* PlayPitchedByClass(UObject* WorldContextObject, TSubclassOf<APlayerCharacter> CharacterClass, USoundBase* Sound, UDialogDataAsset* NewShout, EShoutType ShoutType, UAudioComponent* AudioComponent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void PlayPitchedAsync(UDialogDataAsset* NewShout, EShoutType ShoutType, bool IgnoreCoolDown, UAudioComponent* AudioComponent, UObject* WorldContextObject, float shoutVolumeMultiplier, EAsyncLoadPriority Priority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UAudioComponent* PlayPitched(USoundBase* Sound, UDialogDataAsset* NewShout, EShoutType ShoutType, bool IgnoreCoolDown, UAudioComponent* AudioComponent, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static int32 MissionShoutLocally(UObject* WorldContext, UDialogDataAsset* NewShout);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void MissionShoutInArea(UObject* WorldContext, UDialogDataAsset* NewShout, const FVector Center, const float Radius);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void MissionShout(UObject* WorldContext, UDialogDataAsset* NewShout, bool bPriority);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionControlSpeaking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDialogVoiceSettings GetVoiceSettings() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientShout(APlayerCharacter* Sender, UDialogDataAsset* NewShout, int32 Index, const FDialogTalkingTo& TalkingTo, const FDialogVoiceSettings& InVoiceSettings);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientMissionShout(UDialogDataAsset* NewShout, int32 Index, bool bPriority, const FDialogTalkingTo& TalkingTo);
    
};

