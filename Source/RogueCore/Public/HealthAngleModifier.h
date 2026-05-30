#pragma once
#include "CoreMinimal.h"
#include "HealthModifier.h"
#include "HealthAngleModifier.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UHealthAngleModifier : public UHealthModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DamageChangeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageChange;
    
    UHealthAngleModifier();

};

