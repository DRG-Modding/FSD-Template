#pragma once
#include "CoreMinimal.h"
#include "TrackPositionList.h"
#include "Components/ActorComponent.h"
#include "GemProximityTracker.generated.h"

class UGemTracker;

UCLASS()
class UGemProximityTracker : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    TArray<TWeakObjectPtr<UGemTracker>> Trackers;
    
    UPROPERTY(Transient)
    TArray<FTrackPositionList> TrackerLists;
    
    UGemProximityTracker();
};

