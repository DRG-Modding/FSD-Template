#pragma once
#include "CoreMinimal.h"
#include "CarvedResource.generated.h"

class UCarvedResourceCreator;

USTRUCT(BlueprintType)
struct FCarvedResource {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UCarvedResourceCreator* ResourceCreator;
    
    UPROPERTY(Transient)
    TArray<int32> PredeterminedRooms;
    
    UPROPERTY(Transient)
    int32 Amount;
    
    UPROPERTY(Transient)
    float Overflow;
    
    FSD_API FCarvedResource();
};

