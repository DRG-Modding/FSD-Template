#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VanityNode.generated.h"

class UReward;

USTRUCT(BlueprintType)
struct FVanityNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UReward* Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> ConnectedNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsBig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsStartingNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Position;
    
    FSD_API FVanityNode();
};

