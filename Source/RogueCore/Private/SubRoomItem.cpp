#include "SubRoomItem.h"
#include "Components/SphereComponent.h"

ASubRoomItem::ASubRoomItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("collider"));
    this->RoomGenerator = nullptr;
    this->Layer = 0;
}


