#pragma once
#include "CoreMinimal.h"
#include "VanityCharacterMesh.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FVanityCharacterMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PrimaryBodyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* GauntletLeftMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* GauntletRightMesh;
    
    ROGUECORE_API FVanityCharacterMesh();
};

