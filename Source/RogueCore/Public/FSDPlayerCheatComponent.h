#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "FSDPlayerCheatComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UFSDPlayerCheatComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFSDPlayerCheatComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetHealth(float newHealthValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetArmor(float NewArmorValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SpawnPlayerInMedbay();
    
};

