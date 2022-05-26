#pragma once
#include "CoreMinimal.h"
#include "GenerationItem.h"
#include "SpawnResourceGenerationItem.generated.h"

class UResourceData;
class USphereComponent;

UCLASS(Blueprintable)
class ASpawnResourceGenerationItem : public AGenerationItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* Sphere;
    
public:
    ASpawnResourceGenerationItem();
};

