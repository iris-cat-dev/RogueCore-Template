#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "FindSessionsCallbackProxy.h"
#include "CloudSaveMetadata.h"
#include "DownloadMetadataResultDelegate.h"
#include "DownloadSaveGameResultDelegate.h"
#include "UploadSaveGameResultDelegate.h"
#include "FSDCloudSaveClient.generated.h"

class UFSDSaveGame;

UCLASS(Blueprintable)
class UFSDCloudSaveClient : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlueprintFindSessionsResultDelegate, const TArray<FBlueprintSessionResult>&, Results);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUploadSaveGameResult UploadSavegameDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownloadMetadataResult DownloadMetadataDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownloadSaveGameResult DownloadSavegameDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCloudSaveMetadata> MetaData;
    
    UFSDCloudSaveClient();

    UFUNCTION(BlueprintCallable)
    bool SaveToCloud(UFSDSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable)
    bool DownloadMetadata();
    
    UFUNCTION(BlueprintCallable)
    bool DownloadLatest();
    
    UFUNCTION(BlueprintCallable)
    bool DownloadBackupVersion(int64 Generation);
    
};

