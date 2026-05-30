#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EFSDTargetPlatform.h"
#include "EFSDAchievementType.h"
#include "EFSDTargetPlatform.h"
#include "AchievementAsset.generated.h"

UCLASS(Blueprintable)
class UAchievementAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFSDTargetPlatform, FString> PlatformAchievementIDMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFSDTargetPlatform, FString> PlatformStatIDMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AchievementTargetValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFSDAchievementType AchievementType;
    
public:
    UAchievementAsset();

};

