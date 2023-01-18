#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Curves/CurveFloat.h"
#include "ImpactIndicator.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class AImpactIndicator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* InnerScaler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* OuterScaler;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve OuterGrowthCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve InnerGrowthCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
public:
    AImpactIndicator();
    UFUNCTION(BlueprintCallable)
    void SetRadius(float NewRadius);
    
};

