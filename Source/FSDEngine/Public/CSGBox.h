#pragma once
#include "CoreMinimal.h"
#include "ConvexMeshWithCachedTree.h"
#include "MeshBoxProperties.h"
#include "CSGBox.generated.h"

UCLASS(Blueprintable)
class UCSGBox : public UConvexMeshWithCachedTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshBoxProperties Properties;
    
    UCSGBox();
};

