#pragma once
#include "CoreMinimal.h"
#include "PathObstacle.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "NoisyPathfinderTest.generated.h"

class UFloodFillSettings;
class UTunnelSegmentSetting;
class UTunnelParameters;
class ADeepCSGWorld;

UCLASS()
class ANoisyPathfinderTest : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FVector Start;
    
    UPROPERTY(EditAnywhere)
    FVector End;
    
    UPROPERTY(EditAnywhere)
    FVector StartDirection;
    
    UPROPERTY(EditAnywhere)
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
    
    UPROPERTY(EditAnywhere)
    TArray<FPathObstacle> obstacles;
    
    UPROPERTY(EditAnywhere)
    UTunnelSegmentSetting* TunnelSettings;
    
    UPROPERTY(EditAnywhere)
    UTunnelParameters* TunnelParameters;
    
    UPROPERTY(EditAnywhere)
    int32 StepSize;
    
    UPROPERTY(EditAnywhere)
    bool Realtime;
    
    UPROPERTY(EditAnywhere)
    bool CarvePath;
    
    UPROPERTY(EditAnywhere)
    bool CanDiagonal;
    
    UPROPERTY(EditAnywhere)
    UFloodFillSettings* FloodFillSettings;
    
    UPROPERTY(EditAnywhere)
    ADeepCSGWorld* CSGWorld;
    
public:
    ANoisyPathfinderTest();
};

