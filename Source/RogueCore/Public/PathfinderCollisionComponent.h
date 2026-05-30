#pragma once
#include "CoreMinimal.h"
#include "PFCollisionType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "PFCollisionType.h"
#include "PathfinderCollisionComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPathfinderCollisionComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ActivatePFCollisionAtInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    PFCollisionType PFColiType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowInTerrainScanner;
    
    UPathfinderCollisionComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnInitialGenerationDone();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsInsideConvex(FVector SamplePosition) const;
    
    UFUNCTION(BlueprintCallable)
    void DisablePFCollision();
    
    UFUNCTION(BlueprintCallable)
    void ActivatePFCollision();
    
};

