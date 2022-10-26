#pragma once
#include "CoreMinimal.h"
#include "GrabberComponent.h"
#include "AvoidActorEntry.h"
#include "GrabAvoidClassEntry.h"
#include "FakePhysGrabberComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFakePhysGrabberComponent : public UGrabberComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGrabAvoidClassEntry> ActorTypesToAvoid;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAvoidActorEntry> ActorsToAvoid;
    
public:
    UFakePhysGrabberComponent();
};

