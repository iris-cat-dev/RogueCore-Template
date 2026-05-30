#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "BioBoosterReward.h"
#include "EBioBoosterSelectionMode.h"
#include "RewardDispenserBase.h"
#include "BioBoosterTerminal.generated.h"

class APlayerCharacter;
class UBioBoosterDeck;
class UBioBoosterSelectorWidget;
class UBioBoosterTerminalUsable;
class UHackingUsableComponent;
class USkeletalMeshComponent;
class UUsableComponentBase;
class UWidgetComponent;

UCLASS(Blueprintable)
class ROGUECORE_API ABioBoosterTerminal : public ARewardDispenserBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBioBoosterSelectionMode SelectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> VialBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> UsedVialIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHackingUsableComponent* HackTerminalUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBioBoosterTerminalUsable* PlayerInterfaceUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* PlayerInterfaceWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBioBoosterSelectorWidget* SelectorWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBioBoosterReward> AvailableRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBioBoosterDeck*> BioBoosterDecks;
    
public:
    ABioBoosterTerminal(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveInterfaceVisibiltyChanged(bool InIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerInterfaceVisibilityChanged(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerInterfaceUsed(APlayerCharacter* InPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerInterfaceUnhovered(APlayerCharacter* InPlayer, UUsableComponentBase* usable);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerInterfaceProgress(float InProgress);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerInterfaceHovered(APlayerCharacter* InPlayer, UUsableComponentBase* usable);
    
    UFUNCTION(BlueprintCallable)
    void OnActivateTerminalUsed(APlayerCharacter* InPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInterfaceVisible() const;
    
};

