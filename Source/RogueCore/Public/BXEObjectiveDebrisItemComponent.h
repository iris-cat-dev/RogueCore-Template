#pragma once
#include "CoreMinimal.h"
#include "DebrisItemComponent.h"
#include "Templates/SubclassOf.h"
#include "BXEObjectiveDebrisItemComponent.generated.h"

class UBXEBlueprintControlledObjective;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBXEObjectiveDebrisItemComponent : public UDebrisItemComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBXEBlueprintControlledObjective> objectiveClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlySpawnInLastRoom;
    
public:
    UBXEObjectiveDebrisItemComponent(const FObjectInitializer& ObjectInitializer);

};

