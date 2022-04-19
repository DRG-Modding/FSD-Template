#include "DeepCSGSection.h"
#include "DeepProceduralMeshComponent.h"

ADeepCSGSection::ADeepCSGSection() {
    this->DeepMesh = CreateDefaultSubobject<UDeepProceduralMeshComponent>(TEXT("DeepMesh"));
}

