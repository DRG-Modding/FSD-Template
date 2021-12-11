#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DeepCSGSection.generated.h"

class UDeepProceduralMeshComponent;

UCLASS()
class FSDENGINE_API ADeepCSGSection : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UDeepProceduralMeshComponent* DeepMesh;
    
    ADeepCSGSection();
};

