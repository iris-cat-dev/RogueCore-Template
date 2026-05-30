#pragma once
#include "CoreMinimal.h"
#include "MovingElectroBeam.h"
#include "CrossbowElectroBeam.generated.h"

UCLASS(Blueprintable)
class ACrossbowElectroBeam : public AMovingElectroBeam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxRange;
    
    ACrossbowElectroBeam(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

