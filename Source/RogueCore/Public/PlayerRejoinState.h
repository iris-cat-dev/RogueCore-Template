#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "RejoinFloat.h"
#include "RejoinInt.h"
#include "PlayerRejoinState.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerRejoinState : public UActorComponent {
    GENERATED_BODY()
public:
    UPlayerRejoinState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Reset();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RemoveIntValue_Internal(const FGuid& ItemKey, const FName& ValueKey);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RemoveFloatValue_Internal(const FGuid& ItemKey, const FName& ValueKey);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddIntValue_Internal(const FGuid& ItemKey, const FName& ValueKey, int32 Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddFloatValue_Internal(const FGuid& ItemKey, const FName& ValueKey, float Value);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetValues(const TArray<FRejoinFloat>& floatValues, const TArray<FRejoinInt>& intValues);
    
};

