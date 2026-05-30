#include "PlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/PointLightComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "GameFramework/SpringArmComponent.h"
#include "Components/WidgetInteractionComponent.h"
#include "AccessCollectionComponent.h"
#include "AchievementComponent.h"
#include "ActorTrackingComponent.h"
#include "BXEStatCounterComponent.h"
#include "BoosterDeckContainerComponent.h"
#include "CharacterCameraController.h"
#include "CharacterRecoilComponent.h"
#include "CharacterSightComponent.h"
#include "CharacterUseComponent.h"
#include "CharacterVanityComponent.h"
#include "CommunicationComponent.h"
#include "CrosshairExtensionComponent.h"
#include "DamageNumberAggregator.h"
#include "ElementComponent.h"
#include "FSDPlayerCheatComponent.h"
#include "FirstPersonSkeletalMeshComponent.h"
#include "InstantUsable.h"
#include "InventoryComponent.h"
#include "MissionStatsCollector.h"
#include "Net/UnrealNetwork.h"
#include "OutlineComponent.h"
#include "PawnStatsComponent.h"
#include "PerkComponent.h"
#include "PlayerAfflictionComponent.h"
#include "PlayerAmbienceSoundComponent.h"
#include "PlayerAttackPositionComponent.h"
#include "PlayerEventsComponent.h"
#include "PlayerHealthComponent.h"
#include "PlayerInfoComponent.h"
#include "PlayerMovementComponent.h"
#include "PlayerReactiveTerrainTrackerComponent.h"
#include "SingleUsableComponent.h"
#include "StatusEffectsComponent.h"
#include "Templates/SubclassOf.h"
#include "UpgradeContainerComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/WidgetInteractionComponent.h"
#include "GameFramework/SpringArmComponent.h"

