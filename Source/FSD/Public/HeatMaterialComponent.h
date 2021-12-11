#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HeatMaterialComponent.generated.h"

class UMaterialInstanceDynamic;

UCLASS(BlueprintType)
class UHeatMaterialComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UPROPERTY(EditAnywhere)
    float MaxEffect;
    
    UPROPERTY(Transient)
    TArray<UMaterialInstanceDynamic*> MaterialIntances;
    
    UFUNCTION(BlueprintCallable)
    void OnTemperatureChanged(float Temperature, bool Overheated);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddHeatMaterial(UMaterialInstanceDynamic* MaterialInstance);
    
    UHeatMaterialComponent();
};

