#pragma once
#include "CoreMinimal.h"
#include "PlayerProgress.generated.h"

USTRUCT(BlueprintType)
struct FPlayerProgress {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerStars;
    
public:
    FSD_API FPlayerProgress();
};

