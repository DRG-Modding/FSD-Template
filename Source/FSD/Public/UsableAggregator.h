#pragma once
#include "CoreMinimal.h"
#include "ItemAggregator.h"
#include "UsableAggregator.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUsableAggregatorOnVisibilityChanged, bool, IsVisible);

UCLASS()
class UUsableAggregator : public UItemAggregator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUsableAggregatorOnVisibilityChanged OnVisibilityChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText UsingText;
    
public:
    UFUNCTION(BlueprintCallable)
    float GetProgress();
    
    UUsableAggregator();
};

