#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ECampaignType.h"
#include "Templates/SubclassOf.h"
#include "CampaignManager.generated.h"

class AFSDPlayerController;
class UCampaign;
class UDifficultySetting;
class UFSDSaveGame;
class UStage;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API UCampaignManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCampaignCompletedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCampaignChangedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignCompletedDelegate OnCampaignCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignChangedDelegate OnCampaignChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCampaign> MainCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCampaign>> WeeklyCampaigns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCampaign>> MatrixCoreHuntCampaigns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCampaign>> SideCampaigns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCampaign>> EventCampaigns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCampaign* ActiveCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumFailedRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool WeeklyBackendDataValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WeeklyBackendSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime WeeklyBackendExpirationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime LastRequestTime;
    
public:
    UCampaignManager();

    UFUNCTION(BlueprintCallable)
    void StartNewCampaign(TSubclassOf<UCampaign> campaignClass, UFSDSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SkipMainCampaign(UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEventsRefreshed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool IsWeeklyCampaignCompleted(UObject* WorldContext, ECampaignType campaigntype) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCampaignMission(AFSDPlayerController* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool IsCampaignRestrictionsMet(UObject* WorldContextObject, UStage* mission, UDifficultySetting* optionalDifficulty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool IsCampaignMission(UObject* WorldContextObject, UStage* mission) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveCampaign(UCampaign* Campaign) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UCampaign>> GetUncompletedCampaigns(AFSDPlayerController* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UCampaign>> GetCompletedSideCampaigns(AFSDPlayerController* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    UStage* GetCampaingMissionFromSeeds(UObject* WorldContextObject, int32 globalSeed, int32 missionSeed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStage* GetCampaingMission(const TArray<UStage*>& missions, int32 missionSeed) const;
    
    UFUNCTION(BlueprintCallable)
    void CompleteCampaignWithNoMissions(TSubclassOf<UCampaign> campaignClass, UFSDSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable)
    void AbortActiveCampaign(UFSDSaveGame* SaveGame);
    
};

