#pragma once
#include "CoreMinimal.h"
#include "PartitionedDamageValues.h"
#include "ActorDamageCollection.generated.h"

USTRUCT(BlueprintType)
struct FActorDamageCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeakPointHitsDealt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CriticalHitsDealt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartitionedDamageValues> DamageDealtPartitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartitionedDamageValues> DamageTakenPartitions;
    
    ROGUECORE_API FActorDamageCollection();
};

