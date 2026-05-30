#pragma once
#include "CoreMinimal.h"
#include "Aquisitionable.h"
#include "EPickaxePartLocation.h"
#include "SavablePrimaryDataAsset.h"
#include "PickaxePart.generated.h"

class IAquisitionSource;
class UAquisitionSource;
class UAquisitionBase;
class UPickaxePartItem;

UCLASS(Blueprintable)
class ROGUECORE_API UPickaxePart : public USavablePrimaryDataAsset, public IAquisitionable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IAquisitionSource> AquisitionSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAquisitionBase* Aquisition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPickaxePartItem* Item;
    
public:
    UPickaxePart();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUnlockedFromStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPickaxePartLocation GetPrefferedLocation() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    TScriptInterface<IAquisitionSource> GetAquisitionSource() const override PURE_VIRTUAL(GetAquisitionSource, return NULL;);
    
};

