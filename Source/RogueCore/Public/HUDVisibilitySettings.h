#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GVisibilityGroups.h"
#include "HUDVisibilitySettings.generated.h"

UCLASS(Blueprintable)
class UHUDVisibilitySettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGVisibilityGroups VisibilityGroups;
    
    UHUDVisibilitySettings();

};

