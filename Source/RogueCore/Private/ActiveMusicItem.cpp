#include "ActiveMusicItem.h"

FActiveMusicItem::FActiveMusicItem() {
    this->Sound = nullptr;
    this->StartingTime = 0.00f;
    this->FadeDuration = 0.00f;
    this->Looping = false;
    this->Category = nullptr;
}

