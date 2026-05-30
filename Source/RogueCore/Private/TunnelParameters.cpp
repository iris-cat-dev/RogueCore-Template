#include "TunnelParameters.h"

UTunnelParameters::UTunnelParameters() {
    this->PathfinderNoise = nullptr;
    this->PathZStraightnessScale = 0.00f;
    this->PathDirectionPenalty = 0.00f;
    this->PathEntranceAnglePenalty = 0.00f;
    this->ObstacleCostScale = 1.00f;
    this->AllowBlockedEntrances = false;
    this->PickBestMatchingEntrance = false;
    this->PickBestMatchingExit = false;
    this->MatchByDistance = false;
}


