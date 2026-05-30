#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockInstance.generated.h"

class AActor;
class UBXEAttributeUnlock;
class UBXEUnlockBase;
class UBXEUnlockRarity;

USTRUCT(BlueprintType)
struct FBXEUnlockInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBXEUnlockBase* Unlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBXEUnlockRarity* UsedRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanBePickedMultipleTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBXEAttributeUnlock*> AttributeUnlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* PreviousActor;
    
    ROGUECORE_API FBXEUnlockInstance();
};

