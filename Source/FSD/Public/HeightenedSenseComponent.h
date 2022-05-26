#pragma once
#include "CoreMinimal.h"
#include "FloatPerkComponent.h"
#include "HeightenedSenseTracker.h"
#include "HeightenedSenseComponent.generated.h"

class UPawnAffliction;
class AActor;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UHeightenedSenseComponent : public UFloatPerkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnAffliction* HeightenSenseAffliction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlertDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHeightenedSenseTracker> ActiveTrackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAfflictionActivated;
    
public:
    UHeightenedSenseComponent();
    UFUNCTION(BlueprintCallable)
    void RemoveTracker(AActor* TrackerActor);
    
    UFUNCTION(BlueprintCallable)
    void AddTracker(AActor* TrackerActor);
    
};

