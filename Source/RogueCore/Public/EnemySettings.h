#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "RandRange.h"
#include "Templates/SubclassOf.h"
#include "EnemySettings.generated.h"

class UDamageComponent;

UCLASS(Blueprintable)
class UEnemySettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange EnemyWaveRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UDamageComponent>> ExplodingEnemiesDamageComponents;
    
    UEnemySettings();

};

