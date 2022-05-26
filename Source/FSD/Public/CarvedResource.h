#pragma once
#include "CoreMinimal.h"
#include "CarvedResource.generated.h"

class UCarvedResourceCreator;

USTRUCT(BlueprintType)
struct FCarvedResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UCarvedResourceCreator* ResourceCreator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> PredeterminedRooms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Overflow;
    
    FSD_API FCarvedResource();
};

