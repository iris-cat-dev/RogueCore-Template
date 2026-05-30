#pragma once
#include "CoreMinimal.h"
#include "MultiProjectileSpawnData.h"
#include "ProjectileLauncherComponent.h"
#include "MultiProjectileLauncherComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMultiProjectileLauncherComponent : public UProjectileLauncherComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProjectilesPerShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMultiProjectileSpawnData> ProjectileData;
    
public:
    UMultiProjectileLauncherComponent(const FObjectInitializer& ObjectInitializer);

};

