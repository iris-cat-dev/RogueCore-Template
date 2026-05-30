#pragma once
#include "CoreMinimal.h"
#include "FSDBlueprintSessionResult.h"
#include "FSDBlueprintSessionResult.h"
#include "JoinSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FJoinSignature, FFSDBlueprintSessionResult, Session);

