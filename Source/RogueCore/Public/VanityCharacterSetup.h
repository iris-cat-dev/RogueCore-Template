#pragma once
#include "CoreMinimal.h"
#include "EArmorMeshType.h"
#include "EquippedVanity.h"
#include "VanityColors.h"
#include "VanityCharacterSetup.generated.h"

class UPlayerCharacterID;

USTRUCT(BlueprintType)
struct FVanityCharacterSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* CharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EArmorMeshType ArmorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquippedVanity VanityItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVanityColors VanityColors;
    
    ROGUECORE_API FVanityCharacterSetup();
};

