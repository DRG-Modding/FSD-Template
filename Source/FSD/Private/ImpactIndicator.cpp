#include "ImpactIndicator.h"
#include "Components/SceneComponent.h"

AImpactIndicator::AImpactIndicator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->InnerScaler = CreateDefaultSubobject<USceneComponent>(TEXT("InnerScaler"));
    this->OuterScaler = CreateDefaultSubobject<USceneComponent>(TEXT("OuterScaler"));
    this->Radius = -1.00f;
    this->InnerScaler->SetupAttachment(RootComponent);
    this->OuterScaler->SetupAttachment(RootComponent);
}

void AImpactIndicator::SetRadius(float NewRadius) {
}


