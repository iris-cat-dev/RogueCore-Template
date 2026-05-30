#pragma once
#include "CoreMinimal.h"
#include "FSDPhysicalMaterial.h"
#include "OptionalBloodPhysicalMaterial.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable, CollapseCategories)
class UOptionalBloodPhysicalMaterial : public UFSDPhysicalMaterial {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* BloodlessImpactParticles;
    
public:
    UOptionalBloodPhysicalMaterial();

};

