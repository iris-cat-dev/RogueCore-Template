#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "GameplayTagContainer.h"
#include "ECharacterState.h"
#include "HeroInfo.h"
#include "Templates/SubclassOf.h"
#include "ActorFunctionLibrary.generated.h"

class AActor;
class AFSDGameMode;
class AFSDGameState;
class AFSDPlayerState;
class APlayerCharacter;
class APlayerController;
class IBlendableInterface;
class UBlendableInterface;
class UActorComponent;
class UEnemyComponent;
class UEnemyID;
class UFSDPhysicalMaterial;
class UFXSystemAsset;
class UInventoryList;
class UItemID;
class UMaterialInstanceDynamic;
class UMeshComponent;
class UObject;
class UPathfinderCollisionComponent;
class UPlayerCharacterID;
class UPostProcessComponent;
class USceneComponent;
class USoundCue;
class UTexture2D;
class UUserWidget;
class UWindowWidget;

UCLASS(Blueprintable)
class ROGUECORE_API UActorFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UActorFunctionLibrary();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void UnlockSpecificCharacters(TArray<APlayerCharacter*> Characters, ECharacterState UnlockIf, ECharacterState UnlockTo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnlockCharacters(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float TimeSince(UObject* WorldContextObject, float Time);
    
    UFUNCTION(BlueprintCallable)
    static void SetScalarParameters(FName ParameterName, float Value, const TArray<UMaterialInstanceDynamic*>& Materials);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void PlayCueOnClient(APlayerController* Target, USoundCue* cue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayCueOnAll(UObject* WorldContextObject, USoundCue* cue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float PingPong(float Time, float Length, bool Normalize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float MoveTowards(float Current, float End, float step);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void LockSpecificCharactersIfState(TArray<APlayerCharacter*> Characters, ECharacterState stateToLock);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void LockSpecificCharacters(TArray<APlayerCharacter*> Characters);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool LockSpecificCharacterIfState(APlayerCharacter* Character, ECharacterState LockIf, ECharacterState LockTo);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LockCharacters(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<UWindowWidget> LoadWindowWidgetClass(TSoftClassPtr<UWindowWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<UUserWidget> LoadWidgetClass(TSoftClassPtr<UUserWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    static UClass* LoadClass(TSoftClassPtr<UObject> SoftReference);
    
    UFUNCTION(BlueprintCallable)
    static void KillActorWithEffects(AActor* Actor, USceneComponent* visualsToHide, USoundCue* deathSound, UFXSystemAsset* deathParticles, float particleScale, UPathfinderCollisionComponent* pathColliderToDisable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWeakPoint(UFSDPhysicalMaterial* Material);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSingleplayer(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMovingPlatform(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInRangeOfLocalPlayer(AActor* toActor, float MinDistance, float MaxDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCloseToLocalPlayer(AActor* toActor, float Distance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasActorBegunPlay(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetSaveGameIDFromCharacterID(UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid GetSaveGameID(UClass* ObjectClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<APlayerCharacter*> GetPlayersInRange(UObject* WorldContextObject, const FVector& Origin, float Radius, const bool allowClientUse, bool MustBeAlive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<APlayerCharacter*> GetPlayerCharactersThatAreAlive(const UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<APlayerCharacter*> GetPlayerCharactersNotBurried(const UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<APlayerCharacter*> GetPlayerCharactersLeavingInDropPod(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static APlayerCharacter* GetLocalPlayerCharacter(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UItemID* GetItemID(TSubclassOf<AActor> itemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetHeroXP(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetHeroSourceName(TSubclassOf<APlayerCharacter> PlayerClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetHeroProgress(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetHeroName(TSubclassOf<APlayerCharacter> PlayerClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetHeroLevel(const UObject* WorldContextObject, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UInventoryList* GetHeroInventoryList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FHeroInfo GetHeroInfo(TSubclassOf<APlayerCharacter> PlayerClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetHeroImageSmall(TSubclassOf<APlayerCharacter> PlayerClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetHeroColor(TSubclassOf<APlayerCharacter> PlayerClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UEnemyID* GetEnemyId(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UActorComponent*> GetComponentsFromClass(TSubclassOf<AActor> Actor, const TSubclassOf<UActorComponent> ComponentClass);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* GetComponentFromClass(TSubclassOf<AActor> Actor, TSubclassOf<UActorComponent> ComponentClass);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* GetComponentByClass(AActor* Actor, TSubclassOf<UActorComponent> ComponentClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPlayerCharacterID* GetCharacterIDFromCharacter(APlayerCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPlayerCharacterID* GetCharacterID(TSubclassOf<APlayerCharacter> PlayerClass);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetActorTargetCenter(const AActor* targetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<AFSDPlayerState*> GetActivePlayerStates(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<APlayerCharacter*> GetActivePlayerCharacters(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void FSDRemoveBlendable(UPostProcessComponent* PostProcessComponent, TScriptInterface<IBlendableInterface> InBlendableObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FSDRemoveAllWidgets(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void FSDDumpCallStack(const FString& Msg);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerCharacter* FindNearestPlayerCharacter(UObject* WorldContextObject, FVector fromLocation, float MaxRadius, bool MustBeAlive, bool MustBeUnparalyzed, bool MustHaveLineOfSight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<USceneComponent*> FindNearestComponents(const TArray<USceneComponent*>& ComponentsToCheck, const int32 AmountOfComponentsToFind, const FVector NearTo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USceneComponent* FindNearestComponent(const TArray<USceneComponent*>& ComponentsToCheck, const FVector NearTo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* FindNearestActor(const TArray<AActor*>& ActorsToCheck, const FVector NearTo);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static FVector FindLatejoinDroppodLocation(AFSDGameMode* GameMode);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* FindClosestEnemyFromLocation(const FVector& fromLocation, float Range, bool LineOfSightCheck, UObject* WorldContextObject, const TArray<AActor*>& IgnoredActors, const FVector& Offset, bool onlyTargetable);
    
    UFUNCTION(BlueprintCallable)
    static AActor* FindClosestEnemyFromActorWithSkipChance(AActor* FromActor, float Range, float SkipChance, bool LineOfSightCheck, const FGameplayTagQuery& TagQuery, FVector Offset);
    
    UFUNCTION(BlueprintCallable)
    static AActor* FindClosestEnemyFromActor(AActor* FromActor, float Range, bool LineOfSightCheck, const FGameplayTagQuery& TagQuery, const FVector& Offset);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector FindCharacterTeleportLocation(UObject* WorldContextObject, const FVector& closeToLocation, float desiredDistance);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FadeMaterials(const UObject* WorldContextObject, const UMeshComponent* mesh, float duration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float EvaluateRuntimeCurve(UObject* WorldContextObject, const FRuntimeFloatCurve& Curve, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesActorHaveEnemyId(const AActor* Actor, const UEnemyID* EnemyID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DissolveMaterials(const UObject* WorldContextObject, const UMeshComponent* mesh, float duration);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMaterialInstanceDynamic*> CreateDynamicMaterialInstances(UMeshComponent* mesh);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float AddHeroXP(UObject* WorldContextObject, UPlayerCharacterID* characterID, float Amount);
    
    UFUNCTION(BlueprintCallable)
    static void AddEnemyKill(APlayerCharacter* Instigator, UEnemyComponent* EnemyComponent, AFSDGameState* GameState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ActorMatchesTagQuery(const FGameplayTagQuery& Query, const AActor* InActor);
    
};

