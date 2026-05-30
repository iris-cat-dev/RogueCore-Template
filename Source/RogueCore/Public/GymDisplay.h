#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EGymDisplayType.h"
#include "GymDisplay.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API AGymDisplay : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGymDisplayType GymType;
    
public:
    AGymDisplay(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGymDisplayType GetGymType() const;
    
};

