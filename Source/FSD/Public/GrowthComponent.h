#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "Components/ActorComponent.h"
#include "GrowthComponent.generated.h"

class USceneComponent;

UCLASS(BlueprintType)
class UGrowthComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    USceneComponent* ScaleComponent;
    
    UPROPERTY(Transient)
    FRuntimeFloatCurve CurrentGrowthCurve;
    
public:
    UFUNCTION(BlueprintCallable)
    void StopGrow();
    
    UFUNCTION(BlueprintCallable)
    void StartGrow(USceneComponent* aComponentToScale, FRuntimeFloatCurve aCurve);
    
    UGrowthComponent();
};

