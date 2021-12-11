#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FakeFallComponent.generated.h"

UCLASS(BlueprintType)
class UFakeFallComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void StartFakeFall();
    
    UFakeFallComponent();
};

