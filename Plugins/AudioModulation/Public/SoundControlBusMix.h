#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SoundControlBusMixStage.h"
#include "SoundControlBusMix.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundControlBusMix : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 ProfileIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRetriggerOnActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundControlBusMixStage> MixStages;
    
    USoundControlBusMix();

protected:
    UFUNCTION(BlueprintCallable)
    void SoloMix();
    
    UFUNCTION(BlueprintCallable)
    void SaveMixToProfile();
    
    UFUNCTION(BlueprintCallable)
    void LoadMixFromProfile();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateMix();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateAllMixes();
    
    UFUNCTION(BlueprintCallable)
    void ActivateMix();
    
};

