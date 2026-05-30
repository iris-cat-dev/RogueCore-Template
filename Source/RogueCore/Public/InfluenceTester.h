#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "InfluenceTester.generated.h"

class UCaveInfluencer;
class USphereComponent;

UCLASS(Blueprintable)
class AInfluenceTester : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCaveInfluencer* Influencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* Sphere;
    
    AInfluenceTester(const FObjectInitializer& ObjectInitializer);

};

