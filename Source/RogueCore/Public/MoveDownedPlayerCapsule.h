#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "RepelLocationData.h"
#include "MoveDownedPlayerCapsule.generated.h"

class USceneComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UMoveDownedPlayerCapsule : public UCapsuleComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> TargetLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRepelling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRepelLocationData RepelData;
    
public:
    UMoveDownedPlayerCapsule(const FObjectInitializer& ObjectInitializer);

};

