#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VaultObjectiveActor.generated.h"

class USceneComponent;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API AVaultObjectiveActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
public:
    AVaultObjectiveActor(const FObjectInitializer& ObjectInitializer);

};

