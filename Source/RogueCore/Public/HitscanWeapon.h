#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "HitscanWeapon.generated.h"

class UHitscanComponent;

UCLASS(Blueprintable)
class AHitscanWeapon : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitscanComponent* HitscanComponent;
    
public:
    AHitscanWeapon(const FObjectInitializer& ObjectInitializer);

};

