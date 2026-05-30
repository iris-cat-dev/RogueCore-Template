#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=ENetworkFailure -FallbackName=ENetworkFailure
#include "TXHandShake.h"
#include "Templates/SubclassOf.h"
#include "TelemetrySubsystem.generated.h"

class UFSDGameInstance;
class UIntelCampaignSubsystem;
class UIntelChallenge;
class UIntelObjective;
class UNetDriver;
class URunManager;
class UWorld;

UCLASS(Blueprintable)
class UTelemetrySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SessionSequenceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTXHandShake HandShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString TelemetrySessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString TelemetryRelativeEndPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString TelemetryTopic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid ActiveRunGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFSDGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URunManager* RunManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIntelCampaignSubsystem* IntelSystem;
    
public:
    UTelemetrySubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnNetworkFailure(UWorld* World, UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure::Type> failType, const FString& ErrorMessage);
    
    UFUNCTION(BlueprintCallable)
    void OnIntelObjectiveClaimed(UIntelObjective* Objective);
    
    UFUNCTION(BlueprintCallable)
    void OnIntelChallengeClaimed(TSubclassOf<UIntelChallenge> ChallengeClass);
    
    UFUNCTION(BlueprintCallable)
    void CheckForRunAndStageStart();
    
    UFUNCTION(BlueprintCallable)
    void CheckForRunAndStageEnd();
    
};