APlayerCharacter::APlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UPlayerMovementComponent>(TEXT("CharMoveComp"))) {
    this->AudioDownCameraStatic = nullptr;
    this->AudioComponent_DownCameraStatic = nullptr;
    this->HeightenedSenseComponent = nullptr;
    this->ZipLineStateComponent = nullptr;
    this->BoundPerkActivationW = nullptr;
    this->PerkActivationTimer = -1.00f;
    this->IsCloseToFlare = false;
    this->GrabbedByClass = nullptr;
    this->bIsBeingBittenByCaveLeech = false;
    this->WidgetInteraction = CreateDefaultSubobject<UWidgetInteractionComponent>(TEXT("WidgetInteraction"));
    this->EquipLaserpointerHoldDuration = 0.33f;
    this->IsPressingMovementInputKey = false;
    this->characterID = nullptr;
    this->FPMesh = CreateDefaultSubobject<UFirstPersonSkeletalMeshComponent>(TEXT("FPMesh"));
    this->FirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
    this->FirstPersonRoot = CreateDefaultSubobject<USceneComponent>(TEXT("FPRoot"));
    this->ActorTracking = CreateDefaultSubobject<UActorTrackingComponent>(TEXT("ActorTracking"));
    this->IntoxicationComponent = nullptr;
    this->MissionStatsCollector = CreateDefaultSubobject<UMissionStatsCollector>(TEXT("MissionStatsCollector"));
    this->ThirdPersonSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("ThirdPersonSpringArm"));
    this->ThirdPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPersonCamera"));
    this->ThirdPersonLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("ThirdPersonLight"));
    this->FollowSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("FollowSpringArm"));
    this->DamageNumberAggregator = CreateDefaultSubobject<UDamageNumberAggregator>(TEXT("DamageNumberAggregatorComponent"));
    this->FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    this->GymCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("GymCamera"));
    this->PerkComponent = CreateDefaultSubobject<UPerkComponent>(TEXT("CharacterPerkContainerComponent"));
    this->PlayerCheatComponent = CreateDefaultSubobject<UFSDPlayerCheatComponent>(TEXT("PlayerCheatComponent"));
    this->GymSpringArm = nullptr;
    this->DownCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("DownCamera"));
    this->CameraController = CreateDefaultSubobject<UCharacterCameraController>(TEXT("CameraController"));
    this->HealthComponent = CreateDefaultSubobject<UPlayerHealthComponent>(TEXT("Health"));
    this->SightComponent = CreateDefaultSubobject<UCharacterSightComponent>(TEXT("SightComponent"));
    this->InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("inventory"));
    this->UseComponentNew = CreateDefaultSubobject<UCharacterUseComponent>(TEXT("UseComponentNew"));
    this->UsableComponent = CreateDefaultSubobject<USingleUsableComponent>(TEXT("UsableComponent"));
    this->OutlineComponent = CreateDefaultSubobject<UOutlineComponent>(TEXT("OutlineComponent"));
    this->RecoilComponent = CreateDefaultSubobject<UCharacterRecoilComponent>(TEXT("RecoilComponent"));
    this->StatusEffectsComponent = CreateDefaultSubobject<UStatusEffectsComponent>(TEXT("StatusEffects"));
    this->PawnStatsComponent = CreateDefaultSubobject<UPawnStatsComponent>(TEXT("PawnStats"));
    this->PawnAfflictionComponent = CreateDefaultSubobject<UPlayerAfflictionComponent>(TEXT("PawnAfflictions"));
    this->PlayerInfoComponent = CreateDefaultSubobject<UPlayerInfoComponent>(TEXT("PlayerInfoComponent"));
    this->AttackerPositioningComponent = CreateDefaultSubobject<UPlayerAttackPositionComponent>(TEXT("AttackerPositioning"));
    this->CommunicationComponent = CreateDefaultSubobject<UCommunicationComponent>(TEXT("Communication"));
    this->ElementComponent = CreateDefaultSubobject<UElementComponent>(TEXT("ElementComponent"));
    this->ReactiveTerrainTracker = CreateDefaultSubobject<UPlayerReactiveTerrainTrackerComponent>(TEXT("TerrainTracker"));
    this->TrackGrindUsableComponent = CreateDefaultSubobject<UInstantUsable>(TEXT("TrackGrindUsable"));
    this->StatCounterComponent = CreateDefaultSubobject<UBXEStatCounterComponent>(TEXT("StatCounterComponent"));
    this->AbilityComponent = nullptr;
    this->PlayerAmbienceSoundComponent = CreateDefaultSubobject<UPlayerAmbienceSoundComponent>(TEXT("PlayerAmbienceSoundComponent"));
    this->PlayerEvents = CreateDefaultSubobject<UPlayerEventsComponent>(TEXT("PlayerEventsComponent"));
    this->CrosshairExtensionComponent = CreateDefaultSubobject<UCrosshairExtensionComponent>(TEXT("CrosshairExtensionComponent"));
    this->AccessCollectionComponent = CreateDefaultSubobject<UAccessCollectionComponent>(TEXT("AccessCollectionComponent"));
    this->BioBoosterDecksComponent = CreateDefaultSubobject<UBoosterDeckContainerComponent>(TEXT("BioBoosterDecksComponent"));
    this->UpgradeContainerComponent = CreateDefaultSubobject<UUpgradeContainerComponent>(TEXT("UpgradeContainer"));
    this->AchievementComponent = CreateDefaultSubobject<UAchievementComponent>(TEXT("AchievementComponent"));
    this->RunningSpeed = 0.00f;
    this->RunBoost = 0.00f;
    this->RunBoostChargeTime = 0.00f;
    this->RunBoostActivationSound = nullptr;
    this->RunBoostParticles = nullptr;
    this->RunBoostAffliction = nullptr;
    this->HangingPhysicsAsset = nullptr;
    this->HangingSimulationBlend = 1.00f;
    this->IsPlayableCharacter = true;
    this->SprintSoundComponent = nullptr;
    this->SprintSound = nullptr;
    this->SprintSound_Female = nullptr;
    this->DownedCameraMinPitch = -75.00f;
    this->DownedCameraMaxPitch = 0.00f;
    this->TurnToFaceScannerAngularSpeed = 180.00f;
    this->Turn180Time = 0.50f;
    this->CarryingMovementSpeedPenalty = 0.50f;
    this->CarryingMaxFallVelocity = 1200.00f;
    this->MaxThrowProgress = 1.00f;
    this->MaxThrowHoldDuration = 2.00f;
    this->CarryingThrowMinForce = 100.00f;
    this->CarryingThrowMaxForce = 600.00f;
    this->PlayerVelocityToThrowFactor = 0.00f;
    this->CarryingThrowingStatusEffect = nullptr;
    this->ThrowCarriableProgress = 0.00f;
    this->ActiveCharacterState = nullptr;
    this->IsInDropPod = false;
    this->IsInEscapePod = false;
    this->ButtonMemoryDuration = 0.25f;
    this->IsRunning = false;
    this->SprintingEnabled = true;
    this->CanDash = false;
    this->DashInputWindow = 0.30f;
    this->DashFowardMovementMinRequirement = 0.90f;
    this->DashRightMovementMaxRequirement = 0.10f;
    this->DashControllerMinValueRequired = 0.50f;
    this->DashCooldown = 1.00f;
    this->DashStatusEffect = nullptr;
    this->StandingStillActivationTime = 0.00f;
    this->StandingStillMaxVelocity = 1.00f;
    this->ForwardInput = 0.00f;
    this->RightInput = 0.00f;
    this->ControllerForwardInput = 0.00f;
    this->ControllerRightInput = 0.00f;
    this->StoppedRunningTime = -1.00f;
    this->ShoutPressedTime = -1.00f;
    this->bIsUsingItemPressed = false;
    this->bIsUsingPressed = false;
    this->UsingDelay = 0.00f;
    this->bIsWorkingout = false;
    this->IsStandingStill = false;
    this->HeadLightOn = true;
    this->isUsing = false;
    this->JumpPressedTime = 0.00f;
    this->CanMove = true;
    this->CanAim = true;
    this->CanUseItem = true;
    this->CanChangeItems = true;
    this->CanMine = true;
    this->CanSalute = true;
    this->IsStandingDown = false;
    this->InDanceRange = false;
    this->IsDancing = false;
    this->CanUseUsables = true;
    this->DanceStartTime = 0.00f;
    this->HappyFeetAchievement = nullptr;
    this->DanceMove = 0;
    this->CameraMode = ECharacterCameraMode::FirstPerson;
    this->bShouldSpawnAnimEffects = true;
    this->IdleTime = 0.00f;
    this->FPDrinkSalute = nullptr;
    this->TPDrinkSalute = nullptr;
    this->CurrentSaluteMontage = nullptr;
    this->bIsShowroomCharacter = false;
    this->bIsShowroomZoomedIn = false;
    this->bForceNormalAnimationsInShowroom = false;
    this->BlockTrackGrindOnLanded = false;
    this->RadarMaterialInstance = nullptr;
    this->RadarMaterialAngleParameterIndex = 0;
    this->FallbackPhysicalMaterial = nullptr;
    this->ClientReady = false;
    this->NextCharacterState = nullptr;
    this->PlayerIsLeavingInDroppod = false;
    this->CanInstantRevive = false;
    this->CharacterVanity = CreateDefaultSubobject<UCharacterVanityComponent>(TEXT("CharacterVanity"));
    this->OnLandedAttachTo = nullptr;
    this->StageEndLocation = EPlayerStageEndLocation::Unknown;
    this->TrackedPerksThatAreUpdating = 0;
    this->ActorTracking->SetupAttachment(RootComponent);
    this->DownCamera->SetupAttachment(RootComponent);
    this->FPMesh->SetupAttachment(FirstPersonRoot);
    this->FirstPersonCamera->SetupAttachment(FPMesh);
    this->FirstPersonRoot->SetupAttachment(RootComponent);
    this->FollowCamera->SetupAttachment(FollowSpringArm);
    this->FollowSpringArm->SetupAttachment(RootComponent);
    this->ThirdPersonCamera->SetupAttachment(ThirdPersonSpringArm);
    this->ThirdPersonLight->SetupAttachment(RootComponent);
    this->ThirdPersonSpringArm->SetupAttachment(RootComponent);
    this->WidgetInteraction->SetupAttachment(FirstPersonCamera);
}

