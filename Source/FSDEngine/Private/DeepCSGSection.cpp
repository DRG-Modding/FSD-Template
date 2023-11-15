#include "DeepCSGSection.h"
#include "DeepProceduralMeshComponent.h"

ADeepCSGSection::ADeepCSGSection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UDeepProceduralMeshComponent>(TEXT("DeepMesh"));
    this->DeepMesh = (UDeepProceduralMeshComponent*)RootComponent;
}


