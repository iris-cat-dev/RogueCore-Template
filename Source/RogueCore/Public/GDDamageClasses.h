#pragma once
#include "CoreMinimal.h"
#include "GDDamageClasses.generated.h"

class UDamageClass;

USTRUCT(BlueprintType)
struct FGDDamageClasses {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDamageClass*> DamageClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* Corrosive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDamageClass*> Burning;
    
    ROGUECORE_API FGDDamageClasses();
};

