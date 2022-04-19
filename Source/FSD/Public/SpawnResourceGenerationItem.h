#pragma once
#include "CoreMinimal.h"
#include "GenerationItem.h"
#include "SpawnResourceGenerationItem.generated.h"

class UResourceData;
class USphereComponent;

UCLASS()
class ASpawnResourceGenerationItem : public AGenerationItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseAmount;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USphereComponent* Sphere;
    
public:
    ASpawnResourceGenerationItem();
};

