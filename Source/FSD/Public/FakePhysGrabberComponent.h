#pragma once
#include "CoreMinimal.h"
#include "GrabberComponent.h"
#include "GrabAvoidClassEntry.h"
#include "AvoidActorEntry.h"
#include "FakePhysGrabberComponent.generated.h"

UCLASS()
class UFakePhysGrabberComponent : public UGrabberComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FGrabAvoidClassEntry> ActorTypesToAvoid;
    
private:
    UPROPERTY(Transient)
    TArray<FAvoidActorEntry> ActorsToAvoid;
    
public:
    UFakePhysGrabberComponent();
};

