#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAttachLocation -FallbackName=EAttachLocation
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAttachmentRule -FallbackName=EAttachmentRule
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EDetachmentRule -FallbackName=EDetachmentRule
#include "SaveGameIDInterface.h"
#include "AudioWithCooldown.h"
#include "DelegateDelegate.h"
#include "EUnlockType.h"
#include "ItemDelegateDelegate.h"
#include "ItemIDInterface.h"
#include "ItemLoadoutAnimations.h"
#include "LoadoutItem.h"
#include "PlaySoundInterface.h"
#include "Skinnable.h"
#include "Templates/SubclassOf.h"
#include "Item.generated.h"

class ACharacter;
class AItem;
class APlayerCharacter;
class UAudioComponent;
class UBXEUnlockBase;
class UBXEUnlockItem;
class UCameraShakeBase;
class UCurveFloat;
class UDialogDataAsset;
class UElementType;
class UFirstPersonStaticMeshComponent;
class UItemCharacterAnimationSet;
class UItemID;
class UItemUpgrade;
class UItemsBarIcon;
class USceneComponent;
class USkinEffect;
class USoundAttenuation;
class USoundBase;
class USoundClass;
class USoundConcurrency;
class UStaticMeshComponent;
class UTexture2D;
class UUpgradableItemComponent;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API AItem : public AActor, public ISaveGameIDInterface, public ISkinnable, public IItemIDInterface, public ILoadoutItem, public IPlaySoundInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnAddedToInventoryDelegate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FPCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioWithCooldown AudioFriendlyFire;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnRemovedFromStorage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnEqipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnUnequipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemDelegate OnOverHeatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnStartedUsing;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableDangerousSaveGameIDEditing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemID* ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUpgradableItemComponent* UpgradableItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachmentRule AttachRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDetachmentRule DetachRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Attributes, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgrade*> Attributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CameraShakeOnStartUsing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CameraShakeOnEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* HeatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ManualHeatPerUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ManualCooldownDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnjamDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AudioTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioTemperatureFadeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TemperatureFloatParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* TemperatureAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool overheated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutOverheated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAimAssistEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementRateWhileUsing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanPlayLedgeClimbWhileUsing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanInspectItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanSprintWithItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemsBarIcon> CustomIconWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdvancedVibrationSendLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsUsing, meta=(AllowPrivateAccess=true))
    bool isUsing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UBXEUnlockItem* EquippedFromUnlock;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UElementType*> ActiveElementTypes;
    
public:
    AItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateSkin();
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, float PriorityOverride, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, USoundClass* soundClassOverride, bool bAutoDestroy, bool SendVibration);
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* SpawnSoundAtLocation(USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration);
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* SpawnSound2D(USoundBase* Sound, float PriorityOverride, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool SendVibration);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_StartUsing(bool NewIsUsing);
    
public:
    UFUNCTION(BlueprintCallable)
    void Resupply(float percentage);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemovedFromInventory(ACharacter* oldCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveUnequipped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveStopUsing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveStartUsing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveEquipped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveCycledItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Recieve_UpdateMeshses(bool NewIsFirstPerson);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveResupply(float percentage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_Overheated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UStaticMeshComponent* Receive_GetTPAnimationEventMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UFirstPersonStaticMeshComponent* Receive_GetFPAnimationEventMesh() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTemperatureChanged(float temperature, bool NewOverheated);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSkinChanged(USkinEffect* Skin);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsUsing(bool OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Attributes(const TArray<UItemUpgrade*>& InPrevAttributes);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerDestroyed(AActor* owningActor);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterLevelUp(int32 inLevel, const TArray<UBXEUnlockBase*>& inUnlocks);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstPerson() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AActor> GetWeaponViewClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUnlockType GetUnlockType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FItemLoadoutAnimations GetLoadoutAnimations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetItemName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetItemIconLine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetItemIconBG() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AItem* GetItemDefaultObject(TSubclassOf<AItem> itemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetItemCategory() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetHeatingAudioSceneComponent();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemCharacterAnimationSet* GetCharacterAnimationSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAnalyticsItemName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAnalyticsItemCategory() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddedToInventory(APlayerCharacter* ItemOwner);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    virtual TSubclassOf<AItem> GetLoadoutItemClass() const override PURE_VIRTUAL(GetLoadoutItemClass, return NULL;);
    
};

