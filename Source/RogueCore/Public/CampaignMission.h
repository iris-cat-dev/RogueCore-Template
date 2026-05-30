#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ECampaignMutators.h"
#include "RequiredMissionItem.h"
#include "CampaignMission.generated.h"

class UDialogDataAsset;
class UPlanetZone;
class UReward;
class URiskVector;
class UStageTemplate;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UCampaignMission : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlanetZone* PlanetZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequiredMissionItem mission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UReward*> Rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* MissionCompleteShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideMutators;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECampaignMutators MutatorOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URiskVector*> AllowedRiskVectors;
    
public:
    UCampaignMission();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStageTemplate* GetMissionTemplate() const;
    
};

