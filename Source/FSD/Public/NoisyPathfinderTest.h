#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PathObstacle.h"
#include "NoisyPathfinderTest.generated.h"

class UFloodFillSettings;
class ADeepCSGWorld;
class UTunnelSegmentSetting;
class UTunnelParameters;

UCLASS(Blueprintable)
class ANoisyPathfinderTest : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector End;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndDirection;
    
    UPROPERTY(EditAnywhere)
    float DirectionDistance;
    
    UPROPERTY(EditAnywhere)
    float DirectionPenalty;
    
    UPROPERTY(EditAnywhere)
    float ZPenaltyPower;
    
    UPROPERTY(EditAnywhere)
    float ZPenaltyScale;
    
    UPROPERTY(EditAnywhere)
    float DistancePenaltyScale;
    
    UPROPERTY(EditAnywhere)
    float RandomPenaltyScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPathObstacle> Obstacles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTunnelSegmentSetting* TunnelSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTunnelParameters* TunnelParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StepSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Realtime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CarvePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanDiagonal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFloodFillSettings* FloodFillSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADeepCSGWorld* CSGWorld;
    
public:
    ANoisyPathfinderTest();
};

