#include "BoxProjectile.h"
#include "Components/BoxComponent.h"

ABoxProjectile::ABoxProjectile(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer.SetDefaultSubobjectClass<UBoxComponent>(TEXT("SphereComponent"))) {
    this->CollisionComponent = static_cast<UShapeComponent*>(RootComponent);
}


