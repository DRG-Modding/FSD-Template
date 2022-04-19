#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemAggregator.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UItemAggregator : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FText CounterText;
    
public:
    UItemAggregator();
    UFUNCTION(BlueprintCallable)
    void UnbindAllEvents();
    
};

