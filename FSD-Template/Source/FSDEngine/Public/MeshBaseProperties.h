#pragma once
#include "CoreMinimal.h"
#include "MeshBaseProperties.generated.h"

USTRUCT(BlueprintType)
struct FMeshBaseProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool Enabled;
    
    FSDENGINE_API FMeshBaseProperties();
};

