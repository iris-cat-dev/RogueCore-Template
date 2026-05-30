#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DamageLogger.h"
#include "OnCharacterDataLoadedDelegate.h"
#include "ParsedRunHistoryEntry.h"
#include "RunHistoryBasicCooperStats.h"
#include "RunHistoryEntry.h"
#include "RunHistoryManager.generated.h"

class AFSDPlayerState;
class UCharacterBuildDataUtil;
class URun;

UCLASS(Blueprintable)
class ROGUECORE_API URunHistoryManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterDataLoaded OnCharacterDataLoaded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCharacterBuildDataUtil* CharacterBuildDataUtil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageLogger Logger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasSavedRecentRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRunHistoryBasicCooperStats BasicCooperStats;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FParsedRunHistoryEntry> CachedHistoryEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FParsedRunHistoryEntry> SentPlayerStateEntries;
    
public:
    URunHistoryManager();

    UFUNCTION(BlueprintCallable)
    void RemoveRunHistoryEntry(int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRunGenerated(URun* Run);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRunHistoryEntry> GetTotalRunHistory() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetParsedHistory(int32 HistoryIndex, FParsedRunHistoryEntry& OutEntry);
    
    UFUNCTION(BlueprintCallable)
    bool GetLatestParsedHistory(FParsedRunHistoryEntry& OutEntry);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ClearDamageLog(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void Cheat_SaveCurrentRunToHistory();
    
    UFUNCTION(BlueprintCallable)
    void Cheat_ClearRunHistory();
    
    UFUNCTION(BlueprintCallable)
    void AddCurrentRunToHistory(AFSDPlayerState* State);
    
};

