#include "AudioModulationStatics.h"
#include "Templates/SubclassOf.h"

UAudioModulationStatics::UAudioModulationStatics() {
}

void UAudioModulationStatics::UpdateModulator(const UObject* WorldContextObject, USoundModulatorBase* Modulator) {
}

void UAudioModulationStatics::UpdateMixFromObject(const UObject* WorldContextObject, USoundControlBusMix* mix, float FadeTime) {
}

void UAudioModulationStatics::UpdateMixByFilter(const UObject* WorldContextObject, USoundControlBusMix* mix, const FString& AddressFilter, TSubclassOf<USoundModulationParameter> ParamClassFilter, USoundModulationParameter* ParamFilter, float Value, float FadeTime) {
}

void UAudioModulationStatics::UpdateMix(const UObject* WorldContextObject, USoundControlBusMix* mix, TArray<FSoundControlBusMixStage> Stages, float FadeTime, double duration, bool bRetriggerOnActivation) {
}

void UAudioModulationStatics::SetGlobalBusMixValue(const UObject* WorldContextObject, USoundControlBus* Bus, float Value, float FadeTime) {
}

void UAudioModulationStatics::SaveMixToProfile(const UObject* WorldContextObject, USoundControlBusMix* mix, int32 ProfileIndex) {
}

TArray<FSoundControlBusMixStage> UAudioModulationStatics::LoadMixFromProfile(const UObject* WorldContextObject, USoundControlBusMix* mix, bool bActivate, int32 ProfileIndex) {
    return TArray<FSoundControlBusMixStage>();
}

bool UAudioModulationStatics::IsControlBusMixActive(const UObject* WorldContextObject, USoundControlBusMix* mix) {
    return false;
}

float UAudioModulationStatics::GetModulatorValue(const UObject* WorldContextObject, USoundModulatorBase* Modulator) {
    return 0.0f;
}

TSet<USoundModulatorBase*> UAudioModulationStatics::GetModulatorsFromDestination(const FSoundModulationDestinationSettings& Destination) {
    return TSet<USoundModulatorBase*>();
}

void UAudioModulationStatics::DeactivateGenerator(const UObject* WorldContextObject, USoundModulationGenerator* Generator) {
}

void UAudioModulationStatics::DeactivateBusMix(const UObject* WorldContextObject, USoundControlBusMix* mix) {
}

void UAudioModulationStatics::DeactivateBus(const UObject* WorldContextObject, USoundControlBus* Bus) {
}

void UAudioModulationStatics::DeactivateAllBusMixes(const UObject* WorldContextObject) {
}

USoundModulationParameter* UAudioModulationStatics::CreateModulationParameter(UObject* WorldContextObject, FName Name, TSubclassOf<USoundModulationParameter> ParamClass, float DefaultValue) {
    return nullptr;
}

UAudioModulationDestination* UAudioModulationStatics::CreateModulationDestination(UObject* WorldContextObject, FName Name, USoundModulatorBase* Modulator) {
    return nullptr;
}

USoundModulationGeneratorLFO* UAudioModulationStatics::CreateLFOGenerator(UObject* WorldContextObject, FName Name, FSoundModulationLFOParams Params) {
    return nullptr;
}

USoundModulationGeneratorEnvelopeFollower* UAudioModulationStatics::CreateEnvelopeFollowerGenerator(UObject* WorldContextObject, FName Name, FEnvelopeFollowerGeneratorParams Params) {
    return nullptr;
}

FSoundControlBusMixStage UAudioModulationStatics::CreateBusMixStage(const UObject* WorldContextObject, USoundControlBus* Bus, float Value, float AttackTime, float ReleaseTime) {
    return FSoundControlBusMixStage{};
}

USoundControlBusMix* UAudioModulationStatics::CreateBusMixFromValue(const UObject* WorldContextObject, FName Name, const TArray<USoundControlBus*>& Buses, float Value, float AttackTime, float ReleaseTime, bool bActivate) {
    return nullptr;
}

USoundControlBusMix* UAudioModulationStatics::CreateBusMix(UObject* WorldContextObject, FName Name, TArray<FSoundControlBusMixStage> Stages, bool Activate, double duration, bool bRetriggerOnActivation) {
    return nullptr;
}

USoundControlBus* UAudioModulationStatics::CreateBus(UObject* WorldContextObject, FName Name, USoundModulationParameter* Parameter, bool Activate) {
    return nullptr;
}

USoundModulationGeneratorADEnvelope* UAudioModulationStatics::CreateADEnvelopeGenerator(UObject* WorldContextObject, FName Name, const FSoundModulationADEnvelopeParams& Params) {
    return nullptr;
}

void UAudioModulationStatics::ClearGlobalBusMixValue(const UObject* WorldContextObject, USoundControlBus* Bus, float FadeTime) {
}

void UAudioModulationStatics::ClearAllGlobalBusMixValues(const UObject* WorldContextObject, float FadeTime) {
}

void UAudioModulationStatics::ActivateGenerator(const UObject* WorldContextObject, USoundModulationGenerator* Generator) {
}

void UAudioModulationStatics::ActivateBusMix(const UObject* WorldContextObject, USoundControlBusMix* mix) {
}

void UAudioModulationStatics::ActivateBus(const UObject* WorldContextObject, USoundControlBus* Bus) {
}


