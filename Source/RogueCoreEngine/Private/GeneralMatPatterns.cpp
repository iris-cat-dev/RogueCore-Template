#include "GeneralMatPatterns.h"

FGeneralMatPatterns::FGeneralMatPatterns() {
    this->PatternType = EGeneralPattern::SrcSpecific;
    this->PatternMaterial = nullptr;
    this->ReplaceWith = FGeneralMatProperties();
}

