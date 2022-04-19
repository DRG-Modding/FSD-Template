#include "ActiveMusicItem.h"

FActiveMusicItem::FActiveMusicItem() {
    this->Sound = NULL;
    this->StartingTime = 0.00f;
    this->FadeDuration = 0.00f;
    this->Looping = false;
    this->Category = NULL;
}

