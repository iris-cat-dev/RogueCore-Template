#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BXENegotiationData.h"
#include "DelegateDelegate.h"
#include "OnReportNegotiationResultDelegate.h"
#include "BXENegotiationManager.generated.h"

class AFSDPlayerState;
class UBXEUnlockBase;
class URunManager;

UCLASS(Blueprintable)
class ROGUECORE_API UBXENegotiationManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnNegotiationDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReportNegotiationResult OnReportNegotiationResult;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URunManager* BXEManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBXENegotiationData NegotiationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBXEUnlockBase*> DroneRewardHistory;
    
public:
    UBXENegotiationManager();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<AFSDPlayerState*> GetPlayersForNegotiationStart(const UObject* WorldContext);
    
};

