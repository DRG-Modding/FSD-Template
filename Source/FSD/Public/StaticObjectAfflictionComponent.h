#pragma once
#include "CoreMinimal.h"
#include "PawnAfflictionComponent.h"
#include "StaticObjectAfflictionComponent.generated.h"

class UStaticMeshComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UStaticObjectAfflictionComponent : public UPawnAfflictionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
public:
    UStaticObjectAfflictionComponent();
};

