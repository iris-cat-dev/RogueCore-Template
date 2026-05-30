#pragma once
#include "CoreMinimal.h"
#include "BeltDrivenWeapon.h"
#include "DamageInfo.h"
#include "DamageListenerData.h"
#include "DamageParams.h"
#include "GatlingGun.generated.h"

class UDamageAsset;
class UFXSystemAsset;
class UHitscanComponent;

UCLASS(Blueprintable)
class AGatlingGun : public ABeltDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BarrelProximityDamageEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrelProximityDamageDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrelProximityDamageRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrelProximityDamageLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenProximityDamageTicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageMultiplierAtMaxStabilization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* HotShellsTracerParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeatRemovedOnKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CriticalOverheatEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HotShellsTracerOn, meta=(AllowPrivateAccess=true))
    bool HotShellsOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HotShellsTemperatureRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageAsset* BarrelProximityDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitscanComponent* HitscanComponent;
    
public:
    AGatlingGun(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetHotShellsOn(bool hotShellsIsOn);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HotShellsTracerOn();
    
    UFUNCTION(BlueprintCallable)
    void OnGatlingTemperatureChanged(float temperature, bool IsOverheated);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageEventTrigger(const TArray<FDamageListenerData>& listenerData, const FDamageParams& Params, const FDamageInfo& Damage, int32 eventInfo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RemoveHeat();
    
};

