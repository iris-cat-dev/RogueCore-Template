#include "InfluenceTester.h"
#include "Components/SphereComponent.h"

AInfluenceTester::AInfluenceTester(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Influencer = nullptr;
    this->Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
}


