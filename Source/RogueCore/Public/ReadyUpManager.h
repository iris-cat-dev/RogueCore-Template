#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EReadyUpStage.h"
#include "ReadyUpParticipant.h"
#include "ReadyUpState.h"
#include "SingleDelegateDelegate.h"
#include "ReadyUpManager.generated.h"

class AFSDPlayerState;
class UReadyUpWindow;

UCLASS(Blueprintable)
class ROGUECORE_API UReadyUpManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FReadyUpEvent);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReadyUpEvent OnReadyUpStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReadyUpEvent OnReadyUpFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReadyUpState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSingleDelegate OnCompletedCallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UReadyUpWindow> ReadyUpWindow;
    
public:
    UReadyUpManager();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartReadyUp(const FSingleDelegate& OnCompleted);
    
    UFUNCTION(BlueprintCallable)
    void SetIsReady(const AFSDPlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyingUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EReadyUpStage GetReadyUpStage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FReadyUpParticipant> GetReadyUpParticipants() const;
    
};

