#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CommunicationCharacterSettings.h"
#include "CommunicationSettingsAsset.generated.h"

UCLASS(Blueprintable)
class UCommunicationSettingsAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommunicationCharacterSettings CharacterSettings;
    
public:
    UCommunicationSettingsAsset();

};

