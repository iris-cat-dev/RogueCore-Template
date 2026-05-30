#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "GunTowerModuleAnimInstance.h"
#include "RandomFireModuleAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class URandomFireModuleAnimInstance : public UGunTowerModuleAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator OtherLookatRotation;
    
    URandomFireModuleAnimInstance();

};

