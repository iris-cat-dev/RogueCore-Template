#pragma once
#include "CoreMinimal.h"
#include "EInputKeys.h"
#include "UsedBySignatureWithUsableReferenceDelegate.generated.h"

class APlayerCharacter;
class UUsableComponentBase;

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FUsedBySignatureWithUsableReference, APlayerCharacter*, User, EInputKeys, Key, UUsableComponentBase*, usable);

