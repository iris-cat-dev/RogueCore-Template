#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ExampleUpdatedDelegateDelegate.h"
#include "ExampleActor.generated.h"

UCLASS(Blueprintable)
class AExampleActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExampleUpdatedDelegate OnExampleUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Field;
    
public:
    AExampleActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ExampleFunction();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_ExampleUpdated();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ExampleFunction();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ExampleFunction();
    
};

