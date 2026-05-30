#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BioBoosterReward.h"
#include "BioBoosterSelectorWidget.generated.h"

class ABioBoosterTerminal;
class UBioBoosterDeck;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBioBoosterSelectorWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UBioBoosterSelectorWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Show();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTerminal(ABioBoosterTerminal* InTerminal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProgress(float InProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAvailableRewards(const TArray<UBioBoosterDeck*>& InBioBoosterDecks, const TArray<FBioBoosterReward>& InRewards);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 SelectReward();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetIntroLength() const;
    
};

