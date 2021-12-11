#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "ZipLineProjectile.generated.h"

class UTimelineComponent;
class UCurveFloat;
class UMaterialInstanceDynamic;
class UPointLightComponent;
class UStatusEffect;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FZipLineProjectileCallback, float, Output);

UCLASS(Abstract)
class AZipLineProjectile : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTimelineComponent* Timeline;
    
    UPROPERTY(EditAnywhere)
    float LightIntensity;
    
    UPROPERTY(EditAnywhere)
    float MaterialGlow;
    
    UPROPERTY()
    FZipLineProjectileCallback Callback;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* LightCurve;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    TArray<UPointLightComponent*> PointLights;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<UMaterialInstanceDynamic*> MaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UStatusEffect> OnUseStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UStatusEffect> OnReleaseStatusEffect;
    
    UFUNCTION(BlueprintCallable)
    void OnTimelineTick(float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShoot(FVector Origin, FVector EndLocation);
    
public:
    AZipLineProjectile();
};

