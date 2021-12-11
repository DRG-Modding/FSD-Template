#pragma once
#include "CoreMinimal.h"
#include "FloatPerkComponent.h"
#include "HeightenedSenseTracker.h"
#include "HeightenedSenseComponent.generated.h"

class UPawnAffliction;
class AActor;

UCLASS(Abstract)
class FSD_API UHeightenedSenseComponent : public UFloatPerkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UPawnAffliction* HeightenSenseAffliction;
    
    UPROPERTY(EditAnywhere)
    float AlertDistance;
    
    UPROPERTY(Transient)
    TArray<FHeightenedSenseTracker> ActiveTrackers;
    
    UPROPERTY(Transient)
    bool bAfflictionActivated;
    
    UFUNCTION(BlueprintCallable)
    void RemoveTracker(AActor* TrackerActor);
    
    UFUNCTION(BlueprintCallable)
    void AddTracker(AActor* TrackerActor);
    
public:
    UHeightenedSenseComponent();
};

