#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ActorTrackingCheatInterface.h"
#include "DataTerminalBoxEventDelegate.h"
#include "DataTerminalDeviousDataEditorType.h"
#include "DelegateDelegate.h"
#include "EInputKeys.h"
#include "DataTerminal.generated.h"

class APlayerCharacter;
class USceneComponent;
class USingleUsableComponent;
class UTextRenderComponent;
class UUsableComponentBase;
class UUseAnimationSetting;
class UWidgetComponent;

UCLASS(Blueprintable)
class ROGUECORE_API ADataTerminal : public AActor, public IActorTrackingCheatInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasBeenActivated, meta=(AllowPrivateAccess=true))
    bool HasBeenActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTerminalBoxEvent OnBoxRepaired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTerminalDeviousDataEditorType> DeviousCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinBaseTextLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBaseTextLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinNumberTextLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinBaseTextVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBaseTextVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUseAnimationSetting* AnimationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MatchCountRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DefaultTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor HoverTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USingleUsableComponent*> BoxSingleUsableComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* BoxColliderContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USingleUsableComponent* SingleUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> BoxTextCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveBoxes, meta=(AllowPrivateAccess=true))
    TArray<int32> ActiveBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RandomSeed, meta=(AllowPrivateAccess=true))
    int32 RandomSeed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTextRenderComponent*> TextRenderComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<UUsableComponentBase*, UTextRenderComponent*> UsableComponentToTextComponentMap;
    
public:
    ADataTerminal(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ActivateTerminal();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUnhoveredUsable(APlayerCharacter* Character, UUsableComponentBase* usable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RandomSeed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasBeenActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveBoxes(TArray<int32> PrevBoxes);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHoveredUsable(APlayerCharacter* Character, UUsableComponentBase* usable);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterUsed(APlayerCharacter* User, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable)
    void OnBoxUsed(APlayerCharacter* User, EInputKeys Key, UUsableComponentBase* UsableComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnBoxEndUse(UUsableComponentBase* usable);
    
    UFUNCTION(BlueprintCallable)
    void OnBoxBeginUse(APlayerCharacter* User, EInputKeys Key, UUsableComponentBase* UsableComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Cheat_Activate();
    

    // Fix for true pure virtual functions not being implemented
};

