#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TrackPositionList.h"
#include "GemProximityTracker.generated.h"

class UGemTracker;

UCLASS(meta=(BlueprintSpawnableComponent))
class UGemProximityTracker : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UGemTracker>> Trackers;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTrackPositionList> TrackerLists;
    
    UGemProximityTracker();
};

