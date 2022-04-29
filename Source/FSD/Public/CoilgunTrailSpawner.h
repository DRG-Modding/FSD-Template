#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "CoilgunTrailSpawner.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UCoilgunTrailSpawner : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> TrailSegmentClass;
    
    UPROPERTY(EditAnywhere)
    float SegmentSpawnInterval;
    
    UPROPERTY(EditAnywhere)
    float TrailDistance;
    
    UPROPERTY(EditAnywhere)
    float TrailSegmentInterval;
    
    UPROPERTY(EditAnywhere)
    float TrailSpawnRange;
    
public:
    UCoilgunTrailSpawner();
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnSegment();
    
};

