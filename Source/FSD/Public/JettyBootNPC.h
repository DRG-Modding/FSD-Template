#pragma once
#include "CoreMinimal.h"
#include "IRandRange.h"
#include "JettyBootNPC.generated.h"

USTRUCT(BlueprintType)
struct FJettyBootNPC {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HasPlayedChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange ScoreInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> StartScores;
    
    FSD_API FJettyBootNPC();
};

