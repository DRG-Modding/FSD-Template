#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FindPointKeepingDistanceProbe.generated.h"

UCLASS(Blueprintable)
class AFindPointKeepingDistanceProbe : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdealTargetDist;
    
    AFindPointKeepingDistanceProbe();
};

