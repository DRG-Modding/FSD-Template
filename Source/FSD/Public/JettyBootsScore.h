#pragma once
#include "CoreMinimal.h"
#include "JettyBootsScore.generated.h"

USTRUCT(BlueprintType)
struct FJettyBootsScore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    FSD_API FJettyBootsScore();
};

