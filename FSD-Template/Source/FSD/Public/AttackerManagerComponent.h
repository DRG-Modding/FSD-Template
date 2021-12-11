#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttackerManagerComponent.generated.h"

class UAttackerPositioningComponent;

UCLASS()
class UAttackerManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    TArray<UAttackerPositioningComponent*> Components;
    
public:
    UAttackerManagerComponent();
};

