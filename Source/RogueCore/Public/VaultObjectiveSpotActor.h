#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VaultObjectiveSpotActor.generated.h"

class USceneComponent;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API AVaultObjectiveSpotActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
public:
    AVaultObjectiveSpotActor(const FObjectInitializer& ObjectInitializer);

};

