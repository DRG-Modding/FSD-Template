#pragma once
#include "CoreMinimal.h"
#include "ETrackBuildPlacementState.h"
#include "Engine/NetSerialization.h"
#include "TrackBuilderPoint.generated.h"

class UTrackBuilderConnectPoint;

USTRUCT(BlueprintType)
struct FTrackBuilderPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ETrackBuildPlacementState PlacementState;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Location;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize EulerRotation;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bPointValid;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UTrackBuilderConnectPoint> ConnectPoint;
    
    FSD_API FTrackBuilderPoint();
};

