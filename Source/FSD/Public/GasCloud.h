#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GasCloud.generated.h"

UCLASS(Blueprintable)
class AGasCloud : public AActor {
    GENERATED_BODY()
public:
    AGasCloud(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Ignite();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Freeze();
    
};

