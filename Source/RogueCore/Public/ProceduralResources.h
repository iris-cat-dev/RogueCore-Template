#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "ProceduralResources.generated.h"

class AProceduralSetup;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UProceduralResources : public UActorComponent {
    GENERATED_BODY()
public:
    UProceduralResources(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void GenerateResources();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void GenerateMissingCarvedResources_Async(const AProceduralSetup* setup, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void GenerateMissingCarvedResources();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void GenerateCarvedResources_Async(const AProceduralSetup* setup, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void GenerateCarvedResources();
    
    UFUNCTION(BlueprintCallable)
    void CreateResourcesFromObjectives();
    
    UFUNCTION(BlueprintCallable)
    void CountGeneratedCarvedResources();
    
    UFUNCTION(BlueprintCallable)
    void CountFinalGeneratedCarvedResources();
    
};

