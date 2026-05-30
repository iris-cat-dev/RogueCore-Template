#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DeploymentSlotRequirement.h"
#include "GDMissionStats.h"
#include "GDTasks.h"
#include "KPISettings.generated.h"

class UOpsComDeploymentAsset;

UCLASS(Blueprintable)
class UKPISettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDMissionStats MissionStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDTasks Tasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOpsComDeploymentAsset*> Deployments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeploymentSlotRequirement> DeploymentSlotRequirements;
    
    UKPISettings();

};

