#pragma once
#include "CoreMinimal.h"
#include "ConvexMeshWithCachedTreeComponent.h"
#include "MeshBoxProperties.h"
#include "CSGBoxComponent.generated.h"

UCLASS()
class UCSGBoxComponent : public UConvexMeshWithCachedTreeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMeshBoxProperties Properties;
    
    UCSGBoxComponent();
};

