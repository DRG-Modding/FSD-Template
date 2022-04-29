#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MeshBoxProperties.generated.h"

USTRUCT(BlueprintType)
struct FMeshBoxProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HalfSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BevelSegments;
    
    UPROPERTY(EditAnywhere)
    float BevelSize;
    
    FSDENGINE_API FMeshBoxProperties();
};

