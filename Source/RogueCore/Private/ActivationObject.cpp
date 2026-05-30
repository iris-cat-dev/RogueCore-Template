#include "ActivationObject.h"
#include "SingleUsableComponent.h"

AActivationObject::AActivationObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->usable = CreateDefaultSubobject<USingleUsableComponent>(TEXT("usable"));
    this->HasBeenUsed = false;
}

void AActivationObject::OnUsedBy(APlayerCharacter* User, EInputKeys Key) {
}


