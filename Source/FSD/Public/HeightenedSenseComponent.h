#pragma once
#include "CoreMinimal.h"
#include "HeightenedSenseTracker.h"
#include "FloatPerkComponent.h"
#include "HeightenedSenseComponent.generated.h"

class AActor;
class UPawnAffliction;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class FSD_API UHeightenedSenseComponent : public UFloatPerkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnAffliction* HeightenSenseAffliction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlertDistance;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHeightenedSenseTracker> ActiveTrackers;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bAfflictionActivated;
    
public:
    UHeightenedSenseComponent();
    UFUNCTION(BlueprintCallable)
    void RemoveTracker(AActor* TrackerActor);
    
    UFUNCTION(BlueprintCallable)
    void AddTracker(AActor* TrackerActor);
    
};

