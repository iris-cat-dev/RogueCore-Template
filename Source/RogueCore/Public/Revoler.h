#pragma once
#include "CoreMinimal.h"
#include "EUpdateDamageNumberColor.h"
#include "HitscanWeapon.h"
#include "StackingDamageNumberSource.h"
#include "Revoler.generated.h"

class AActor;
class UDamageComponent;
class UFSDPhysicalMaterial;

UCLASS(Blueprintable)
class ARevoler : public AHitscanWeapon, public IStackingDamageNumberSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnKillFearFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnKillFearRange;
    
public:
    ARevoler(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat, bool wasDirectHit);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    virtual float GetStackingTimeLimit() const override PURE_VIRTUAL(GetStackingTimeLimit, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetMaxCombinationsPerentry() const override PURE_VIRTUAL(GetMaxCombinationsPerentry, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual EUpdateDamageNumberColor GetColorBehaviour() const override PURE_VIRTUAL(GetColorBehaviour, return EUpdateDamageNumberColor::ENormal;);
    
};

