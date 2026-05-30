#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PerkCooldownWidget.generated.h"

class AActor;
class UPerkAsset;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPerkCooldownWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* MonitoredCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPerkAsset* MonitoredPerk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float currentProgress;
    
public:
    UPerkCooldownWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetMonitoredPerk(AActor* Character, UPerkAsset* Perk);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCooldownProgressChanged(const float Progress);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingCoolDownTime() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCoolDownProgress() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearMonitoredPerk();
    
};

