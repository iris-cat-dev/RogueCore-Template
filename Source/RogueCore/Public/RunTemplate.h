#pragma once
#include "CoreMinimal.h"
#include "ERunDepth.h"
#include "ERunType.h"
#include "ExpeniteObjective.h"
#include "ObjectiveMissionIcon.h"
#include "PrimaryObjective.h"
#include "ResourceSpawner.h"
#include "SavableDataAsset.h"
#include "SecondaryObjective.h"
#include "Templates/SubclassOf.h"
#include "RunTemplate.generated.h"

class ADebrisDataActor;
class AProceduralSetup;
class UBiome;
class UDifficultySetting;
class UMissionDNA;
class UObjective;
class UPrimaryMutator;
class URunStageLayout;
class UStageTemplate;
class UStageTemplateOverride;

UCLASS(Blueprintable)
class URunTemplate : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUnlockedFromStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveMissionIcon DefaultIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveMissionIcon DefaultIconWithBlood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageTemplate* DefaultStageTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AProceduralSetup> DefaultPLS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMissionDNA>> DefaultDNA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResourceSpawner> DefaultResourceDistribution;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBiome* DeepCoreBiome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADebrisDataActor> DeepCoreDebrisActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StagesLeftWhenDeepCoreStarts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunDepth TutorialDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMissionDNA> TutorialDNA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPrimaryMutator* TutorialMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UObjective>> TutorialBannedObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryObjective> PrimaryObjectivesDepth1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryObjective> PrimaryObjectivesDepth2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryObjective> PrimaryObjectivesDepth3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryObjective> PrimaryObjectivesDepth4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSecondaryObjective> SecondaryObjectivesDepth1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSecondaryObjective> SecondaryObjectivesDepth2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSecondaryObjective> SecondaryObjectivesDepth3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSecondaryObjective> SecondaryObjectivesDepth4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExpeniteObjective> ExpeniteObjectivesDepth1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExpeniteObjective> ExpeniteObjectivesDepth2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExpeniteObjective> ExpeniteObjectivesDepth3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExpeniteObjective> ExpeniteObjectivesDepth4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HazardBonusDepth1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HazardBonusDepth2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HazardBonusDepth3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HazardBonusDepth4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LevelTimeScaleDepth1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LevelTimeScaleDepth2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LevelTimeScaleDepth3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LevelTimeScaleDepth4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDifficultySetting* BaseDifficultyDepth1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDifficultySetting* BaseDifficultyDepth2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDifficultySetting* BaseDifficultyDepth3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDifficultySetting* BaseDifficultyDepth4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URunStageLayout* StageLayoutForDepth1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URunStageLayout* StageLayoutForDepth2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URunStageLayout* StageLayoutForDepth3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URunStageLayout* StageLayoutForDepth4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStageTemplateOverride*> BossStagesDepth1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStageTemplateOverride*> BossStagesDepth2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStageTemplateOverride*> BossStagesDepth3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStageTemplateOverride*> BossStagesDepth4;
    
public:
    URunTemplate();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSecondaryObjective> GetSecondaryObjectivesForDepth(const ERunDepth Depth) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERunType GetRunType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPrimaryObjective> GetPrimaryObjectivesForDepth(const ERunDepth Depth) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLevelTimeScalingForDepth(const ERunDepth Depth) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHazardBonusForDepth(const ERunDepth Depth) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FExpeniteObjective> GetExpeniteObjectivesForDepth(const ERunDepth Depth) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDifficultySetting* GetBaseDifficultyForDepth(const ERunDepth Depth) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UStageTemplateOverride*> GetAvailableBossesForDepth(const ERunDepth Depth) const;
    
};

