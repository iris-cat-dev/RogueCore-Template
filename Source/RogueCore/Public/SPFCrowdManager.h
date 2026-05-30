#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SPFCrowdManager.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API ASPFCrowdManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AllSPFActors;
    
    ASPFCrowdManager(const FObjectInitializer& ObjectInitializer);

};

