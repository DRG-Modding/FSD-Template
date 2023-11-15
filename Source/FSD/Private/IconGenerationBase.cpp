#include "IconGenerationBase.h"
#include "Components/SceneComponent.h"

AIconGenerationBase::AIconGenerationBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ActiveCaptureComponent = NULL;
    this->DownScaleMaterial = NULL;
}


