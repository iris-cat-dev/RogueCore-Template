#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AmmoUnlockItem.h"
#include "BXEAmmoUnlockManager.generated.h"

class AFSDPlayerController;
class AItem;
class APlayerCharacter;
class UBXEAmmoUnlockManager;

UCLASS(Blueprintable)
class UBXEAmmoUnlockManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<APlayerCharacter*, FAmmoUnlockItem> Modifiers;
    
public:
    UBXEAmmoUnlockManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UBXEAmmoUnlockManager* GetInstance(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void ClearUnlock(AFSDPlayerController* PlayerController, const float ammoScale);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddModifierToItem(AItem* Item);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddModifier(AFSDPlayerController* PlayerController, const float ammoScale);
    
};