void APlayerCharacter::UseZipLine(AZipLineProjectile* ZipLine, const FVector& Start, const FVector& End) {
}

void APlayerCharacter::UpdateAbilityHoldDuration() {
}

void APlayerCharacter::Unparalyze() {
}

void APlayerCharacter::TryUseInstantRevive(APlayerCharacter* ReviveTarget) {
}

bool APlayerCharacter::TryFreezeCharacter(UElementType* ElementType, UElementEventType* ElementEventTrigger) {
    return false;
}

void APlayerCharacter::ToggleHUDReleased() {
}

void APlayerCharacter::ToggleHUDPressed() {
}

void APlayerCharacter::ToggleHeadLight() {
}

void APlayerCharacter::ThrowFlareReleased() {
}

void APlayerCharacter::ThrowFlarePressed() {
}

void APlayerCharacter::ThrowFlare() {
}

void APlayerCharacter::StopUsingItem() {
}

void APlayerCharacter::StartTutorials(bool ResetTutorials) {
}

void APlayerCharacter::StartPerkActivation(UPerkActivationWidget* PerkActivationWidget, float HoldTime) {
}

UAudioComponent* APlayerCharacter::SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, float PriorityOverride, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, USoundClass* soundClassOverride, bool bAutoDestroy, bool SendVibration) {
    return NULL;
}

