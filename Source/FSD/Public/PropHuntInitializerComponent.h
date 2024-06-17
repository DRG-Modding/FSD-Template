#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PropHuntInitializerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPropHuntInitializerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPropHuntInitializerComponent(const FObjectInitializer& ObjectInitializer);

};

