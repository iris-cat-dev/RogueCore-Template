#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ObjectiveMissionIcon.h"
#include "SavableDataAsset.h"
#include "StageTemplate.generated.h"

class AFSDGameMode;
class UFSDSaveGame;
class UStageTemplate;
class UTexture2D;
class UTutorialComponent;
class UWorld;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UStageTemplate : public USavableDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFSDGameMode> GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* StageIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* StageIconSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor StageColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageTypeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UTutorialComponent>> Tutorials;
    
public:
    UStageTemplate();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked(UFSDSaveGame* SaveGame) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStageTypeIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetStageImageLarge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FObjectiveMissionIcon GetPrimaryObjectiveIconFromAsset(UStageTemplate* mission, bool getSmallVersion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FObjectiveMissionIcon GetPrimaryObjectiveIcon(bool getSmallVersion) const;
    
};

