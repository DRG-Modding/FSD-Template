#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemAggregator.generated.h"

UCLASS(BlueprintType)
class UItemAggregator : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FText CounterText;
    
public:
    UFUNCTION(BlueprintCallable)
    void UnbindAllEvents();
    
    UItemAggregator();
};

