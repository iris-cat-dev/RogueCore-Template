#pragma once
#include "CoreMinimal.h"
#include "SpawnLogSubSection.h"
#include "SpawnLogSection.generated.h"

USTRUCT(BlueprintType)
struct FSpawnLogSection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SectionHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnLogSubSection> SubSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Expanded;
    
public:
    ROGUECORE_API FSpawnLogSection();
};

