#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PerkSettings.h"
#include "PerkSettingsAsset.generated.h"

UCLASS(Blueprintable)
class UPerkSettingsAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerkSettings Perks;
    
    UPerkSettingsAsset();

};

