#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ClassSchemaExporter.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UClassSchemaExporter : public UObject {
    GENERATED_BODY()
public:
    UClassSchemaExporter();

    UFUNCTION(BlueprintCallable)
    static void PrintClassSchemaToLog(const UClass* TargetClass);
    
};

