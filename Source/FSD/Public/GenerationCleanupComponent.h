#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GenerationCleanupComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGenerationCleanupComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UGenerationCleanupComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnCarverCallback();
    
};

