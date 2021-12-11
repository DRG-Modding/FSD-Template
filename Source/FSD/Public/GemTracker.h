#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GemTracker.generated.h"

UCLASS()
class UGemTracker : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName TrackName;
    
    UGemTracker();
};

