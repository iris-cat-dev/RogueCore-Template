#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreOnlineServices -ObjectName=AchievementValueType -FallbackName=AchievementValueType
#include "AchievementComponent.generated.h"

class UAchievementAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAchievementComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAchievementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetAchievementValue(UAchievementAsset* InAsset, const FAchievementValueType& InType);
    
};

