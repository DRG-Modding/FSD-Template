#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BakeSettings.generated.h"

USTRUCT(BlueprintType)
struct FBakeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, bool> Bools;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, int32> Ints;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, float> Floats;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FVector> Vectors;
    
    FSDENGINE_API FBakeSettings();
};

