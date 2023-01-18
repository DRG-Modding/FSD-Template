#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UObject/NoExportTypes.h"
#include "TracerManager.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class UTracerManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WhizByStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WhizByMaxDistanceFromTrajectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WhizBySpeed;
    
public:
    UTracerManager();
    UFUNCTION(BlueprintCallable)
    void AddTracer(FVector Origin, const FVector& Destination, float Speed, UParticleSystem* particle, float MinDistance, float Offset, UParticleSystem* Trail);
    
};

