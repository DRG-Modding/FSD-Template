#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RDGComponent.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRDGComponentOnDetonated);

UCLASS()
class URDGComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRDGComponentOnDetonated OnDetonated;
    
    URDGComponent();
};

