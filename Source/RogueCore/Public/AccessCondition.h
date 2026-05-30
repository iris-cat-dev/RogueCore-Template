#pragma once
#include "CoreMinimal.h"
#include "SavableDataAsset.h"
#include "AccessCondition.generated.h"

class UAccessCondition;
class UDialogDataAsset;
class USoundCue;

UCLASS(Blueprintable)
class ROGUECORE_API UAccessCondition : public USavableDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DenyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDialogDataAsset> DenyShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> DenySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAccessCondition*> LinkedConditions;
    
public:
    UAccessCondition();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UAccessCondition*> GetLinkedConditions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDenyText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<USoundCue> GetDenySound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UDialogDataAsset> GetDenyShout() const;
    
};

