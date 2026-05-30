#pragma once
#include "CoreMinimal.h"
#include "UsableAccessDeniedInformation.generated.h"

class UDialogDataAsset;
class USoundCue;

USTRUCT(BlueprintType)
struct FUsableAccessDeniedInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DenyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDialogDataAsset> DenyShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> DenySound;
    
    ROGUECORE_API FUsableAccessDeniedInformation();
};

