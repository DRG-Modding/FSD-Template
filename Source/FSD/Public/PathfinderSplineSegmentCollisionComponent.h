#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PFCollisionType.h"
#include "UObject/NoExportTypes.h"
#include "PathfinderSplineSegmentCollisionComponent.generated.h"

class USplineComponent;

UCLASS(BlueprintType)
class UPathfinderSplineSegmentCollisionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    PFCollisionType CollisionType;
    
    UFUNCTION(BlueprintCallable)
    void UpdateFromSpline(USplineComponent* SplineComponent, int32 StartIndex);
    
    UFUNCTION(BlueprintCallable)
    void Update(const FVector& SplineStart, const FVector& SplineStartTangent, const FVector& SplineEnd, const FVector& SplineEndTangent);
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
    UPathfinderSplineSegmentCollisionComponent();
};

