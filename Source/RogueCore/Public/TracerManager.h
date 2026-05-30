#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "TracerManager.generated.h"

class UNiagaraSystem;

UCLASS(Abstract, Blueprintable)
class UTracerManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WhizByStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WhizByMaxDistanceFromTrajectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WhizBySpeed;
    
public:
    UTracerManager();

    UFUNCTION(BlueprintCallable)
    void AddTracer(FVector Origin, const FVector& Destination, float Speed, UNiagaraSystem* particle, float MinDistance, float Offset, UNiagaraSystem* Trail);
    
};

