#pragma once
#include "CoreMinimal.h"
#include "ShardStage.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FShardStage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> Shards;
    
    FSD_API FShardStage();
};

