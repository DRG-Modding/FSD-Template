#pragma once
#include "CoreMinimal.h"
#include "JettyBootsScore.h"
#include "JettyBootsSave.generated.h"

USTRUCT(BlueprintType)
struct FJettyBootsSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJettyBootsScore> HighScores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJettyBootsScore> NPC_HighScores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitializeNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastHighScoreIndex;
    
    FSD_API FJettyBootsSave();
};

