#include "ActorFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UActorFunctionLibrary::UActorFunctionLibrary() {
}

void UActorFunctionLibrary::UnlockSpecificCharacters(TArray<APlayerCharacter*> Characters, ECharacterState UnlockIf, ECharacterState UnlockTo) {
}

void UActorFunctionLibrary::UnlockCharacters(UObject* WorldContextObject) {
}

float UActorFunctionLibrary::TimeSince(UObject* WorldContextObject, float Time) {
    return 0.0f;
}

void UActorFunctionLibrary::SetScalarParameters(FName ParameterName, float Value, const TArray<UMaterialInstanceDynamic*>& Materials) {
}

void UActorFunctionLibrary::PlayCueOnClient(APlayerController* Target, USoundCue* cue) {
}

void UActorFunctionLibrary::PlayCueOnAll(UObject* WorldContextObject, USoundCue* cue) {
}

float UActorFunctionLibrary::PingPong(float Time, float Length, bool Normalize) {
    return 0.0f;
}

float UActorFunctionLibrary::MoveTowards(float Current, float End, float step) {
    return 0.0f;
}

void UActorFunctionLibrary::LockSpecificCharactersIfState(TArray<APlayerCharacter*> Characters, ECharacterState stateToLock) {
}

void UActorFunctionLibrary::LockSpecificCharacters(TArray<APlayerCharacter*> Characters) {
}

bool UActorFunctionLibrary::LockSpecificCharacterIfState(APlayerCharacter* Character, ECharacterState LockIf, ECharacterState LockTo) {
    return false;
}

void UActorFunctionLibrary::LockCharacters(UObject* WorldContextObject) {
}

TSubclassOf<UWindowWidget> UActorFunctionLibrary::LoadWindowWidgetClass(TSoftClassPtr<UWindowWidget> WidgetClass) {
    return NULL;
}

TSubclassOf<UUserWidget> UActorFunctionLibrary::LoadWidgetClass(TSoftClassPtr<UUserWidget> WidgetClass) {
    return NULL;
}

UClass* UActorFunctionLibrary::LoadClass(TSoftClassPtr<UObject> SoftReference) {
    return NULL;
}

void UActorFunctionLibrary::KillActorWithEffects(AActor* Actor, USceneComponent* visualsToHide, USoundCue* deathSound, UFXSystemAsset* deathParticles, float particleScale, UPathfinderCollisionComponent* pathColliderToDisable) {
}

bool UActorFunctionLibrary::IsWeakPoint(UFSDPhysicalMaterial* Material) {
    return false;
}

bool UActorFunctionLibrary::IsSingleplayer(UObject* WorldContextObject) {
    return false;
}

bool UActorFunctionLibrary::IsMovingPlatform(AActor* Actor) {
    return false;
}

bool UActorFunctionLibrary::IsInRangeOfLocalPlayer(AActor* toActor, float MinDistance, float MaxDistance) {
    return false;
}

bool UActorFunctionLibrary::IsCloseToLocalPlayer(AActor* toActor, float Distance) {
    return false;
}

bool UActorFunctionLibrary::HasActorBegunPlay(const AActor* Actor) {
    return false;
}

FGuid UActorFunctionLibrary::GetSaveGameIDFromCharacterID(UPlayerCharacterID* characterID) {
    return FGuid{};
}

FGuid UActorFunctionLibrary::GetSaveGameID(UClass* ObjectClass) {
    return FGuid{};
}

TArray<APlayerCharacter*> UActorFunctionLibrary::GetPlayersInRange(UObject* WorldContextObject, const FVector& Origin, float Radius, const bool allowClientUse, bool MustBeAlive) {
    return TArray<APlayerCharacter*>();
}

TArray<APlayerCharacter*> UActorFunctionLibrary::GetPlayerCharactersThatAreAlive(const UObject* Context) {
    return TArray<APlayerCharacter*>();
}

TArray<APlayerCharacter*> UActorFunctionLibrary::GetPlayerCharactersNotBurried(const UObject* Context) {
    return TArray<APlayerCharacter*>();
}

TArray<APlayerCharacter*> UActorFunctionLibrary::GetPlayerCharactersLeavingInDropPod(const UObject* WorldContext) {
    return TArray<APlayerCharacter*>();
}

APlayerCharacter* UActorFunctionLibrary::GetLocalPlayerCharacter(const UObject* WorldContext) {
    return NULL;
}

UItemID* UActorFunctionLibrary::GetItemID(TSubclassOf<AActor> itemClass) {
    return NULL;
}

float UActorFunctionLibrary::GetHeroXP(UObject* WorldContextObject, UPlayerCharacterID* characterID) {
    return 0.0f;
}

FString UActorFunctionLibrary::GetHeroSourceName(TSubclassOf<APlayerCharacter> PlayerClass) {
    return TEXT("");
}

float UActorFunctionLibrary::GetHeroProgress(UObject* WorldContextObject, UPlayerCharacterID* characterID) {
    return 0.0f;
}

FText UActorFunctionLibrary::GetHeroName(TSubclassOf<APlayerCharacter> PlayerClass) {
    return FText::GetEmpty();
}

int32 UActorFunctionLibrary::GetHeroLevel(const UObject* WorldContextObject, UPlayerCharacterID* characterID) {
    return 0;
}

UInventoryList* UActorFunctionLibrary::GetHeroInventoryList() {
    return NULL;
}

FHeroInfo UActorFunctionLibrary::GetHeroInfo(TSubclassOf<APlayerCharacter> PlayerClass) {
    return FHeroInfo{};
}

