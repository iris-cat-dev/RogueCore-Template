#include "RunObjectiveOverrides.h"

FRunObjectiveOverrides::FRunObjectiveOverrides() {
    this->PrimaryObjectiveOverride = ERunItemOverrideType::None;
    this->PrimaryObjective = nullptr;
    this->SecondaryObjectivesOverride = ERunListOverrideType::None;
    this->ExpeniteObjectivesOverride = ERunListOverrideType::None;
}

