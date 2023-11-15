#include "CSGBuilder.h"
#include "CSGGroupComponent.h"

ACSGBuilder::ACSGBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCSGGroupComponent>(TEXT("CSGRoot"));
    this->CSGRoot = (UCSGGroupComponent*)RootComponent;
    this->CurrentRoot = NULL;
    this->CurrentPreviewRoot = NULL;
    this->CurrentPreviewConfig = NULL;
    this->PreviewScene = NULL;
}


