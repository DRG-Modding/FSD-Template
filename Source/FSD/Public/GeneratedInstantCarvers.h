#pragma once
#include "CoreMinimal.h"
#include "LevelCarverPass.h"
#include "GeneratedInstantCarvers.generated.h"

USTRUCT(BlueprintType)
struct FGeneratedInstantCarvers {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FLevelCarverPass> LevelCarverPasses;
    
public:
    FSD_API FGeneratedInstantCarvers();
};

