#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "BXEDifficultyPoint.h"
#include "StageDifficultyProgression.generated.h"

class URun;

UCLASS(Blueprintable)
class UStageDifficultyProgression : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBXEDifficultyPoint> Difficulties;
    
public:
    UStageDifficultyProgression();

private:
    UFUNCTION(BlueprintCallable)
    static float GetTimePerPoint(const FBXEDifficultyPoint& InPoint, int32 InPlayerCount, const URun* Run);
    
public:
    UFUNCTION(BlueprintCallable)
    FBXEDifficultyPoint GetDifficultyAtTime(float TimeSeconds, int32 PlayerCount, const URun* Run);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBXEDifficultyPoint> GetDifficulties() const;
    
};

