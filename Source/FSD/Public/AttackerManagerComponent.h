#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttackerManagerComponent.generated.h"

class UAttackerPositioningComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAttackerManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAttackerPositioningComponent*> Components;
    
public:
    UAttackerManagerComponent();
};

