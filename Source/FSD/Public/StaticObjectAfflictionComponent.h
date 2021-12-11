#pragma once
#include "CoreMinimal.h"
#include "PawnAfflictionComponent.h"
#include "StaticObjectAfflictionComponent.generated.h"

class UStaticMeshComponent;

UCLASS()
class UStaticObjectAfflictionComponent : public UPawnAfflictionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UStaticMeshComponent* Mesh;
    
public:
    UStaticObjectAfflictionComponent();
};

