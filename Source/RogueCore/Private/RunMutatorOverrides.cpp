#include "RunMutatorOverrides.h"

FRunMutatorOverrides::FRunMutatorOverrides() {
    this->PrimaryMutatorOverride = ERunItemOverrideType::None;
    this->PrimaryMutator = nullptr;
    this->SecondaryMutatorsOverride = ERunListOverrideType::None;
    this->RiskVectorsOverride = ERunListOverrideType::None;
}

