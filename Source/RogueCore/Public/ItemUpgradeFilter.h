#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ItemUpgradeFilter.generated.h"

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API UItemUpgradeFilter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Invert;
    
    UItemUpgradeFilter();

};

