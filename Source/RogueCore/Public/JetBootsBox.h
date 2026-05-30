#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ActorTrackingCheatInterface.h"
#include "JetBootsBox.generated.h"

class USpecialEvent;
class UTerrainPlacementComponent;

UCLASS(Blueprintable)
class AJetBootsBox : public AActor, public IActorTrackingCheatInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTerrainPlacementComponent* terrainPlacement;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpecialEvent* SpecialEvent;
    
public:
    AJetBootsBox(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

