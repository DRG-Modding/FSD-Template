#pragma once
#include "CoreMinimal.h"
#include "BiomesLoadCompleteSignatureDelegate.generated.h"

class UBiome;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBiomesLoadCompleteSignature, const TArray<UBiome*>&, Biomes);

