#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "BXELogicUnlockComponent.h"
#include "Templates/SubclassOf.h"
#include "BXEDeferredSpawnLogicUnlock.generated.h"

class AActor;
class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBXEDeferredSpawnLogicUnlock : public UBXELogicUnlockComponent {
    GENERATED_BODY()
public:
    UBXEDeferredSpawnLogicUnlock(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AActor* SetupSpawn(TSubclassOf<AActor> Spawnable, APawn* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void FinishSpawning(AActor* Actor, const FTransform& Transform);
    
};

