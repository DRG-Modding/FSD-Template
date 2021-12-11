#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FakeMoverState.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FFakeMoverState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float TickRate;
    
    UPROPERTY(Transient)
    float TickTime;
    
    UPROPERTY(Transient)
    FVector PrevPos;
    
    UPROPERTY(Transient)
    FVector NextPos;
    
    UPROPERTY(Transient)
    FVector PrevSurfaceNormal;
    
    UPROPERTY(Transient)
    FVector NextSurfaceNormal;
    
    UPROPERTY(Transient)
    float AccumulatedTime;
    
    UPROPERTY(Transient)
    AActor* Target;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool NearSurface;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float SignedDistToSurface;
    
    FSD_API FFakeMoverState();
};

