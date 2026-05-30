#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "OnMinigamePopDelegateDelegate.h"
#include "OnMinigamePushedDelegateDelegate.h"
#include "SpaceRigSubSystem.generated.h"

class APlayerCharacter;
class UGymMinigameBaseWidget;

UCLASS(Blueprintable)
class ROGUECORE_API USpaceRigSubSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMinigamePushedDelegate OnMiniGamePushed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMinigamePopDelegate OnMiniGamePop;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGymMinigameBaseWidget*> MinigameHUDs;
    
public:
    USpaceRigSubSystem();

    UFUNCTION(BlueprintCallable)
    void PushMiniGameWidget(APlayerCharacter* Owner, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void PopMiniGameWidget(APlayerCharacter* Owner, int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddMinigameHUD(UGymMinigameBaseWidget* HUD);
    
};

