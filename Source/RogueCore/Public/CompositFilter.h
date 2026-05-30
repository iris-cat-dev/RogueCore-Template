#pragma once
#include "CoreMinimal.h"
#include "ECompositMode.h"
#include "ItemUpgradeFilter.h"
#include "CompositFilter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCompositFilter : public UItemUpgradeFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgradeFilter*> Filters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECompositMode Mode;
    
    UCompositFilter();

};

