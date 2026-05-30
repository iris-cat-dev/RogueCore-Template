#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AccessCollectionComponent.generated.h"

class UAccessCondition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UAccessCollectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UAccessCondition*> AccessConditions;
    
public:
    UAccessCollectionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RemoveCondition(UAccessCondition* Condition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCondition(const UAccessCondition* Condition) const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddCondition(UAccessCondition* Condition);
    
};

