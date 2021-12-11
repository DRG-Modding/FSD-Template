#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SavableDataAsset.h"
#include "VanityNode.h"
#include "TreeOfVanity.generated.h"

class UReward;

UCLASS(EditInlineNew)
class UTreeOfVanity : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FVanityNode> Nodes;
    
    UFUNCTION(BlueprintCallable)
    void ClearNodes();
    
    UFUNCTION(BlueprintCallable)
    void AddNode(UReward* Reward, int32 NodeID, TArray<int32> ConnectedNodes, bool isStartingNode, bool isBig, FVector2D Position);
    
    UTreeOfVanity();
};

