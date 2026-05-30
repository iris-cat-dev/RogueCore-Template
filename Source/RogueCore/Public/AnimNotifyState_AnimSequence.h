#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotifyState_AnimSequence.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UAnimNotifyState_AnimSequence : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NotifyName;
    
public:
    UAnimNotifyState_AnimSequence();

};

