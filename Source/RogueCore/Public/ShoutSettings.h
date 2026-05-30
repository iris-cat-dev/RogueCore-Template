#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "PlayerShoutSettings.h"
#include "ShoutSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UShoutSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerShoutSettings PlayerShoutSettings;
    
public:
    UShoutSettings();

};

