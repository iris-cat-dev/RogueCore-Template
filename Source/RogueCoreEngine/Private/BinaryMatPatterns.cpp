#include "BinaryMatPatterns.h"

FBinaryMatPatterns::FBinaryMatPatterns() {
    this->PatternType = EPattern::Specific;
    this->PatternMaterial = nullptr;
    this->ReplaceWith = FBinaryMatProperties();
}

