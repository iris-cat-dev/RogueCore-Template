#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "TrackBuilderSegment.h"
#include "FuelLineSegment.generated.h"

class UHealthComponentBase;
class USceneComponent;
class USimpleHealthComponent;
class USplineComponent;
class USplineMeshComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API AFuelLineSegment : public ATrackBuilderSegment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* FuelLineSplineMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* FuelLineSplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FuelLineEndPostMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USimpleHealthComponent* DeconstructHealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* PreviewEndPostLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndPostHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasMaxTurnAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTurnAngle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHaveFlowingLiquid;
    
public:
    AFuelLineSegment(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetHaveFlowingLiquid(const bool NewHaveFlowingLiquid);
    
    UFUNCTION(BlueprintCallable)
    void PropagateFlowingLiquid(const bool NewHaveFlowingLiquid);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFlowingLiquidChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HaveFlowingLiquid() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientUpdateStartTransform(const FVector& NewStartLocation);
    
    UFUNCTION(BlueprintCallable)
    void ChangeStartTransform(const FTransform& ChangedStartLocation);
    
private:
    UFUNCTION(BlueprintCallable)
    void CallbackOnDeath(UHealthComponentBase* InHealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void CallbackCanStartNextSegmentChanged(bool InCanStart);
    
};

