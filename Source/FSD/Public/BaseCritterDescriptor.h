#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DeepPathFinderType.h"
#include "BaseCritterDescriptor.generated.h"

class UBiome;
class AFSDPawn;
class UDebrisPositioning;

UCLASS(Abstract)
class UBaseCritterDescriptor : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AFSDPawn> CritterClass;
    
    UPROPERTY(EditAnywhere)
    TMap<UBiome*, TSoftClassPtr<AFSDPawn>> BiomeClassOverrides;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDebrisPositioning* Positioning;
    
    UPROPERTY(EditAnywhere)
    DeepPathFinderType PathfinderType;
    
public:
    UBaseCritterDescriptor();
};

