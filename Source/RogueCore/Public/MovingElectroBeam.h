#pragma once
#include "CoreMinimal.h"
#include "ElectroBeam.h"
#include "MovingElectroBeam.generated.h"

class AActor;

UCLASS(Blueprintable)
class AMovingElectroBeam : public AElectroBeam {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateRate;
    
public:
    AMovingElectroBeam(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetTargetActor(AActor* InTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceActor(AActor* InSource);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RecalculateMovingBeam();
    
};

