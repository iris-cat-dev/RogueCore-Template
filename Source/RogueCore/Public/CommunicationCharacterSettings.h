#pragma once
#include "CoreMinimal.h"
#include "CommunicationCharacterSettings.generated.h"

class USoundClass;

USTRUCT(BlueprintType)
struct FCommunicationCharacterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundClass> ShoutSoundClass_1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundClass> ShoutSoundClass_3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundClass> ShoutSoundClass_Cutscene;
    
    ROGUECORE_API FCommunicationCharacterSettings();
};

