#pragma once
#include "CoreMinimal.h"
#include "DamageInstance.h"
#include "Templates/SubclassOf.h"
#include "WeaponHitCountEffect.h"
#include "DamageHitCountEffect.generated.h"

class UDamageClass;
class UFXSystemAsset;
class USoundCue;
class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UDamageHitCountEffect : public UWeaponHitCountEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageInstance DamageInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagePerHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* DamageParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* DamageSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DeadBugWalkingTargetMarking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraDamageForCalculatingDBW;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> DeadBugWalkingSTE;
    
public:
    UDamageHitCountEffect();

};

