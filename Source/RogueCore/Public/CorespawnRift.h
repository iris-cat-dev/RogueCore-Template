#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CorespawnRift.generated.h"

class UDebrisPositioning;

UCLASS(Blueprintable)
class ACorespawnRift : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* DebrisPositioning;
    
public:
    ACorespawnRift(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRiftEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRiftDisabled();
    
    UFUNCTION(BlueprintCallable)
    void EnableRift();
    
    UFUNCTION(BlueprintCallable)
    void DisableRift();
    
};

