#pragma once
#include "CoreMinimal.h"
#include "ElementEventStateLocal.generated.h"

class UAudioComponent;
class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FElementEventStateLocal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAudioComponent*> Sounds;
    
    ROGUECORE_API FElementEventStateLocal();
};

