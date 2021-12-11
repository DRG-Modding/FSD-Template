#pragma once
#include "CoreMinimal.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "InstancedMeshOnSpline.generated.h"

class USplineComponent;

UCLASS(EditInlineNew)
class UInstancedMeshOnSpline : public UInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumInstances;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Scale;
    
    UPROPERTY(Transient)
    TArray<FTransform> NewInstancesTransforms;
    
    UPROPERTY(Transient)
    float Phase;
    
    UFUNCTION(BlueprintCallable)
    void SetSpeed(float newSpeed);
    
    UInstancedMeshOnSpline();
};

