#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "PresenceSubSystem.generated.h"

class UDiscordWrapper;

UCLASS(Blueprintable)
class UPresenceSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordWrapper* DiscordWI;
    
    UPresenceSubSystem();

};

