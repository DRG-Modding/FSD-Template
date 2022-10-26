#include "ImpactIndicator.h"
#include "Components/SceneComponent.h"

void AImpactIndicator::SetRadius(float NewRadius) {
}

AImpactIndicator::AImpactIndicator() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->InnerScaler = CreateDefaultSubobject<USceneComponent>(TEXT("InnerScaler"));
    this->OuterScaler = CreateDefaultSubobject<USceneComponent>(TEXT("OuterScaler"));
    this->Radius = -1.00f;
}