UAudioComponent* APlayerCharacter::SpawnSoundAtLocation(USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration) {
    return NULL;
}

UAudioComponent* APlayerCharacter::SpawnSound2D(USoundBase* Sound, float PriorityOverride, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool SendVibration) {
    return NULL;
}

void APlayerCharacter::SpaceRigOpacityChange(float Opacity) {
}

void APlayerCharacter::ShowSimpleHoldProgress(APlayerController* PlayerController, const FText& InDescription, float InProgress) {
}


void APlayerCharacter::SetStandingDown(bool standingDown) {
}

void APlayerCharacter::SetSprintingEnabled(bool Enabled) {
}


void APlayerCharacter::SetRadarMaterialInstance(UMaterialInstanceDynamic* matInstance) {
}

void APlayerCharacter::SetPlayerResource(UResourceData* Resource, float Amount) {
}

void APlayerCharacter::SetOutsideShieldGenerator(AGeneratorItemActor* Shield) {
}

void APlayerCharacter::SetIsShowroomZoomedIn(const bool IsZoomedIn) {
}

void APlayerCharacter::SetIsShowroomCharacter() {
}

void APlayerCharacter::SetInstantUsables_Implementation(bool Value) {
}

void APlayerCharacter::SetInsideShieldGenerator(AGeneratorItemActor* Shield) {
}

void APlayerCharacter::SetHeadLight_Implementation(bool On) {
}

void APlayerCharacter::SetForceNormalAnimationsInShowroom(const bool Force) {
}

void APlayerCharacter::SetFallbackPhysicalMaterial(UFSDPhysicalMaterial* PhysMat) {
}

void APlayerCharacter::SetCameraMode(ECharacterCameraMode newCameraMode) {
}

void APlayerCharacter::SetAvailableAirJumps(int32 InAmount) {
}

void APlayerCharacter::SetAttached(USceneComponent* AttachTo, bool DelayUntilLanded) {
}

void APlayerCharacter::Server_TriggerDash_Implementation() {
}

void APlayerCharacter::Server_TestGenerationDesync_Implementation() {
}

