#pragma once
#include "CoreMinimal.h"
#include "AbilityItem.h"
#include "DualAbilityItem.generated.h"

class UAnimMontage;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ROGUECORE_API ADualAbilityItem : public AAbilityItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FPSuitMesh2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* TPSuitMesh2;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Item_EquippedSecondaryMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Item_EquippedSecondaryUnavailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SecondaryAttachSocket;
    
public:
    ADualAbilityItem(const FObjectInitializer& ObjectInitializer);

};

