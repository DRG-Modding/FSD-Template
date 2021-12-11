#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "DeepCSGFloatTree.h"
#include "UObject/NoExportTypes.h"
#include "STLMeshCarver.generated.h"

UCLASS()
class FSD_API USTLMeshCarver : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FBox AABB;
    
    UPROPERTY(VisibleAnywhere)
    FDeepCSGFloatTree BSPTree;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FVector> Vertices;
    
    USTLMeshCarver();
};

