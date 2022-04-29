#pragma once
#include "CoreMinimal.h"
#include "LevelCarverPass.h"
#include "GeneratedInstantCarvers.generated.h"

USTRUCT(BlueprintType)
struct FGeneratedInstantCarvers {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLevelCarverPass> LevelCarverPasses;
    
public:
    FSD_API FGeneratedInstantCarvers();
};

