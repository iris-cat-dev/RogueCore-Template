#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PawnDebugComponent.generated.h"

class UHealthComponent;
class UHealthComponentBase;
class UObjectInfoComponent;
class UWidgetComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPawnDebugComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UObjectInfoComponent* InfoComponent;
    
public:
    UPawnDebugComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ShowPawnHealth(bool InWidgetVisible);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthChanged(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(UHealthComponentBase* InHealthComponent);
    
};

