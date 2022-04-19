#pragma once
#include "CoreMinimal.h"
#include "GrabAvoidClassEntry.h"
#include "GrabberComponent.h"
#include "AvoidActorEntry.h"
#include "FakePhysGrabberComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UFakePhysGrabberComponent : public UGrabberComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGrabAvoidClassEntry> ActorTypesToAvoid;
    
private:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAvoidActorEntry> ActorsToAvoid;
    
public:
    UFakePhysGrabberComponent();
};

