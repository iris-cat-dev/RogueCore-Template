#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BXEProspectingLogsActor.generated.h"

class UBXEProspectingLogsObjective;

UCLASS(Blueprintable)
class ABXEProspectingLogsActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBXEProspectingLogsObjective* Objective;
    
public:
    ABXEProspectingLogsActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void LogFound();
    
};

