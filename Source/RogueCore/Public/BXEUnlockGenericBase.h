#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockBase.h"
#include "BXEUnlockGenericBase.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ROGUECORE_API UBXEUnlockGenericBase : public UBXEUnlockBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> CustomTextArguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
public:
    UBXEUnlockGenericBase();

};

