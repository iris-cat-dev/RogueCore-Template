#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "BiomeFeatures.h"
#include "DamageTypeDescription.h"
#include "EDamageType.h"
#include "EMinersManualDescriptionList.h"
#include "ExpeniteEventMinersManual.h"
#include "ManualSingleStepDescription.h"
#include "Templates/SubclassOf.h"
#include "MinersManual.generated.h"

class UBXEBlueprintControlledObjective;
class UBXEUnlockItem;
class UBXEUnlockPool;
class UBiome;
class UEnemyMinersManualData;
class ULoreScreenMasterWidget;
class UMinersManualData;
class UObject;
class UStageTemplate;

UCLASS(Blueprintable)
class UMinersManual : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ULoreScreenMasterWidget>> BasicsPages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FText> BasicsPageHeaders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ULoreScreenMasterWidget>> CombatPages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ULoreScreenMasterWidget>> ExtraMissionPages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ULoreScreenMasterWidget>> ResourcePages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ULoreScreenMasterWidget>> FacilitAssetPages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBXEUnlockItem*> WeaponList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBXEUnlockItem*> TraversalToolList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBXEUnlockItem*> Equipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBXEUnlockItem*> GrenadeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEUnlockPool* NegotiableUnlockList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEUnlockPool* ArtifactList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyMinersManualData*> Enemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UBiome>> BiomeReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDamageTypeDescription> DamageTypeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDamageTypeDescription> ElementalTypeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDamageTypeDescription> CustomTypeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExpeniteEventMinersManual> ExpeniteObjDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FBiomeFeatures> BiomeFeatureDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> killsNeededToUnlockLoreLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> killsNeededToUnlockLoreMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> killsNeededToUnlockLoreHigh;
    
public:
    UMinersManual();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool IsObjectInMinersManual(UObject* WorldContext, UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool IsMissionUnlocked(UObject* WorldContext, UStageTemplate* mission);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool IsBiomeUnlocked(UObject* WorldContext, UBiome* Biome);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool IsAnyObjectInMinersManual(const UObject* WorldContext, const TArray<UObject*>& Objects) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool IsAnyEnemyInMinersManual(const UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    TArray<FText> GetUnlockedCreatureLore(UObject* WorldContext, UEnemyMinersManualData* Enemy, float& completePercentage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    UObject* GetFirstObjectInMinersManual(const UObject* WorldContext, const TArray<UObject*>& Objects) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    UEnemyMinersManualData* GetFirstEnemyInMinersManual(const UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetExpeniteObjStep(int32 Index, FText& InfoHeadline, FText& InfoDescription, TArray<FManualSingleStepDescription>& Steps, TSubclassOf<UBXEBlueprintControlledObjective>& Objective);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FExpeniteEventMinersManual> GetExpeniteObjDescriptions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    int32 GetEnemyKillCount(UObject* WorldContext, FGuid EnemyID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEnemyMinersManualData*> GetEnemiesSorted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEnemyMinersManualData*> GetEnemies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetElementTypeDescriptions(TArray<EDamageType> damageTypes, TArray<FDamageTypeDescription>& Icons);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetElementTypeDescription(EDamageType damageTypes, FDamageTypeDescription& Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDamageTypeDescription GetElementDescriptionByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDamageTypeDescription> GetDescriptionList(EMinersManualDescriptionList InListType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDescriptionAt(EMinersManualDescriptionList InListType, int32 InIndex, FDamageTypeDescription& OutDescription) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDamageTypeDescriptions(TArray<EDamageType> damageTypes, TArray<FDamageTypeDescription>& Icons);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDamageTypeDescription GetDamageTypeDescriptionByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDamageTypeDescription(EDamageType damageTypes, FDamageTypeDescription& Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftObjectPtr<UBiome>> GetBiomes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMinersManualData*> GetBiomeFeatures(int32 BiomeIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UBXEUnlockItem*> GetAllGearUnlocks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDamageTypeDescription> GetAllElementTypeDescriptions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDamageTypeDescription> GetAllDamageTypeDescriptions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDamageTypeDescription> GetAllCustomTypeDescriptions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FindDescriptionFromDamageType(const FDamageTypeDescription& DamageType);
    
};

