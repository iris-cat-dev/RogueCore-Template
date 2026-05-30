#include "Item.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "UpgradableItemComponent.h"

AItem::AItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetUseOwnerRelevancy = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->EnableDangerousSaveGameIDEditing = false;
    this->ItemID = nullptr;
    this->Character = nullptr;
    this->UpgradableItem = CreateDefaultSubobject<UUpgradableItemComponent>(TEXT("Upgradable"));
    this->AttachSocket = TEXT("Dwarf_HandR_AttachSocket");
    this->AttachRule = EAttachmentRule::SnapToTarget;
    this->DetachRule = EDetachmentRule::KeepWorld;
    this->CameraShake = nullptr;
    this->CameraShakeOnStartUsing = false;
    this->CameraShakeOnEquip = false;
    this->HeatCurve = nullptr;
    this->ManualHeatPerUse = 0.00f;
    this->CooldownRate = 1.00f;
    this->ManualCooldownDelay = -1.00f;
    this->UnjamDuration = 8.00f;
    this->CurrentTemperature = 0.00f;
    this->AudioTemperature = nullptr;
    this->AudioTemperatureFadeout = 0.00f;
    this->TemperatureFloatParam = TEXT("temperature");
    this->TemperatureAudioComponent = nullptr;
    this->overheated = false;
    this->ShoutOverheated = nullptr;
    this->bAimAssistEnabled = true;
    this->MovementRateWhileUsing = 1.00f;
    this->CanPlayLedgeClimbWhileUsing = true;
    this->CanInspectItem = true;
    this->CanSprintWithItem = true;
    this->CustomIconWidget = nullptr;
    this->AdvancedVibrationSendLevel = 1.00f;
    this->IsEquipped = false;
    this->isUsing = false;
    this->EquippedFromUnlock = nullptr;
}

void AItem::UpdateSkin() {
}

UAudioComponent* AItem::SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, float PriorityOverride, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, USoundClass* soundClassOverride, bool bAutoDestroy, bool SendVibration) {
    return NULL;
}

UAudioComponent* AItem::SpawnSoundAtLocation(USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration) {
    return NULL;
}

UAudioComponent* AItem::SpawnSound2D(USoundBase* Sound, float PriorityOverride, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool SendVibration) {
    return NULL;
}

void AItem::Server_StartUsing_Implementation(bool NewIsUsing) {
}

void AItem::Resupply(float percentage) {
}














void AItem::OnRep_IsUsing(bool OldValue) {
}

void AItem::OnRep_Attributes(const TArray<UItemUpgrade*>& InPrevAttributes) {
}

void AItem::OnOwnerDestroyed(AActor* owningActor) {
}

void AItem::OnCharacterLevelUp(int32 inLevel, const TArray<UBXEUnlockBase*>& inUnlocks) {
}

bool AItem::IsWeapon() const {
    return false;
}

bool AItem::IsLocallyControlled() const {
    return false;
}

bool AItem::IsFirstPerson() const {
    return false;
}

TSubclassOf<AActor> AItem::GetWeaponViewClass() const {
    return NULL;
}

EUnlockType AItem::GetUnlockType() const {
    return EUnlockType::None;
}

FItemLoadoutAnimations AItem::GetLoadoutAnimations() const {
    return FItemLoadoutAnimations{};
}

FText AItem::GetItemName() const {
    return FText::GetEmpty();
}

UTexture2D* AItem::GetItemIconLine() const {
    return NULL;
}

UTexture2D* AItem::GetItemIconBG() const {
    return NULL;
}

AItem* AItem::GetItemDefaultObject(TSubclassOf<AItem> itemClass) {
    return NULL;
}

FText AItem::GetItemCategory() const {
    return FText::GetEmpty();
}

USceneComponent* AItem::GetHeatingAudioSceneComponent_Implementation() {
    return NULL;
}

UItemCharacterAnimationSet* AItem::GetCharacterAnimationSet() const {
    return NULL;
}

FString AItem::GetAnalyticsItemName() const {
    return TEXT("");
}

FString AItem::GetAnalyticsItemCategory() const {
    return TEXT("");
}


void AItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AItem, Attributes);
    DOREPLIFETIME(AItem, overheated);
    DOREPLIFETIME(AItem, isUsing);
    DOREPLIFETIME(AItem, EquippedFromUnlock);
}


