#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundModulationDestinationSettings -FallbackName=SoundModulationDestinationSettings
#include "EnvelopeFollowerGeneratorParams.h"
#include "SoundControlBusMixStage.h"
#include "SoundModulationADEnvelopeParams.h"
#include "SoundModulationLFOParams.h"
#include "Templates/SubclassOf.h"
#include "AudioModulationStatics.generated.h"

class UAudioModulationDestination;
class UObject;
class USoundControlBus;
class USoundControlBusMix;
class USoundModulationGenerator;
class USoundModulationGeneratorADEnvelope;
class USoundModulationGeneratorEnvelopeFollower;
class USoundModulationGeneratorLFO;
class USoundModulationParameter;
class USoundModulatorBase;

UCLASS(Blueprintable, MinimalAPI)
class UAudioModulationStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAudioModulationStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateModulator(const UObject* WorldContextObject, USoundModulatorBase* Modulator);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateMixFromObject(const UObject* WorldContextObject, USoundControlBusMix* mix, float FadeTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateMixByFilter(const UObject* WorldContextObject, USoundControlBusMix* mix, const FString& AddressFilter, TSubclassOf<USoundModulationParameter> ParamClassFilter, USoundModulationParameter* ParamFilter, float Value, float FadeTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateMix(const UObject* WorldContextObject, USoundControlBusMix* mix, TArray<FSoundControlBusMixStage> Stages, float FadeTime, double duration, bool bRetriggerOnActivation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGlobalBusMixValue(const UObject* WorldContextObject, USoundControlBus* Bus, float Value, float FadeTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SaveMixToProfile(const UObject* WorldContextObject, USoundControlBusMix* mix, int32 ProfileIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FSoundControlBusMixStage> LoadMixFromProfile(const UObject* WorldContextObject, USoundControlBusMix* mix, bool bActivate, int32 ProfileIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsControlBusMixActive(const UObject* WorldContextObject, USoundControlBusMix* mix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetModulatorValue(const UObject* WorldContextObject, USoundModulatorBase* Modulator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSet<USoundModulatorBase*> GetModulatorsFromDestination(const FSoundModulationDestinationSettings& Destination);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DeactivateGenerator(const UObject* WorldContextObject, USoundModulationGenerator* Generator);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DeactivateBusMix(const UObject* WorldContextObject, USoundControlBusMix* mix);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DeactivateBus(const UObject* WorldContextObject, USoundControlBus* Bus);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DeactivateAllBusMixes(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USoundModulationParameter* CreateModulationParameter(UObject* WorldContextObject, FName Name, TSubclassOf<USoundModulationParameter> ParamClass, float DefaultValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAudioModulationDestination* CreateModulationDestination(UObject* WorldContextObject, FName Name, USoundModulatorBase* Modulator);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USoundModulationGeneratorLFO* CreateLFOGenerator(UObject* WorldContextObject, FName Name, FSoundModulationLFOParams Params);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USoundModulationGeneratorEnvelopeFollower* CreateEnvelopeFollowerGenerator(UObject* WorldContextObject, FName Name, FEnvelopeFollowerGeneratorParams Params);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FSoundControlBusMixStage CreateBusMixStage(const UObject* WorldContextObject, USoundControlBus* Bus, float Value, float AttackTime, float ReleaseTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USoundControlBusMix* CreateBusMixFromValue(const UObject* WorldContextObject, FName Name, const TArray<USoundControlBus*>& Buses, float Value, float AttackTime, float ReleaseTime, bool bActivate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USoundControlBusMix* CreateBusMix(UObject* WorldContextObject, FName Name, TArray<FSoundControlBusMixStage> Stages, bool Activate, double duration, bool bRetriggerOnActivation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USoundControlBus* CreateBus(UObject* WorldContextObject, FName Name, USoundModulationParameter* Parameter, bool Activate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USoundModulationGeneratorADEnvelope* CreateADEnvelopeGenerator(UObject* WorldContextObject, FName Name, const FSoundModulationADEnvelopeParams& Params);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearGlobalBusMixValue(const UObject* WorldContextObject, USoundControlBus* Bus, float FadeTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearAllGlobalBusMixValues(const UObject* WorldContextObject, float FadeTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ActivateGenerator(const UObject* WorldContextObject, USoundModulationGenerator* Generator);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ActivateBusMix(const UObject* WorldContextObject, USoundControlBusMix* mix);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ActivateBus(const UObject* WorldContextObject, USoundControlBus* Bus);
    
};

