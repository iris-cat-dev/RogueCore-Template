#pragma once
#include "CoreMinimal.h"
#include "EFSDTargetPlatform.h"
#include "AdvertisedEntitlement.h"
#include "EFSDTargetPlatform.h"
#include "PlatformStoreEntitlement.generated.h"

UCLASS(Blueprintable)
class UPlatformStoreEntitlement : public UAdvertisedEntitlement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFSDTargetPlatform, FString> PlatformToIdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AnnounceOnStart;
    
public:
    UPlatformStoreEntitlement();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlatformID(FString& idOut) const;
    
};

