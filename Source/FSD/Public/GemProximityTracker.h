#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TrackPositionList.h"
#include "GemProximityTracker.generated.h"

class UGemTracker;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGemProximityTracker : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, Transient)
    TArray<TWeakObjectPtr<UGemTracker>> Trackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTrackPositionList> TrackerLists;
    
    UGemProximityTracker();
};

