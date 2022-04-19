#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FakeFallComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UFakeFallComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFakeFallComponent();
    UFUNCTION(BlueprintCallable)
    void StartFakeFall();
    
};

