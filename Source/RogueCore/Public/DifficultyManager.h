#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EEnemyHealthScaling.h"
#include "DifficultyManager.generated.h"

class AFSDGameMode;
class AFSDGameState;
class UDifficultySetting;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDifficultyManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinModifierEnemyCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinModifierAttackCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinModifierSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseSoloSpawnCountIfLastManStanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForcedPlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFSDGameMode* GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFSDGameState* GameState;
    
public:
    UDifficultyManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UDifficultySetting* SelectDifficulty(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPointExtractionScaler() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemyDamageResistance(EEnemyHealthScaling healthScaling) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemyDamageModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemyCountModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDifficultySetting* GetCurrentDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBossDifficultyScaler() const;
    
};

