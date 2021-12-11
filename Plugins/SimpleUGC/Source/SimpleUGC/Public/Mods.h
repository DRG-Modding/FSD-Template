#pragma once
#include "CoreMinimal.h"
#include "ModDefinition.h"
#include "Mods.generated.h"

USTRUCT(BlueprintType)
struct FMods {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FModDefinition> Mods;
    
    SIMPLEUGC_API FMods();
};

