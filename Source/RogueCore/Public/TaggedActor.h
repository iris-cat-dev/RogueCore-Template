#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "TaggedActor.generated.h"

UCLASS(Blueprintable)
class ATaggedActor : public AActor, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
public:
    ATaggedActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override {}
    UFUNCTION(BlueprintCallable)
    virtual bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override {return false;}
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override{return false;}
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override{return false;}
    
protected:
    UFUNCTION(BlueprintCallable)
    virtual FGameplayTagContainer BP_GetOwnedGameplayTags() const override { return FGameplayTagContainer{};}
    
};

