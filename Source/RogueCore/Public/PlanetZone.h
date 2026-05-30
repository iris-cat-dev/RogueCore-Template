#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
#include "SavableDataAsset.h"
#include "PlanetZone.generated.h"

class UBiome;
class UFSDSaveGame;

UCLASS(Blueprintable)
class UPlanetZone : public USavableDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ZoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBiome*> Biomes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MustBeUnlocked;
    
public:
    UPlanetZone();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBiome* PickBiome(FRandomStream& Random) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnLocked(const UFSDSaveGame* SaveGame) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBiome(const UBiome* Biome) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetZoneName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UBiome*> GetBiomes() const;
    
};

