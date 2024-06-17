#pragma once
#include "CoreMinimal.h"
#include "GlobalMissionSeed.generated.h"

USTRUCT(BlueprintType)
struct FSD_API FGlobalMissionSeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Season;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapKey;
    
    FGlobalMissionSeed();
};

