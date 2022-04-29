#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DeepCSGSection.generated.h"

class UDeepProceduralMeshComponent;

UCLASS(Blueprintable)
class FSDENGINE_API ADeepCSGSection : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDeepProceduralMeshComponent* DeepMesh;
    
    ADeepCSGSection();
};

