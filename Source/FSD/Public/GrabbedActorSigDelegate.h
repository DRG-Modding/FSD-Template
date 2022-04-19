#pragma once
#include "CoreMinimal.h"
#include "GrabbedActorSigDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGrabbedActorSig, AActor*, aGrabbedActor);

