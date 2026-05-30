#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "UnlockCollectionTag.generated.h"

class UBXEUnlockCollection;

UCLASS(Blueprintable)
class UUnlockCollectionTag : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEUnlockCollection* DefaultCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseLocalSeedOffset;
    
public:
    UUnlockCollectionTag();

};

