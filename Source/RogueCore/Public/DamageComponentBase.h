#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DelegateDelegate.h"
#include "EDamageComponentType.h"
#include "EOverrideCrit.h"
#include "OnEnemyDamagedDelegateDelegate.h"
#include "OnEnemyKilledDelegateDelegate.h"
#include "DamageComponentBase.generated.h"

class AActor;
class UFSDPhysicalMaterial;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDamageComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnHitDeadTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnemyDamagedDelegate OnTargetDamagedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnemyKilledDelegate OnTargetKilledEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageComponentType DamageComponentType;
    
public:
    UDamageComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void DamageTarget(AActor* Target, const FVector& Location, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* Material, int32 BoneIndex, EOverrideCrit overrideCrit, int32 overrideCritLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DamageArmor_Server(AActor* Target, UPrimitiveComponent* collider, int32 BoneIndex, const FVector& impactLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DamageArmor_All(AActor* Target, UPrimitiveComponent* collider, int32 BoneIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ArmorSupportsLocalOnlyCall(AActor* Target) const;
    
};

