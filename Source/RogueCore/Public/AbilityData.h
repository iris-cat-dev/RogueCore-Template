#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "SavableDataAsset.h"
#include "Templates/SubclassOf.h"
#include "AbilityData.generated.h"

class AFSDPlayerState;
class UAbilityWidget;
class UBXEUnlockBase;
class UBXEUnlockCollection;
class UDialogDataAsset;
class UItemID;
class UTexture2D;

UCLASS(Blueprintable)
class UAbilityData : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemID* ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAbilityWidget> AbilityWidgetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PreviewImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* AbilityFailedShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEUnlockCollection* AbilityUpgrades;
    
    UAbilityData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UBXEUnlockBase*> GetOwnedAbilityUpgrades(AFSDPlayerState* InPlayerState) const;
    
};

