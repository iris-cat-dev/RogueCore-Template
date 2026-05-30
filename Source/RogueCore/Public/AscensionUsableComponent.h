#pragma once
#include "CoreMinimal.h"
#include "SingleUsableComponent.h"
#include "AscensionUsableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UAscensionUsableComponent : public USingleUsableComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CharacterLevelTooLowText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NotEnoughMeritsText;
    
public:
    UAscensionUsableComponent(const FObjectInitializer& ObjectInitializer);

};

