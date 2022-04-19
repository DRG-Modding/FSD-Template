#pragma once
#include "CoreMinimal.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "InstancedMeshOnSpline.generated.h"

class USplineComponent;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UInstancedMeshOnSpline : public UInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Scale;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTransform> NewInstancesTransforms;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float Phase;
    
    UInstancedMeshOnSpline();
    UFUNCTION(BlueprintCallable)
    void SetSpeed(float newSpeed);
    
};

