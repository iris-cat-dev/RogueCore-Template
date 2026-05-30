#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockCollection.h"
#include "BXEUnlockPoolComposite.generated.h"

class UBXEUnlockPool;

UCLASS(Blueprintable)
class UBXEUnlockPoolComposite : public UBXEUnlockCollection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UBXEUnlockPool*> UnlockPools;
    
public:
    UBXEUnlockPoolComposite();

};

