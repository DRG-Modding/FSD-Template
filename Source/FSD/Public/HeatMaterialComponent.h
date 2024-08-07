#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HeatMaterialComponent.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHeatMaterialComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MaterialIntances;
    
public:
    UHeatMaterialComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTemperatureChanged(float temperature, bool overheated);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddHeatMaterial(UMaterialInstanceDynamic* MaterialInstance);
    
};

