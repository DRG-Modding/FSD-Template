#include "MiningPodCalldownLocation.h"
#include "Components/SceneComponent.h"

AMiningPodCalldownLocation::AMiningPodCalldownLocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}


