#pragma once
#include "CoreMinimal.h"
#include "SingleUsableComponent.h"
#include "ConditionalUsableComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UConditionalUsableComponent : public USingleUsableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AllowedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoredActors;
    
    UConditionalUsableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveIgnored(AActor* ToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllowed(AActor* ToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllIgnored();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllAllowed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAllowedNum();
    
    UFUNCTION(BlueprintCallable)
    void AddIgnored(AActor* ToIgnore);
    
    UFUNCTION(BlueprintCallable)
    void AddAllow(AActor* ToAllow);
    
};

