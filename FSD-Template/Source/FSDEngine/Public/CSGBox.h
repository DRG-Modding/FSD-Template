#pragma once
#include "CoreMinimal.h"
#include "ConvexMeshWithCachedTree.h"
#include "MeshBoxProperties.h"
#include "CSGBox.generated.h"

UCLASS()
class UCSGBox : public UConvexMeshWithCachedTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMeshBoxProperties Properties;
    
    UCSGBox();
};

