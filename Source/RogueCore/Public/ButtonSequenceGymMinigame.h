#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "BaseGymMinigame.h"
#include "EGymActions.h"
#include "ButtonSequenceGymMinigame.generated.h"

class UMinigameSequencePromptWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UButtonSequenceGymMinigame : public UBaseGymMinigame {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMinigameSequencePromptWidget*> SequencePromptWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EGymActions> ButtonSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<bool> ButtonsHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeldButtonTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeldButtonTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InverseHeldButtonTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float progression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovingAnimationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ButtonHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ButtonRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextKeyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextBoxKeyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ButtonInputCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoxOneKeyAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoxTwoKeyAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoxThreeKeyAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RightKeyPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GoingUp;
    
public:
    UButtonSequenceGymMinigame(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void WrongInput();
    
    UFUNCTION(BlueprintCallable)
    void UpdateWidgetCurrentBox();
    
    UFUNCTION(BlueprintCallable)
    void UpdateInputSize(int32 Box, int32 InputCount);
    
    UFUNCTION(BlueprintCallable)
    void UpdateInputButtons();
    
    UFUNCTION(BlueprintCallable)
    void UpdateBoxKeyIndex();
    
    UFUNCTION(BlueprintCallable)
    void SetStartDelay(bool On);
    
    UFUNCTION(BlueprintCallable)
    void SetProgressOnWidgetIndex(int32 Index, float Progress);
    
    UFUNCTION(BlueprintCallable)
    void SetNewSequence();
    
    UFUNCTION(BlueprintCallable)
    void SetHighlightedButtonAllCompleted();
    
    UFUNCTION(BlueprintCallable)
    void SetHighlightedButton(int32 ButtonIndex, bool RecovedFromIFrame);
    
    UFUNCTION(BlueprintCallable)
    void SetGoingUpFlipped();
    
    UFUNCTION(BlueprintCallable)
    void SetFlipped(bool Flipped);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationToIndex();
    
    UFUNCTION(BlueprintCallable)
    void RightInput(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllHighlighted();
    
    UFUNCTION(BlueprintCallable)
    void PlayerInputWidget(bool Hit);
    
    UFUNCTION(BlueprintCallable)
    void NextInput();
    
    UFUNCTION(BlueprintCallable)
    EGymActions GetRandomInput();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFirstIndexInBox() const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateNewInputSequence(int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    bool CheckInput(EGymActions Action);
    
    UFUNCTION(BlueprintCallable)
    bool CanUpdate() const;
    
    UFUNCTION(BlueprintCallable)
    void CalculateInputButtonNumbers();
    
    UFUNCTION(BlueprintCallable)
    void AnimationSequenceDone();
    
};