void APlayerCharacter::Server_TeleportToPlayer_Implementation(APlayerCharacter* InPlayerToTeleport, int32 InTarget) {
}

void APlayerCharacter::Server_TeleportPlayerTo_Implementation(int32 InPlayerIndexToTeleport, APlayerCharacter* InTarget) {
}

void APlayerCharacter::Server_StartSalute_Implementation(UAnimMontage* startSalute) {
}

void APlayerCharacter::Server_SpawnEnemies_Implementation(UEnemyDescriptor* descriptor, int32 count) {
}

void APlayerCharacter::Server_Shouted_Implementation() {
}

void APlayerCharacter::Server_SetUsing_Implementation(bool characterIsUsing) {
}

void APlayerCharacter::Server_SetRunning_Implementation(bool characterIsRunning) {
}

void APlayerCharacter::Server_SetRunBoostActive_Implementation(bool IsActive) {
}

void APlayerCharacter::Server_SetIsThrowingCarriable_Implementation(bool isThrowing) {
}

void APlayerCharacter::Server_SetIsPressingMovementInput_Implementation(bool aIsPushingInput) {
}

void APlayerCharacter::Server_SetIsJumpPressed_Implementation(bool InJumpPressed) {
}

void APlayerCharacter::Server_SetDispenserReward_Implementation(ARewardDispenserBase* Dispenser, UDataAsset* Reward) {
}

void APlayerCharacter::Server_SetClientReady_Implementation() {
}

void APlayerCharacter::Server_InstantRevive_Implementation(APlayerCharacter* ReviveTarget, EInputKeys Key) {
}

void APlayerCharacter::Server_GenerationDesyncDataRecieved_Implementation(const FTestGenerationPacket& InClientPacket) {
}

void APlayerCharacter::Server_EscapeFromGrabber_Implementation() {
}

void APlayerCharacter::Server_ClearBiomeEffects_Implementation() {
}

void APlayerCharacter::Server_CheatRevive_Implementation() {
}

void APlayerCharacter::Server_CheatKillAllFriendly_Implementation() {
}

void APlayerCharacter::Server_CheatKillAll_Implementation() {
}

void APlayerCharacter::Server_CheatJetBoots_Implementation() {
}

void APlayerCharacter::Server_CheatGodMode_Implementation() {
}

void APlayerCharacter::Server_CheatFlyMode_Implementation(bool Active) {
}

void APlayerCharacter::Server_CheatFlareInfiniteDuration_Implementation(bool Enabled) {
}

void APlayerCharacter::Server_CheatDebugFastMode_Implementation(bool fast) {
}

void APlayerCharacter::Server_CheatAddAllResourcesToInventory_Implementation(float Amount) {
}

void APlayerCharacter::Server_CancelThrowingCarriable_Implementation() {
}

void APlayerCharacter::Server_CallDonkey_Implementation() {
}

void APlayerCharacter::Server_BiomeEffectsEnabled_Implementation(bool Enabled) {
}

void APlayerCharacter::Server_AddToTraceQueue_Implementation(ADamageEnhancer* Target, FEnhancedTrace Item) {
}

void APlayerCharacter::Server_AddImpulseToActor_Implementation(AFSDPhysicsActor* Target, FVector_NetQuantize Impulse, FVector_NetQuantize Location, FVector_NetQuantize AngularImpulse) {
}

void APlayerCharacter::Server_AddImpulse_Implementation(const FVector_NetQuantizeNormal& Direction, float Force) {
}

void APlayerCharacter::Server_ActivateTemporaryBuff_Implementation(UTemporaryBuff* buff) {
}

void APlayerCharacter::ReviveProgress(float Progress) {
}

void APlayerCharacter::RevivePlayer() {
}

void APlayerCharacter::RequestChangeInGravityScale_Implementation(float newGravityScale, bool pushFallingState) {
}

void APlayerCharacter::RemoveRunningBoostEffects(TArray<TSubclassOf<UStatusEffect>> effects) {
}

