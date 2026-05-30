#pragma once
#include "CoreMinimal.h"
#include "FSDPawn.h"
#include "GuntowerWeakPoint.generated.h"

class UDamageClass;
class UEnemyHealthComponent;
class UFXSystemAsset;
class USceneComponent;
class USoundCue;
class UStaticMeshComponent;
class UWeakpointGlowComponent;

UCLASS(Blueprintable)
class AGuntowerWeakPoint : public AFSDPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnemyHealthComponent* Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeakpointGlowComponent* HitGlow;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UEnemyHealthComponent> ParentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageToParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* deathParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* deathSound;
    
public:
    AGuntowerWeakPoint(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExposedChanged(bool isExposed);
    
    UFUNCTION(BlueprintCallable)
    void DamageParent(float ammount);
    
};

