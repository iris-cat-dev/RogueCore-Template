#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ActorUsableDelegateDelegate.h"
#include "EInputKeys.h"
#include "UsableAccessDeniedInformation.h"
#include "UsableComponentBase.generated.h"

class AActor;
class APlayerCharacter;
class UAccessCondition;
class USceneComponent;
class UTexture2D;
class UUsableComponentBase;
class UUseAnimationSetting;
class UUseConditionSet;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UUsableComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUsableHoveredEvent, APlayerCharacter*, InUser, UUsableComponentBase*, usable);
    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FUsableComponentCanAccessDelegate, const AActor*, Actor);
    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(FUsableAccessDeniedInformation, FUsableComponentAccessDeniedDelegate, const AActor*, Actor);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUsableHoveredEvent OnHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUsableHoveredEvent OnUnhovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CallbackKeys;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorUsableDelegate OnAccessDenied;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUseAnimationSetting* AnimationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* RestrictToCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsableHidesPlaceables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRayTraceTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetUsingOnCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUseConditionSet* UseConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAccessCondition* AccessCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsClientPredictive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ThirdPersonWhileUsing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CapitalUseText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> HoveringPlayer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUsableComponentCanAccessDelegate ExtraCanCharacterAccessDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUsableComponentAccessDeniedDelegate ExtraGetAccessDeniedInformationDelegate;
    
public:
    UUsableComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUseRestrictions(UUseConditionSet* Set);
    
    UFUNCTION(BlueprintCallable)
    void SetRayTraceTriggered(bool rayTraceTriggered);
    
    UFUNCTION(BlueprintCallable)
    void SetExtraGetAccessDeniedInformationFunction(const UUsableComponentBase::FUsableComponentAccessDeniedDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void SetExtraCanCharacterAccessFunction(const UUsableComponentBase::FUsableComponentCanAccessDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationSettings(UUseAnimationSetting* Settings);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetUseText(APlayerCharacter* User);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUseProgressInPercent(APlayerCharacter* User) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetUsableIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowUsingUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsRayTraceTriggerd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsHovered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCharacter* GetHoveredBy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHideProgressBar(APlayerCharacter* User) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHideActionText(APlayerCharacter* User) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCapitalUseText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUsableAccessDeniedInformation GetAccessDeniedInformation(const AActor* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAccessCondition* GetAccessCondition() const;
    
    UFUNCTION(BlueprintCallable)
    void EndUse(APlayerCharacter* User);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCharacterAccess(const AActor* Character) const;
    
    UFUNCTION(BlueprintCallable)
    void BeginUse(APlayerCharacter* User, EInputKeys Key);
    
};