void APlayerCharacter::RemoveRunningBoostEffect(TSubclassOf<UStatusEffect> effect) {
}

void APlayerCharacter::RemoveCloseFlare() {
}





void APlayerCharacter::QuickUseGeneral(const int32 Index) {
}





void APlayerCharacter::PilotVehicle(AActor* Vehicle) {
}

void APlayerCharacter::Paralyze(AActor* ParalyzedBy) {
}

void APlayerCharacter::OpenChat() {
}

void APlayerCharacter::OnResourceFull(UCappedResource* Resource) {
}

void APlayerCharacter::OnRep_IsStandingDown() {
}

void APlayerCharacter::OnRep_IsDancing() {
}

void APlayerCharacter::OnRep_IsCloseToFlare(bool prevCloseToFlare) {
}

void APlayerCharacter::OnRep_HeadLightOn() {
}

void APlayerCharacter::OnRep_DanceMove() {
}

void APlayerCharacter::OnRep_CharacterState(UCharacterStateComponent* oldState) {
}

void APlayerCharacter::OnPlayerStateChanged(const APlayerCharacter::FOnPlayerStateDelegate& OnNewStateSet, bool CallInstantlyIfAlreadySet) {
}

void APlayerCharacter::OnItemEquipped(AItem* Item) {
}

void APlayerCharacter::OnInventoryItemsLoaded() {
}

void APlayerCharacter::OnCharacterUsed(APlayerCharacter* User, EInputKeys Key) {
}

void APlayerCharacter::OnCharacterEndUse() {
}

void APlayerCharacter::OnCharacterBeginUse(APlayerCharacter* User, EInputKeys Key) {
}

void APlayerCharacter::OnAbilityDeactivated() {
}

void APlayerCharacter::MouseWheelUp() {
}

void APlayerCharacter::MouseWheelDown() {
}

void APlayerCharacter::JumpRelease() {
}

void APlayerCharacter::JumpPress() {
}

bool APlayerCharacter::IsWithinDistance(AActor* Source, float Distance) const {
    return false;
}

bool APlayerCharacter::IsWalking() const {
    return false;
}

bool APlayerCharacter::IsUsingPressed() const {
    return false;
}

bool APlayerCharacter::IsUsingItemPressed() const {
    return false;
}

bool APlayerCharacter::IsSuspended() const {
    return false;
}

bool APlayerCharacter::IsStateActive(ECharacterState State) const {
    return false;
}

bool APlayerCharacter::IsShowroomZoomedIn() const {
    return false;
}

bool APlayerCharacter::IsShowroomCharacter() const {
    return false;
}

bool APlayerCharacter::IsSaluting() const {
    return false;
}

bool APlayerCharacter::IsParalyzed() const {
    return false;
}

bool APlayerCharacter::IsMovementInputPressed() {
    return false;
}

bool APlayerCharacter::IsMining() const {
    return false;
}

bool APlayerCharacter::IsLyingDown() const {
    return false;
}

bool APlayerCharacter::IsJumpPressed() const {
    return false;
}

bool APlayerCharacter::IsInState(ECharacterState aState) const {
    return false;
}

bool APlayerCharacter::IsIncapacitated() const {
    return false;
}

bool APlayerCharacter::IsFrozen() const {
    return false;
}

bool APlayerCharacter::IsFirstPerson() const {
    return false;
}

bool APlayerCharacter::IsEquipepdActor(AActor* Actor) const {
    return false;
}

bool APlayerCharacter::IsDown() const {
    return false;
}

bool APlayerCharacter::IsBuried() const {
    return false;
}

bool APlayerCharacter::IsAlive() const {
    return false;
}

void APlayerCharacter::InvalidateTeleport_Implementation() {
}

void APlayerCharacter::InstantRevive(APlayerCharacter* ReviveTarget, EInputKeys Key) {
}

bool APlayerCharacter::HasBeenRevived() const {
    return false;
}

