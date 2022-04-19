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
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMultiHitscanHit> Hits;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> Components;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFSDPhysicalMaterial*> PhysicalMaterials;
    
    FSD_API FMultiHitScanHits();
};

