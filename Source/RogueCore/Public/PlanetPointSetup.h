#pragma once
#include "CoreMinimal.h"
#include "PlanetPointSetup.generated.h"

class UBiome;
class UPrimitiveComponent;
class USceneComponent;

USTRUCT(BlueprintType)
struct FPlanetPointSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBiome* Biome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* NamePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> SitePoints;
    
    ROGUECORE_API FPlanetPointSetup();
};

