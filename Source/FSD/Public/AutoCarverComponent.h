#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "ECarveFilterType.h"
#include "AutoCarverComponent.generated.h"

class UTerrainMaterialBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAutoCarverComponentOnCarveDoneEvent);

UCLASS(EditInlineNew)
class UAutoCarverComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTerrainMaterialBase* TerrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Frequency;
    
    UPROPERTY(EditAnywhere)
    float ExpensiveNoise;
    
    UPROPERTY(EditAnywhere)
    float MinDistanceMoved;
    
    UPROPERTY(EditAnywhere)
    ECarveFilterType Filter;
    
    UPROPERTY(BlueprintAssignable)
    FAutoCarverComponentOnCarveDoneEvent OnCarveDoneEvent;
    
    UFUNCTION(BlueprintCallable)
    void ForceCarve();
    
    UAutoCarverComponent();
};

