#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "LaserPointerTarget.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FLaserPointerTarget {
    GENERATED_BODY()
public:
    UPROPERTY()
    FHitResult HitInfo;
    
    UPROPERTY()
    AActor* Target;
    
    UPROPERTY()
    AActor* ExtraTarget;
    
    FSD_API FLaserPointerTarget();
};

