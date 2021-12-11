#pragma once
#include "CoreMinimal.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SplineDecoratorComponent.generated.h"

class USplineComponent;
class UMaterialInterface;

UCLASS(EditInlineNew)
class FSD_API USplineDecoratorComponent : public UInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float DistanceBetweenInstances;
    
    UPROPERTY(EditAnywhere)
    int32 StartIndex;
    
    UPROPERTY(EditAnywhere)
    int32 EndIndex;
    
    UPROPERTY(EditAnywhere)
    bool bUpdateContinuously;
    
    UPROPERTY(EditAnywhere)
    FVector VerticalOffset;
    
    UPROPERTY(EditAnywhere)
    FVector Scale;
    
    UPROPERTY(BlueprintReadWrite)
    float DistanceProgress;
    
    UPROPERTY(Export, Transient)
    USplineComponent* SplineComponent;
    
    UPROPERTY(Transient)
    TArray<FTransform> NewInstancesTransforms;
    
    UPROPERTY(Transient)
    float Phase;
    
public:
    UFUNCTION(BlueprintCallable)
    void Update(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetUpdateContinuously(bool InContinuously);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineComponentAndMaterial(USplineComponent* InSplineComponent, int32 ElementIndex, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineComponent(USplineComponent* InSplineComponent);
    
    USplineDecoratorComponent();
};

