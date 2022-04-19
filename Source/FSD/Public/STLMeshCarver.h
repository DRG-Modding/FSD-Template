#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "DeepCSGFloatTree.h"
#include "UObject/NoExportTypes.h"
#include "STLMeshCarver.generated.h"

UCLASS()
class FSD_API USTLMeshCarver : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FBox AABB;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FDeepCSGFloatTree BSPTree;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Vertices;
    
    USTLMeshCarver();
};

