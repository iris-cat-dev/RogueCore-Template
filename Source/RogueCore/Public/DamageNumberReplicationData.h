#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "DamageNumberEntry.h"
#include "EDamageVector.h"
#include "DamageNumberReplicationData.generated.h"

class AActor;
class UDamageClass;
class UFSDPhysicalMaterial;

USTRUCT(BlueprintType)
struct FDamageNumberReplicationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDamageNumberEntry> Numbers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Causer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFSDPhysicalMaterial* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageVector Vector;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 CritLevel;
    
    ROGUECORE_API FDamageNumberReplicationData();
};

