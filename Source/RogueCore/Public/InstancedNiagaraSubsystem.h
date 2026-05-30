#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "InstancedNiagaraSubsystem.generated.h"

class UInstancedNiagaraComponent;
class UNiagaraSystem;

UCLASS(Blueprintable)
class UInstancedNiagaraSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<UNiagaraSystem*, UInstancedNiagaraComponent*> SystemToComponent;
    
public:
    UInstancedNiagaraSubsystem();

    UFUNCTION(BlueprintCallable)
    void SpawnSystemAtLocation(UNiagaraSystem* InSystem, const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable)
    void SpawnEmittersAtLocation(UNiagaraSystem* InSystem, const TArray<int32>& InEmitterIndex, const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInstancingSetUpForSystem(UNiagaraSystem* InSystem);
    
};

