#pragma once
#include "CoreMinimal.h"
#include "BaseEntitlement.h"
#include "BaseEntitlement.h"
#include "DiscordRoleEntitlement.generated.h"

UCLASS(Blueprintable)
class UDiscordRoleEntitlement : public UBaseEntitlement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DiscordRoleID;
    
public:
    UDiscordRoleEntitlement();

};

