#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ProjectilePoolItem.generated.h"

class AProjectileBase;

USTRUCT(BlueprintType)
struct FProjectilePoolItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectileBase> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AProjectileBase> Projectile;
    
    ROGUECORE_API FProjectilePoolItem();
};

