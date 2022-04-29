#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttackerManagerComponent.generated.h"

class UAttackerPositioningComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAttackerManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAttackerPositioningComponent*> Components;
    
public:
    UAttackerManagerComponent();
};

