#pragma once
#include "CoreMinimal.h"
#include "CSGBaseComponent.h"
#include "BinaryTerrainMaterialCombiner.h"
#include "SimpleMeshWithCachedTreeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USimpleMeshWithCachedTreeComponent : public UCSGBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBinaryTerrainMaterialCombiner Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertCSG;
    
    USimpleMeshWithCachedTreeComponent();
};

