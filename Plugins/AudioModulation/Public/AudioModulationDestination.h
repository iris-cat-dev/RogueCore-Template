#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AudioModulationDestination.generated.h"

class USoundModulatorBase;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UAudioModulationDestination : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundModulatorBase* Modulator;
    
public:
    UAudioModulationDestination();

    UFUNCTION(BlueprintCallable)
    bool SetModulator(const USoundModulatorBase* InModulator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundModulatorBase* GetModulator() const;
    
    UFUNCTION(BlueprintCallable)
    bool ClearModulator();
    
};

