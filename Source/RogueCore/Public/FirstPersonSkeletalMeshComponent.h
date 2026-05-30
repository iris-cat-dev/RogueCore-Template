#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "FirstPersonSkeletalMeshComponent.generated.h"

class APlayerController;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFirstPersonSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UFirstPersonSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void SetFirstPersonFOVEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSetFirstPersonFOVEnabled();
    
    UFUNCTION(BlueprintCallable)
    static FVector CalcFirstPersonFOVPositionCorrection(APlayerController* PlayerController, const FVector& origPos);
    
};

