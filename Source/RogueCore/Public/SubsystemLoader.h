#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Templates/SubclassOf.h"
#include "SubsystemLoader.generated.h"

class USubsystem;

UCLASS(Blueprintable)
class USubsystemLoader : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USubsystem>> BlueprintSubSystems;
    
public:
    USubsystemLoader();

};

