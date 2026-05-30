#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "AsyncLoadCompleteDelegateDelegate.h"
#include "EAsyncLoadPriority.h"
#include "EAsyncPersistence.h"
#include "AsyncManager.generated.h"

class UObject;

UCLASS(Blueprintable)
class UAsyncManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> PermanentReferences;
    
public:
    UAsyncManager();

protected:
    UFUNCTION(BlueprintCallable)
    TArray<UClass*> SyncLoadClasses(const TArray<TSoftClassPtr<UObject>>& Assets, const EAsyncPersistence persistence);
    
    UFUNCTION(BlueprintCallable)
    UClass* SyncLoadClass(TSoftClassPtr<UObject> Asset, const EAsyncPersistence persistence);
    
    UFUNCTION(BlueprintCallable)
    TArray<UObject*> SyncLoadAssets(const TArray<TSoftObjectPtr<UObject>>& Assets, const EAsyncPersistence persistence);
    
    UFUNCTION(BlueprintCallable)
    UObject* SyncLoadAsset(TSoftObjectPtr<UObject> Asset, const EAsyncPersistence persistence);
    
public:
    UFUNCTION(BlueprintCallable)
    void ReleaseAllHandles();
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadSoftObjects(const TArray<TSoftObjectPtr<UObject>>& Items, EAsyncPersistence persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadSoftObject(const TSoftObjectPtr<UObject> Item, EAsyncPersistence persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadSoftClasses(TArray<TSoftClassPtr<UObject>> Items, EAsyncPersistence persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadSoftClass(TSoftClassPtr<UObject> Item, EAsyncPersistence persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadAssets(const TArray<FSoftObjectPath>& Items, EAsyncPersistence persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadAsset(const FSoftObjectPath& Item, EAsyncPersistence persistence, const FAsyncLoadCompleteDelegate& OnLoadComplete, EAsyncLoadPriority Priority);
    
};

