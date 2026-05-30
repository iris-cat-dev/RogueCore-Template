#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EncounterManagerItem.h"
#include "EncounterManager.generated.h"

class AProceduralSetup;
class UCritterDescriptor;
class UEnemyDescriptor;
class UEnemyGroupDescriptor;
class UEnemySpawnManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UEncounterManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDistanceFromRoomBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEncounterManagerItem> Encounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AProceduralSetup* ProceduralSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnemySpawnManager* SpawnManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyDescriptor*> RCEnemyPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyDescriptor*> EnemyPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEnemyDescriptor*> EncounterPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCritterDescriptor*> CritterPool;
    
public:
    UEncounterManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Exec)
    void ShowSpawnLocations();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEnemyDescriptor*> GetRCEnemyPool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEnemyDescriptor*> GetEncounterPool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UCritterDescriptor*> GetCritterPool() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddEncounterFromGroup(UEnemyGroupDescriptor* Group, float Difficulty, FVector Location, float Radius);
    
};

