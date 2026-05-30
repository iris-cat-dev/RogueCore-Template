#include "PlanetZone.h"

UPlanetZone::UPlanetZone() {
    this->MustBeUnlocked = true;
}

UBiome* UPlanetZone::PickBiome(FRandomStream& Random) const {
    return NULL;
}

bool UPlanetZone::IsUnLocked(const UFSDSaveGame* SaveGame) const {
    return false;
}

bool UPlanetZone::HasBiome(const UBiome* Biome) const {
    return false;
}

FText UPlanetZone::GetZoneName() const {
    return FText::GetEmpty();
}

TArray<UBiome*> UPlanetZone::GetBiomes() const {
    return TArray<UBiome*>();
}


