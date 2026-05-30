#include "SpawnActorGenerationItem.h"
#include "Components/BoxComponent.h"

ASpawnActorGenerationItem::ASpawnActorGenerationItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Root"));
    this->ActorToSpawn = nullptr;
    this->Box = static_cast<UBoxComponent*>(RootComponent);
}


