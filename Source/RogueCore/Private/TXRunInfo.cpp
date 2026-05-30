#include "TXRunInfo.h"

FTXRunInfo::FTXRunInfo() {
    this->run_depth = 0;
    this->run_length = 0;
    this->run_complexity = 0;
    this->hazard_bonus = 0.00f;
    this->run_name = FString();
    this->run_mutator = FString();
}

