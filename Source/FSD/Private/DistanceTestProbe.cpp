#include "DistanceTestProbe.h"
#include "Components/SceneComponent.h"

ADistanceTestProbe::ADistanceTestProbe(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneComponent"));
    this->MaxDistance = 800.00f;
    this->NumX = 10;
    this->NumY = 10;
    this->DeltaX = 10.00f;
    this->DeltaY = 10.00f;
}


