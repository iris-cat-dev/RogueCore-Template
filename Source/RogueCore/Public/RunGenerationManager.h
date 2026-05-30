#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "GeneratedRunGroup.h"
#include "GeneratedRunsForBiome.h"
#include "RunGenerationManager.generated.h"

class UStage;

UCLASS(Blueprintable)
class ROGUECORE_API URunGenerationManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FGeneratedRunGroup> AllRunGroups;
    
public:
    URunGenerationManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UStage*> GetStages(int32 Seed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UStage*> GetAvailableStages();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGeneratedRunsForBiome> GenerateRuns(const int32 Seed);
    
};

