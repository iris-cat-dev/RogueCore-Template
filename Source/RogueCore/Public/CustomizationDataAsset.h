#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Aquisitionable.h"
#include "MeshCustomizationOption.h"
#include "SavableDataAsset.h"
#include "CustomizationDataAsset.generated.h"

class IAquisitionSource;
class UAquisitionSource;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class ROGUECORE_API UCustomizationDataAsset : public USavableDataAsset, public IAquisitionable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMeshCustomizationOption> ComponentCustomizationArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ThumbnailIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CustomizationCategory;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IAquisitionSource> AquisitionSource;
    
public:
    UCustomizationDataAsset();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool IsOwned(UObject* WorldContextObject);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    TScriptInterface<IAquisitionSource> GetAquisitionSource() const override PURE_VIRTUAL(GetAquisitionSource, return NULL;);
    
};

