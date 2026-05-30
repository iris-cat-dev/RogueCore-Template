#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EInputKeys.h"
#include "ActivationObject.generated.h"

class APlayerCharacter;
class USingleUsableComponent;

UCLASS(Abstract, Blueprintable)
class AActivationObject : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USingleUsableComponent* usable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasBeenUsed;
    
public:
    AActivationObject(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnUsedBy(APlayerCharacter* User, EInputKeys Key);
    
};

