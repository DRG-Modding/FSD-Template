#pragma once
#include "CoreMinimal.h"
#include "GenerationItem.h"
#include "SpawnResourceGenerationItem.generated.h"

class USphereComponent;
class UResourceData;

UCLASS()
class ASpawnResourceGenerationItem : public AGenerationItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UResourceData* Resource;
    
    UPROPERTY(EditAnywhere)
    float BaseAmount;
    
    UPROPERTY(Export, VisibleAnywhere)
    USphereComponent* Sphere;
    
public:
    ASpawnResourceGenerationItem();
};

