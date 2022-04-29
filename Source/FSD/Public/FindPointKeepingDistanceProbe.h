#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FindPointKeepingDistanceProbe.generated.h"

UCLASS(Blueprintable)
class AFindPointKeepingDistanceProbe : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(EditAnywhere)
    float IdealTargetDist;
    
    AFindPointKeepingDistanceProbe();
};

