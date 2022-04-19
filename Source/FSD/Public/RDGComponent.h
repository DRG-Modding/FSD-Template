#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RDGExplodeDelegateDelegate.h"
#include "RDGComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class URDGComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRDGExplodeDelegate OnDetonated;
    
    URDGComponent();
};

