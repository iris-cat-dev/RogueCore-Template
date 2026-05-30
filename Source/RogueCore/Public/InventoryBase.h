#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DelegateDelegate.h"
#include "EquippedActorData.h"
#include "Templates/SubclassOf.h"
#include "InventoryBase.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UInventoryBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnEquippedActorChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActorsSelectable, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsSelectable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActorsNonSelectable, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsNonSelectable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EquippedActor, meta=(AllowPrivateAccess=true))
    FEquippedActorData ReplicatedEquippedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEquippedActorData EquippedActor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastEquippedActors[2];
    
public:
    UInventoryBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetEquippedActor(const FEquippedActorData& Actor, bool CallClientDelayed);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_EquipExternalActor(AActor* Actor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_EquippedActor(FEquippedActorData& OldActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActorsSelectable(TArray<AActor*> lastSelectable);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActorsNonSelectable(TArray<AActor*> lastNonSelectable);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetSelectableActorsOfType(TSubclassOf<AActor> Class, TArray<AActor*>& OutActors, bool& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetSelectableActors() const;
    
    UFUNCTION(BlueprintCallable)
    void GetNonSelectableActorsOfType(TSubclassOf<AActor> Class, TArray<AActor*>& OutActors, bool& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void EquipNull();
    
    UFUNCTION(BlueprintCallable)
    void EquipLast();
    
    UFUNCTION(BlueprintCallable)
    void EquipAtIndex(int32 Index, bool ignoreUsing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSelectActor(const AActor* Actor) const;
    
};

