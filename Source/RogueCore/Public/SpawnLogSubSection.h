#pragma once
#include "CoreMinimal.h"
#include "SpawnLogSubSection.generated.h"

USTRUCT(BlueprintType)
struct FSpawnLogSubSection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SectionHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> log;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Expanded;
    
public:
    ROGUECORE_API FSpawnLogSubSection();
};

