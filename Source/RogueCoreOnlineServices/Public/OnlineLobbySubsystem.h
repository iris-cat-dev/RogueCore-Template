#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "OnlineLobbySubsystem.generated.h"

UCLASS(Blueprintable)
class ROGUECOREONLINESERVICES_API UOnlineLobbySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UOnlineLobbySubsystem();

};

