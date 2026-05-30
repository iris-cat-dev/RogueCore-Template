#pragma once
#include "CoreMinimal.h"
#include "HitscanWeapon.h"
#include "DualWieldWeapon.generated.h"

class UAnimMontage;
class UFXSystemAsset;
class UFirstPersonSkeletalMeshComponent;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class ADualWieldWeapon : public AHitscanWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFirstPersonSkeletalMeshComponent* FPMeshLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* TPMeshLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WPN_Left_Reload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WPN_Left_ReloadEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WPN_Left_TP_Reload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* CasingParticlesLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MuzzleLeft;
    
public:
    ADualWieldWeapon(const FObjectInitializer& ObjectInitializer);

};

