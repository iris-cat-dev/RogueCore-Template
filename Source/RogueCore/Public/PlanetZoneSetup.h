#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PlanetZoneSetup.generated.h"

class UBiome;
class UPlanetZone;

UCLASS(Blueprintable)
class UPlanetZoneSetup : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlanetZone*> PlanetZones;
    
public:
    UPlanetZoneSetup();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPlanetZone*> GetPlanetZones() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlanetZone* GetPlanetZoneForBiome(const UBiome* Biome, int32& zoneIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlanetZone* FindPlanetZoneForBiome(const UBiome* Biome) const;
    
};

