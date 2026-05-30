#pragma once
#include "CoreMinimal.h"
#include "PerkInputUnlockComponent.h"
#include "ScanObjects.h"
#include "Templates/SubclassOf.h"
#include "SonarScanUnlockComponent.generated.h"

class AActor;
class UCurveFloat;
class UHUDRadarWidget;
class UMaterial;
class UOutlineComponent;
class USoundBase;
class UStatusEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USonarScanUnlockComponent : public UPerkInputUnlockComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> PointOfInterestClasses;
    
    UPROPERTY(EditAnywhere, Export, ReplicatedUsing=OnRep_EnabledPointOfInterestOutlines, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UOutlineComponent>> EnabledPointOfInterestOutlines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> ActivationSound2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> ActivationSoundWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterial> ActivationMaterialEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PostOpacityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceOfScanWedge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleOfScanWedge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScanDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> OutlineStatusEffect;
    
public:
    USonarScanUnlockComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SetRadarWidget(UHUDRadarWidget* InRadarWidget);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_HandleScanObjects(const FScanObjects& InScanObjects);
    
    UFUNCTION()
    void OnRep_EnabledPointOfInterestOutlines(const TArray<TWeakObjectPtr<UOutlineComponent>>& InPrevComponents);
    
    UFUNCTION(BlueprintCallable)
    void DisablePointOfInterestOutlines();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SpawnSoundAtOwner(USoundBase* InSound) const;
    
};