UTexture2D* UActorFunctionLibrary::GetHeroImageSmall(TSubclassOf<APlayerCharacter> PlayerClass) {
    return NULL;
}

FLinearColor UActorFunctionLibrary::GetHeroColor(TSubclassOf<APlayerCharacter> PlayerClass) {
    return FLinearColor{};
}

UEnemyID* UActorFunctionLibrary::GetEnemyId(const AActor* Actor) {
    return NULL;
}

TArray<UActorComponent*> UActorFunctionLibrary::GetComponentsFromClass(TSubclassOf<AActor> Actor, const TSubclassOf<UActorComponent> ComponentClass) {
    return TArray<UActorComponent*>();
}

UActorComponent* UActorFunctionLibrary::GetComponentFromClass(TSubclassOf<AActor> Actor, TSubclassOf<UActorComponent> ComponentClass) {
    return NULL;
}

UActorComponent* UActorFunctionLibrary::GetComponentByClass(AActor* Actor, TSubclassOf<UActorComponent> ComponentClass) {
    return NULL;
}

UPlayerCharacterID* UActorFunctionLibrary::GetCharacterIDFromCharacter(APlayerCharacter* Character) {
    return NULL;
}

UPlayerCharacterID* UActorFunctionLibrary::GetCharacterID(TSubclassOf<APlayerCharacter> PlayerClass) {
    return NULL;
}

FVector UActorFunctionLibrary::GetActorTargetCenter(const AActor* targetActor) {
    return FVector{};
}

TArray<AFSDPlayerState*> UActorFunctionLibrary::GetActivePlayerStates(const UObject* WorldContext) {
    return TArray<AFSDPlayerState*>();
}

TArray<APlayerCharacter*> UActorFunctionLibrary::GetActivePlayerCharacters(const UObject* WorldContext) {
    return TArray<APlayerCharacter*>();
}

void UActorFunctionLibrary::FSDRemoveBlendable(UPostProcessComponent* PostProcessComponent, TScriptInterface<IBlendableInterface> InBlendableObject) {
}

void UActorFunctionLibrary::FSDRemoveAllWidgets(UObject* WorldContextObject) {
}

void UActorFunctionLibrary::FSDDumpCallStack(const FString& Msg) {
}

APlayerCharacter* UActorFunctionLibrary::FindNearestPlayerCharacter(UObject* WorldContextObject, FVector fromLocation, float MaxRadius, bool MustBeAlive, bool MustBeUnparalyzed, bool MustHaveLineOfSight) {
    return NULL;
}

TArray<USceneComponent*> UActorFunctionLibrary::FindNearestComponents(const TArray<USceneComponent*>& ComponentsToCheck, const int32 AmountOfComponentsToFind, const FVector NearTo) {
    return TArray<USceneComponent*>();
}

USceneComponent* UActorFunctionLibrary::FindNearestComponent(const TArray<USceneComponent*>& ComponentsToCheck, const FVector NearTo) {
    return NULL;
}

AActor* UActorFunctionLibrary::FindNearestActor(const TArray<AActor*>& ActorsToCheck, const FVector NearTo) {
    return NULL;
}

FVector UActorFunctionLibrary::FindLatejoinDroppodLocation(AFSDGameMode* GameMode) {
    return FVector{};
}

AActor* UActorFunctionLibrary::FindClosestEnemyFromLocation(const FVector& fromLocation, float Range, bool LineOfSightCheck, UObject* WorldContextObject, const TArray<AActor*>& IgnoredActors, const FVector& Offset, bool onlyTargetable) {
    return NULL;
}

AActor* UActorFunctionLibrary::FindClosestEnemyFromActorWithSkipChance(AActor* FromActor, float Range, float SkipChance, bool LineOfSightCheck, const FGameplayTagQuery& TagQuery, FVector Offset) {
    return NULL;
}

AActor* UActorFunctionLibrary::FindClosestEnemyFromActor(AActor* FromActor, float Range, bool LineOfSightCheck, const FGameplayTagQuery& TagQuery, const FVector& Offset) {
    return NULL;
}

FVector UActorFunctionLibrary::FindCharacterTeleportLocation(UObject* WorldContextObject, const FVector& closeToLocation, float desiredDistance) {
    return FVector{};
}

void UActorFunctionLibrary::FadeMaterials(const UObject* WorldContextObject, const UMeshComponent* mesh, float duration) {
}

float UActorFunctionLibrary::EvaluateRuntimeCurve(UObject* WorldContextObject, const FRuntimeFloatCurve& Curve, float Time) {
    return 0.0f;
}

bool UActorFunctionLibrary::DoesActorHaveEnemyId(const AActor* Actor, const UEnemyID* EnemyID) {
    return false;
}

void UActorFunctionLibrary::DissolveMaterials(const UObject* WorldContextObject, const UMeshComponent* mesh, float duration) {
}

TArray<UMaterialInstanceDynamic*> UActorFunctionLibrary::CreateDynamicMaterialInstances(UMeshComponent* mesh) {
    return TArray<UMaterialInstanceDynamic*>();
}

float UActorFunctionLibrary::AddHeroXP(UObject* WorldContextObject, UPlayerCharacterID* characterID, float Amount) {
    return 0.0f;
}

void UActorFunctionLibrary::AddEnemyKill(APlayerCharacter* Instigator, UEnemyComponent* EnemyComponent, AFSDGameState* GameState) {
}

bool UActorFunctionLibrary::ActorMatchesTagQuery(const FGameplayTagQuery& Query, const AActor* InActor) {
    return false;
}


