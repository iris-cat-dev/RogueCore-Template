#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "VoiceChatSubsystem.generated.h"

UCLASS(Blueprintable)
class ROGUECOREONLINESERVICES_API UVoiceChatSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UVoiceChatSubsystem();

};

