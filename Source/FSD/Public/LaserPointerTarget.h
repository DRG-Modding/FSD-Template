#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "LaserPointerTarget.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FLaserPointerTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult HitInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ExtraTarget;
    
    FSD_API FLaserPointerTarget();
};

