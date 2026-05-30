#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockInstance.h"
#include "Templates/SubclassOf.h"
#include "UnlockableItemData.h"
#include "ParsedCharacterBuildData.generated.h"

class APlayerCharacter;
class UPerkAsset;

USTRUCT(BlueprintType)
struct ROGUECORE_API FParsedCharacterBuildData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlayerCharacter> PlayerCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBXEUnlockInstance> UnlockRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnlockableItemData> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPerkAsset*> Enhancements;
    
    FParsedCharacterBuildData();
};

