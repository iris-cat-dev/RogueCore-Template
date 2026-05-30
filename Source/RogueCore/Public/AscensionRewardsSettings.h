#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "AscensionLevelRewards.h"
#include "ClaimableRewardEntry.h"
#include "AscensionRewardsSettings.generated.h"

UCLASS(Blueprintable)
class UAscensionRewardsSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClaimableRewardEntry> FirstEverAscensionRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAscensionLevelRewards> ClassAscensionRewards;
    
    UAscensionRewardsSettings();

};

