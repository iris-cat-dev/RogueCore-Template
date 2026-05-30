#include "CSGBuilder.h"
#include "CSGGroupComponent.h"

ACSGBuilder::ACSGBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCSGGroupComponent>(TEXT("CSGRoot"));
    this->CSGRoot = (UCSGGroupComponent*)RootComponent;
    this->CurrentPreviewRoot = nullptr;
    this->CurrentPreviewConfig = nullptr;
    this->PreviewScene = nullptr;
}


