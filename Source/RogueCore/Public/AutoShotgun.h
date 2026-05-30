#pragma once
#include "CoreMinimal.h"
#include "MultiHitscanWeapon.h"
#include "Templates/SubclassOf.h"
#include "AutoShotgun.generated.h"

class AActor;
class UFSDPhysicalMaterial;
class UHealthComponentBase;
class UPrimitiveComponent;
class UStatusEffect;

UCLASS(Blueprintable)
class AAutoShotgun : public AMultiHitscanWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> CQCKillBuff;
    
public:
    AAutoShotgun(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysicalMaterial, bool wasDirectHit);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    
};

