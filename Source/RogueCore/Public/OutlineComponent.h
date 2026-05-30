#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DelegateDelegate.h"
#include "EOutline.h"
#include "OutlineComponent.generated.h"

class AActor;
class AItem;
class APlayerCharacter;
class UHealthComponentBase;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOutlineComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOutlineChanged, EOutline, InOutline);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutlineChanged OnOutlineChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnPingedByLaserPointer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOutline DefaultOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ActiveOnHoldTAB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoesTrackWithOutlineType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomLaserPointDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LockCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EOutline CurrentOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> OutlinedComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> ExcludedComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> IncludedComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> Character;
    
public:
    UOutlineComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlockOutline();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDefaultOutline(bool visible);
    
    UFUNCTION(BlueprintCallable)
    void SetOutline(EOutline Outline);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromOutline(UPrimitiveComponent* Component);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnToggleOutlineType(EOutline Outline, bool visible, bool checkIfOwnerIsAlive);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleOutline(bool visible);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerDeath(UHealthComponentBase* HealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnItemUnequipped(AItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnItemEquipped(AItem* Item);
    
public:
    UFUNCTION(BlueprintCallable)
    void LockOutline(const EOutline LockToOutline);
    
    UFUNCTION(BlueprintCallable)
    void EnableActivateOnHoldTab();
    
    UFUNCTION(BlueprintCallable)
    void DisableActiveOnHoldTab();
    
    UFUNCTION(BlueprintCallable)
    void AddToOutline(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void AddActorToOutline(AActor* Actor);
    
};

