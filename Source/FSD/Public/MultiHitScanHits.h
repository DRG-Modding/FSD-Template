#pragma once
#include "CoreMinimal.h"
#include "MultiHitscanHit.h"
#include "MultiHitScanHits.generated.h"

class UPrimitiveComponent;
class UFSDPhysicalMaterial;

USTRUCT(BlueprintType)
struct FMultiHitScanHits {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FMultiHitscanHit> Hits;
    
    UPROPERTY(Export, Transient)
    TArray<UPrimitiveComponent*> Components;
    
    UPROPERTY(Transient)
    TArray<UFSDPhysicalMaterial*> PhysicalMaterials;
    
    FSD_API FMultiHitScanHits();
};

