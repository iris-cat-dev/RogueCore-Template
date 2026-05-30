#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "VoteData.h"
#include "VoteOptionInstance.h"
#include "VoteParticipant.h"
#include "WindowWidget.h"
#include "VoteWidget.generated.h"

class AFSDPlayerState;
class UVoteParticipantComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UVoteWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVoteParticipantComponent> participant;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoteData VoteData;
    
public:
    UVoteWidget();

protected:
    UFUNCTION(BlueprintCallable)
    bool Vote(int32 InVoteIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveVotingCompleted(int32 InWinningIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveVoteOptionsChanged(const TArray<FVoteOptionInstance>& InVoteOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTimerStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveParticipantsChanged(const TArray<FVoteParticipant>& InParticipants);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveParticipantCursorChanged(AFSDPlayerState* InPlayerState, FVector2D InViewPortPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDataChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVoteFinishing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVotedBy(int32 OptionIndex, TArray<FString>& OutVotedByNames, int32& OutMaxVotes);
    
};

