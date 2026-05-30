#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PuddleTrackerComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPuddleTrackerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPuddleTrackerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPuddleDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetPuddles(TArray<AActor*>& Locations);
    
    UFUNCTION(BlueprintCallable)
    void GetPuddleLocations(TArray<FVector>& Locations);
    
    UFUNCTION(BlueprintCallable)
    void AddPuddle(AActor* puddle);
    
};

