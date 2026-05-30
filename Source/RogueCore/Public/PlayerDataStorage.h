#pragma once
#include "CoreMinimal.h"
#include "BXEPlayerData.h"
#include "ESeamlessTravelStorageType.h"
#include "PlayerDataStorage.generated.h"

class APlayerCharacter;

USTRUCT(BlueprintType)
struct FPlayerDataStorage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESeamlessTravelStorageType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXEPlayerData PlayerData;
    
    ROGUECORE_API FPlayerDataStorage();
};

