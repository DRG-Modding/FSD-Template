#pragma once
#include "CoreMinimal.h"
#include "FloatPerkComponent.h"
#include "BezerkPerkComponent.generated.h"

class UPawnStat;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBezerkPerkComponent : public UFloatPerkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnStat* BoostedStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmountPerValue;
    
public:
    UBezerkPerkComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnHealthChanged(float Health);
    
};

