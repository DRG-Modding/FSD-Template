#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MeshBoxProperties.generated.h"

USTRUCT(BlueprintType)
struct FMeshBoxProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector HalfSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BevelSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BevelSize;
    
    FSDENGINE_API FMeshBoxProperties();
};