UCharacterUseComponent* APlayerCharacter::GetUseComponent() const {
    return NULL;
}

UPlayerTPAnimInstance* APlayerCharacter::GetTPAnimInstance() const {
    return NULL;
}

float APlayerCharacter::GetTimeSinceLastRevival() const {
    return 0.0f;
}

EPlayerStageEndLocation APlayerCharacter::GetStageEndLocation() const {
    return EPlayerStageEndLocation::Unknown;
}

ECharacterState APlayerCharacter::GetPreviousState() const {
    return ECharacterState::Walking;
}

AFSDPlayerState* APlayerCharacter::GetPlayerState() const {
    return NULL;
}

FString APlayerCharacter::GetPlayerName() const {
    return TEXT("");
}

UPlayerEventsComponent* APlayerCharacter::GetPlayerEvents() const {
    return NULL;
}

float APlayerCharacter::GetPlayerDirectionAngle() const {
    return 0.0f;
}

AFSDPlayerController* APlayerCharacter::GetPlayerController() const {
    return NULL;
}

UInventoryList* APlayerCharacter::GetInventoryList() const {
    return NULL;
}

FText APlayerCharacter::GetHeroName() const {
    return FText::GetEmpty();
}

FHeroInfo APlayerCharacter::GetHeroInfo() const {
    return FHeroInfo{};
}

UTexture2D* APlayerCharacter::GetHeroIcon() const {
    return NULL;
}

FLinearColor APlayerCharacter::GetHeroColor() const {
    return FLinearColor{};
}

TArray<USkeletalMeshComponent*> APlayerCharacter::GetGauntletThirdPersonMeshes_Implementation() const {
    return TArray<USkeletalMeshComponent*>();
}

TArray<USkeletalMeshComponent*> APlayerCharacter::GetGauntletFirstPersonMeshes_Implementation() const {
    return TArray<USkeletalMeshComponent*>();
}

UPlayerFPAnimInstance* APlayerCharacter::GetFPAnimInstance() const {
    return NULL;
}

AItem* APlayerCharacter::GetEquippedItem() const {
    return NULL;
}

float APlayerCharacter::GetDownTime() const {
    return 0.0f;
}

APlayerCharacter* APlayerCharacter::GetDownCameraTarget() const {
    return NULL;
}




ECharacterState APlayerCharacter::GetCurrentState() const {
    return ECharacterState::Walking;
}

UCommunicationComponent* APlayerCharacter::GetCommunicationComponent() const {
    return NULL;
}

float APlayerCharacter::GetClassXP() {
    return 0.0f;
}

UCharacterVanityComponent* APlayerCharacter::GetCharacterVanity() const {
    return NULL;
}

UCharacterStateComponent* APlayerCharacter::GetCharacterStateComponent(ECharacterState State) const {
    return NULL;
}

UBXEStatCounterComponent* APlayerCharacter::GetBXEStatCounterComponent() const {
    return NULL;
}

UBoosterDeckContainerComponent* APlayerCharacter::GetBoosterDeckContainerComponent() const {
    return NULL;
}

float APlayerCharacter::GetBeginRevivedProgress() const {
    return 0.0f;
}


FString APlayerCharacter::GetAnalyticsClass() const {
    return TEXT("");
}

FRotator APlayerCharacter::GetAimRotation() const {
    return FRotator{};
}

FVector APlayerCharacter::GetActorGroundLocation() const {
    return FVector{};
}

TArray<AGeneratorItemActor*> APlayerCharacter::GetActiveShieldGenerators() {
    return TArray<AGeneratorItemActor*>();
}

UPlayerAnimInstance* APlayerCharacter::GetActiveAnimInstance() const {
    return NULL;
}

UAbilityData* APlayerCharacter::GetAbilityData(APlayerCharacter* InCharacter) {
    return NULL;
}

UAbilityComponent* APlayerCharacter::GetAbilityComponent() const {
    return NULL;
}

