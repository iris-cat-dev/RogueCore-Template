#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "CampaignRequirement.h"
#include "WeeklyTimerCampaignRequirement.generated.h"

class AFSDPlayerController;
class UCampaign;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UWeeklyTimerCampaignRequirement : public UCampaignRequirement {
    GENERATED_BODY()
public:
    UWeeklyTimerCampaignRequirement();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetWeeklyTimeLeft(AFSDPlayerController* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetTimeUntillNewCampaign(AFSDPlayerController* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasCompleted(UCampaign* Campaign, AFSDPlayerController* Player) const;
    
};

