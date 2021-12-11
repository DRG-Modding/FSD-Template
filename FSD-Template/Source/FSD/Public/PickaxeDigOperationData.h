#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PickaxeDigOperationData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPickaxeDigOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 OperationNumber;
    
    UPROPERTY(EditAnywhere)
    FVector HitPos;
    
    UPROPERTY(EditAnywhere)
    FVector Dir;
    
    UPROPERTY(EditAnywhere)
    float DigSize;
    
    UPROPERTY(EditAnywhere)
    AActor* Miner;
    
    FSD_API FPickaxeDigOperationData();
};