bool APlayerCharacter::ForceNormalAnimationsInShowroom() const {
    return false;
}

void APlayerCharacter::ForceIsPressingMovementInputKey() {
}

void APlayerCharacter::ExitVehicle() {
}

void APlayerCharacter::CycleItemUp() {
}

void APlayerCharacter::CycleItemReleased() {
}

void APlayerCharacter::CycleItemPressed() {
}

void APlayerCharacter::CycleItemDown() {
}

void APlayerCharacter::ConsumeCycleItemButton() {
}

void APlayerCharacter::Client_TestGenerationDesync_Implementation() {
}

void APlayerCharacter::Client_OpenMinersManual_Implementation() {
}

void APlayerCharacter::Client_AddImpulse_Implementation(const FVector_NetQuantizeNormal& Direction, float Force) {
}

void APlayerCharacter::Client_ActivateTemporaryBuff_Implementation(UTemporaryBuff* buff) {
}

void APlayerCharacter::ChangeState(ECharacterState NewState) {
}

void APlayerCharacter::ChangeIfDifferentState(ECharacterState NewState) {
}

bool APlayerCharacter::CanEscapeFromGrabber() const {
    return false;
}

void APlayerCharacter::CallDonkeyReleased() {
}

void APlayerCharacter::CallDonkeyPressed() {
}



void APlayerCharacter::AnnounceSchematicCollected(USchematic* InSchematic) {
}

void APlayerCharacter::All_StartSalute_Implementation(UAnimMontage* saluteMontage) {
}

void APlayerCharacter::All_ShowImpactEffects_Implementation(UFXSystemAsset* Particles, FVector_NetQuantize Location, FVector_NetQuantizeNormal orientation) const {
}

void APlayerCharacter::All_ShowFieldMedicInstantReviveEffects_Implementation() {
}

void APlayerCharacter::All_PlayCompletedUseMontage_Implementation(UUseAnimationSetting* useSetting) {
}

void APlayerCharacter::All_OnCharacterUsedAirJump_Implementation(APlayerCharacter* InPlayer) {
}

void APlayerCharacter::All_CheatFlareInfiniteDuration_Implementation(bool Enabled) {
}

void APlayerCharacter::AddRunningBoostEffects(TArray<TSubclassOf<UStatusEffect>> effects) {
}

void APlayerCharacter::AddRunningBoostEffect(TSubclassOf<UStatusEffect> effect) {
}

void APlayerCharacter::AddPlayerResource(UResourceData* Resource, float Amount) {
}

void APlayerCharacter::AddImpulseToActor(AFSDPhysicsActor* Target, FVector_NetQuantize Impulse, FVector_NetQuantize Location, FVector_NetQuantize AngularImpulse) {
}

void APlayerCharacter::AddImpulseFromVector(const FVector& Vector) {
}

void APlayerCharacter::AddImpulseFromDirectionAndForce(const FVector& Direction, float Force) {
}

void APlayerCharacter::AddCloseFlare() {
}

void APlayerCharacter::AcknowledgeCharacterState_Implementation(ECharacterState eState) {
}

void APlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlayerCharacter, IsCloseToFlare);
    DOREPLIFETIME(APlayerCharacter, IsPressingMovementInputKey);
    DOREPLIFETIME(APlayerCharacter, ActiveCharacterState);
    DOREPLIFETIME(APlayerCharacter, IsRunning);
    DOREPLIFETIME(APlayerCharacter, bIsWorkingout);
    DOREPLIFETIME(APlayerCharacter, HeadLightOn);
    DOREPLIFETIME(APlayerCharacter, isUsing);
    DOREPLIFETIME(APlayerCharacter, IsStandingDown);
    DOREPLIFETIME(APlayerCharacter, IsDancing);
    DOREPLIFETIME(APlayerCharacter, DanceMove);
    DOREPLIFETIME(APlayerCharacter, PlayerIsLeavingInDroppod);
    DOREPLIFETIME(APlayerCharacter, StageEndLocation);
}


