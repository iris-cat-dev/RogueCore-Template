#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Targetable.generated.h"

class UFXSystemAsset;
class UHealthComponentBase;

UINTERFACE(Blueprintable)
class UTargetable : public UInterface {
    GENERATED_BODY()
};

class ITargetable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void ShowDamageEffects(UFXSystemAsset* Particles, FVector Location, FRotator orientation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UHealthComponentBase* GetTargetHealthComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetTargetCenterMass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsTargetable() const;
    
};

