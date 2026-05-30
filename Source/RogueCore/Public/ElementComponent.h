#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DamageData.h"
#include "EElementSourceIntensity.h"
#include "ElementChangeArgs.h"
#include "ElementEventDelegateDelegate.h"
#include "ElementEventState.h"
#include "ElementEventStateLocal.h"
#include "ElementStateArray.h"
#include "ElementComponent.generated.h"

class AActor;
class UDamageTag;
class UElementEventComponent;
class UElementEventType;
class UElementStateDelegates;
class UElementType;
class UHealthComponent;
class UPawnStatsComponent;
class UStatusEffectsComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UElementComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FElementEventDelegate OnElementEventAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FElementEventDelegate OnElementEventRemoved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UElementType*> SupportedElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UElementType*> BlacklistedElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UElementEventType*, float> EventDamageBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasResistanceWhenInvulnerable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResistanceWhenInvulnerable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiationBoilSizeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FElementStateArray ElementStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Events, meta=(AllowPrivateAccess=true))
    TArray<FElementEventState> Events;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UElementEventType*, FElementEventStateLocal> LocalEventState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UElementType*, UElementStateDelegates*> ElementDelegates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<UElementEventType*, UElementEventComponent*> EventComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnStatsComponent* CachedPawnStatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusEffectsComponent* CachedStatusEffectsComponent;
    
public:
    UElementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    float TrySetElementValueToMax(UElementType* ElementType, AActor* InSource, bool MarkReplicateDirty);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool TryPushElementSource(UElementType* ElementType, AActor* Target, float Value, EElementSourceIntensity Intensity);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool TryPopElementSource(UElementType* ElementType, AActor* Target, float Value, EElementSourceIntensity Intensity);
    
    UFUNCTION(BlueprintCallable)
    void SetServerUserDataBool(UElementType* InElement, const bool InBool);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetElementValue(UElementType* ElementType);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveElementEventIfActive(UElementEventType* InEventType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PushElementEvent(UElementEventType* InEventType, UElementType* InTriggerByElement, AActor* InSource);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Events(TArray<FElementEventState> PrevEvents);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerDeath(UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<UDamageTag*>& Tags);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventActive(UElementEventType* ElementEventType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsElementSupported(UElementType* InElement) const;
    
    UFUNCTION(BlueprintCallable)
    static void IsElementActiveOnTarget(AActor* Target, UElementEventType* EventType, bool& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UElementType*> GetSupportedElements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetServerUserDataBool(UElementType* InElement) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UElementType*> GetRelatedElementTypes(const FElementEventState& InEventState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElementValueEffect(UElementType* ElementType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UElementStateDelegates* GetElementStateDelegates(UElementType* ElementType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElementLocalChangeDelta(UElementType* ElementType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetElementEventStatesForType(UElementType* ElementType, TArray<FElementEventState>& OutStates) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UElementEventComponent* GetElementEventComponent(UElementEventType* InElementType) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    float GetCurrentElementValue(UElementType* ElementType) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    float ChangeElementValue(UElementType* ElementType, float ChangeValue, const FElementChangeArgs& InArgs, bool MarkReplicateDirty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAnyEventsActiveForElement(UElementType* ElementType) const;
    
};

