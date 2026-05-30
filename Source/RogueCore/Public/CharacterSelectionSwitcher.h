#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EVanitySlot.h"
#include "CharacterSelectionSwitcher.generated.h"

class APlayerCharacter;
class UVictoryPose;

UCLASS(Blueprintable)
class ACharacterSelectionSwitcher : public AActor {
    GENERATED_BODY()
public:
    ACharacterSelectionSwitcher(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVictoryPoseChanged(UVictoryPose* VictoryPose);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVanityItemEquipped(EVanitySlot Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Hide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    AActor* GetViewerActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    APlayerCharacter* GetActiveCharacter() const;
    
};

