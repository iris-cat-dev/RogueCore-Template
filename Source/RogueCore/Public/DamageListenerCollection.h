#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DamageRelevant.h"
#include "EDamageListenerQualities.h"
#include "ListenerEntry.h"
#include "DamageListenerCollection.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UDamageListenerCollection : public UActorComponent, public IDamageRelevant {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FListenerEntry> Listeners;
    
public:
    UDamageListenerCollection(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasDamageBit(int32 BitMask, EDamageListenerQualities bit);
    

    // Fix for true pure virtual functions not being implemented
};

