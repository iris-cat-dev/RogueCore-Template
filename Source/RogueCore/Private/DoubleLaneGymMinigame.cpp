#include "DoubleLaneGymMinigame.h"

UDoubleLaneGymMinigame::UDoubleLaneGymMinigame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HoldingOne = EGymActions::NoAction;
    this->progression = 0.00f;
    this->PromptNr = 0;
    this->HitWindow = 0.90f;
    this->SweetSpot = 0.20f;
    this->AroundSweetSpot = 0.35f;
    this->MinSpaceBetweenPrompts = 0.30f;
    this->SweetSpotSize = 1.00f;
    this->MaxTime = 5.00f;
    this->MinTime = 1.00f;
    this->PlayerMovementFriction = 1.00f;
    this->PlayingForceAnimation = false;
    this->AroundSweetSpotMultiplier = 0.50f;
    this->CornerMultiplier = 0.10f;
}


