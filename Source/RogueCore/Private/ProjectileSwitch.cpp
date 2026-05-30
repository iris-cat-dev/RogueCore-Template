#include "ProjectileSwitch.h"

FProjectileSwitch::FProjectileSwitch() {
    this->ProjectileClass = nullptr;
    this->CriteriaType = EProjectileSwitchCriteria::None;
    this->CriteriaThreshhold = 0.00f;
}

