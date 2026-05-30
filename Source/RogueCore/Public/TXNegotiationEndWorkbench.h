#pragma once
#include "CoreMinimal.h"
#include "TXNegotiationEndWorkbenchAbilityUpgradeOption.h"
#include "TXNegotiationEndWorkbenchAttributeOption.h"
#include "TXNegotiationEndWorkbenchWeaponOption.h"
#include "TXPlayerInfo.h"
#include "TXPlayerUnlocks.h"
#include "TXRunInfo.h"
#include "TXNegotiationEndWorkbench.generated.h"

USTRUCT(BlueprintType)
struct FTXNegotiationEndWorkbench {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTXNegotiationEndWorkbenchAttributeOption> pickable_attributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTXNegotiationEndWorkbenchWeaponOption> pickable_weapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTXNegotiationEndWorkbenchAbilityUpgradeOption> pickable_ability_upgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString picked_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 picked_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXPlayerUnlocks player_unlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXRunInfo run_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXPlayerInfo player_info;
    
    ROGUECORE_API FTXNegotiationEndWorkbench();
};

