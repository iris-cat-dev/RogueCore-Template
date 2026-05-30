#include "MinersManual.h"
#include "Templates/SubclassOf.h"

UMinersManual::UMinersManual() {
    this->NegotiableUnlockList = nullptr;
    this->ArtifactList = nullptr;
}

bool UMinersManual::IsObjectInMinersManual(UObject* WorldContext, UObject* Object) {
    return false;
}

bool UMinersManual::IsMissionUnlocked(UObject* WorldContext, UStageTemplate* mission) {
    return false;
}

bool UMinersManual::IsBiomeUnlocked(UObject* WorldContext, UBiome* Biome) {
    return false;
}

bool UMinersManual::IsAnyObjectInMinersManual(const UObject* WorldContext, const TArray<UObject*>& Objects) const {
    return false;
}

bool UMinersManual::IsAnyEnemyInMinersManual(const UObject* WorldContext) const {
    return false;
}

TArray<FText> UMinersManual::GetUnlockedCreatureLore(UObject* WorldContext, UEnemyMinersManualData* Enemy, float& completePercentage) {
    return TArray<FText>();
}

UObject* UMinersManual::GetFirstObjectInMinersManual(const UObject* WorldContext, const TArray<UObject*>& Objects) const {
    return NULL;
}

UEnemyMinersManualData* UMinersManual::GetFirstEnemyInMinersManual(const UObject* WorldContext) const {
    return NULL;
}

void UMinersManual::GetExpeniteObjStep(int32 Index, FText& InfoHeadline, FText& InfoDescription, TArray<FManualSingleStepDescription>& Steps, TSubclassOf<UBXEBlueprintControlledObjective>& Objective) {
}

TArray<FExpeniteEventMinersManual> UMinersManual::GetExpeniteObjDescriptions() {
    return TArray<FExpeniteEventMinersManual>();
}

int32 UMinersManual::GetEnemyKillCount(UObject* WorldContext, FGuid EnemyID) {
    return 0;
}

TArray<UEnemyMinersManualData*> UMinersManual::GetEnemiesSorted() const {
    return TArray<UEnemyMinersManualData*>();
}

TArray<UEnemyMinersManualData*> UMinersManual::GetEnemies() const {
    return TArray<UEnemyMinersManualData*>();
}

void UMinersManual::GetElementTypeDescriptions(TArray<EDamageType> damageTypes, TArray<FDamageTypeDescription>& Icons) {
}

void UMinersManual::GetElementTypeDescription(EDamageType damageTypes, FDamageTypeDescription& Icon) {
}

FDamageTypeDescription UMinersManual::GetElementDescriptionByIndex(int32 InIndex) {
    return FDamageTypeDescription{};
}

TArray<FDamageTypeDescription> UMinersManual::GetDescriptionList(EMinersManualDescriptionList InListType) const {
    return TArray<FDamageTypeDescription>();
}

bool UMinersManual::GetDescriptionAt(EMinersManualDescriptionList InListType, int32 InIndex, FDamageTypeDescription& OutDescription) const {
    return false;
}

void UMinersManual::GetDamageTypeDescriptions(TArray<EDamageType> damageTypes, TArray<FDamageTypeDescription>& Icons) {
}

FDamageTypeDescription UMinersManual::GetDamageTypeDescriptionByIndex(int32 InIndex) {
    return FDamageTypeDescription{};
}

void UMinersManual::GetDamageTypeDescription(EDamageType damageTypes, FDamageTypeDescription& Icon) {
}

TArray<TSoftObjectPtr<UBiome>> UMinersManual::GetBiomes() const {
    return TArray<TSoftObjectPtr<UBiome>>();
}

TArray<UMinersManualData*> UMinersManual::GetBiomeFeatures(int32 BiomeIndex) {
    return TArray<UMinersManualData*>();
}

TArray<UBXEUnlockItem*> UMinersManual::GetAllGearUnlocks() const {
    return TArray<UBXEUnlockItem*>();
}

TArray<FDamageTypeDescription> UMinersManual::GetAllElementTypeDescriptions() const {
    return TArray<FDamageTypeDescription>();
}

TArray<FDamageTypeDescription> UMinersManual::GetAllDamageTypeDescriptions() const {
    return TArray<FDamageTypeDescription>();
}

TArray<FDamageTypeDescription> UMinersManual::GetAllCustomTypeDescriptions() const {
    return TArray<FDamageTypeDescription>();
}

FText UMinersManual::FindDescriptionFromDamageType(const FDamageTypeDescription& DamageType) {
    return FText::GetEmpty();
}


