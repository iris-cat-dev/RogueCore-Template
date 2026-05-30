#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "TowerEventModule.h"
#include "AimingTowerEventModule.generated.h"

class AActor;

UCLASS(Blueprintable)
class AAimingTowerEventModule : public ATowerEventModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator AimRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentTarget;
    
public:
    AAimingTowerEventModule(const FObjectInitializer& ObjectInitializer);

};

