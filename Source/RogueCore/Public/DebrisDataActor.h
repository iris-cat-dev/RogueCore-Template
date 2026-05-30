#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DebrisDataActor.generated.h"

class UDebrisActorComponent;

UCLASS(Abstract, Blueprintable)
class ADebrisDataActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDebrisActorComponent*> InfluencerNetworkMap;
    
    ADebrisDataActor(const FObjectInitializer& ObjectInitializer);

};

