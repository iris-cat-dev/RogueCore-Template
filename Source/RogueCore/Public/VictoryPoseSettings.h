#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VictoryPoseSettings.generated.h"

class UTexture2D;
class UVictoryPose;

UCLASS(Blueprintable)
class UVictoryPoseSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* GenericVictoryPoseIcon;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVictoryPose*> LoadedVictoryPoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVictoryPose* RandomVictoryPose;
    
public:
    UVictoryPoseSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UVictoryPose*> GetVictoryPoses() const;
    
};

