#pragma once
#include "CoreMinimal.h"
#include "CSGSTLProperties.generated.h"

class UStaticMeshCarver;

USTRUCT(BlueprintType)
struct FCSGSTLProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshCarver* Mesh;
    
    FSDENGINE_API FCSGSTLProperties();
};

