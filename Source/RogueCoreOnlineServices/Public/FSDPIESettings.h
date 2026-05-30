#pragma once
#include "CoreMinimal.h"
#include "EFSDTargetPlatform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "EFSDTargetPlatform.h"
#include "FSDPIESettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class ROGUECOREONLINESERVICES_API UFSDPIESettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FSDDefaultServiceType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FSDPlatformServiceType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFSDTargetPlatform FSDTargetPlatform;
    
    UFSDPIESettings();

};

