#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "DamageData.h"
#include "PerkInputUnlockComponent.h"
#include "RageUnlockComponent.generated.h"

class UPlayerHealthComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URageUnlockComponent : public UPerkInputUnlockComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRageValueChanged, float, Value);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRageComponentDelegate);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRageValueChanged OnRageValueChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle RageTimeoutHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeterGainedPerDamageTaken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RageMeter, meta=(AllowPrivateAccess=true))
    float RageMeterPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool RageOn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRageComponentDelegate OnRageActiveChanged;
    
public:
    URageUnlockComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void StopRage();
    
    UFUNCTION(BlueprintCallable)
    void StartRage();
    
    UFUNCTION(BlueprintCallable)
    void SetRage(bool rage);
    
    UFUNCTION(BlueprintCallable)
    void RecieveMeter(UPlayerHealthComponent* PHealth, float RawDamage, float actualDamage, const FDamageData& DamageData, bool anyHealthLost);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RageOn();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RageMeter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void On_StartRage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void On_EndRage();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRageActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRageProgress() const;
    
};

