#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DeepPathFinderType.h"
#include "BaseCritterDescriptor.generated.h"

class UDebrisPositioning;
class AFSDPawn;
class UBiome;

UCLASS(Abstract)
class UBaseCritterDescriptor : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFSDPawn> CritterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UBiome*, TSoftClassPtr<AFSDPawn>> BiomeClassOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* Positioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DeepPathFinderType PathfinderType;
    
public:
    UBaseCritterDescriptor();
};

