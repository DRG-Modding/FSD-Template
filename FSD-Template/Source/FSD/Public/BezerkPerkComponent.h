#pragma once
#include "CoreMinimal.h"
#include "FloatPerkComponent.h"
#include "BezerkPerkComponent.generated.h"

class UPawnStat;

UCLASS(Abstract)
class UBezerkPerkComponent : public UFloatPerkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UPawnStat* BoostedStat;
    
    UPROPERTY(EditAnywhere)
    float AmountPerValue;
    
    UFUNCTION(BlueprintCallable)
    void OnHealthChanged(float Health);
    
public:
    UBezerkPerkComponent();
};

