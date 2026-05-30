#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "BXENegotiationData.h"
#include "BXENegotiationParticipant.h"
#include "BXEUnlockInstance.h"
#include "CursorInterpolator.h"
#include "ItemSlotIndex.h"
#include "WindowWidget.h"
#include "BXENegotiationWidget.generated.h"

class AFSDPlayerState;
class APlayerState;
class UBXENegotiationParticipantComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBXENegotiationWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UBXENegotiationParticipantComponent> participant;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXENegotiationData NegotiationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBXEUnlockInstance UnlockThatIsSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FItemSlotIndex UnlockSlotThatIsSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedUnlockIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedDroneUnlockIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCursorInterpolator CursorInterpolator;
    
public:
    UBXENegotiationWidget();

protected:
    UFUNCTION(BlueprintCallable)
    bool SelectUnlock(const FBXEUnlockInstance& InUnlock, FItemSlotIndex InUnlockSlot, int32 InUnlockIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SelectDroneUnlock(int32 InDroneUnlockIndex);
    
    UFUNCTION(BlueprintCallable)
    bool RequestUnlock(int32 InUnlockIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUnlocksChanged(const TArray<FBXEUnlockInstance>& InPreviousUnlocks);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTurnChanged(int32 InParticipantIndex, APlayerState* InParticipant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveParticipantsChanged(const TArray<FBXENegotiationParticipant>& InParticipants);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveParticipantCursorChanged(AFSDPlayerState* InPlayerState, FVector2D InViewPortPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDataChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBeginSelectDroneUnlock();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlockSelected(int32 InUnlockIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNegotiationFinishing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AFSDPlayerState*> GetUnlockSelectedBy(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AFSDPlayerState*> GetUnlockRequestedBy(int32 InUnlockIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMyTurnPending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsItMyTurn() const;
    
};

