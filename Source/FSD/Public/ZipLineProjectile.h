#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Components/TimelineComponent.h"
#include "Templates/SubclassOf.h"
#include "ZipLineProjectile.generated.h"

class UCurveFloat;
class UMaterialInstanceDynamic;
class UPointLightComponent;
class UStatusEffect;
class UTimelineComponent;

UCLASS(Abstract, Blueprintable)
class AZipLineProjectile : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* Timeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaterialGlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimelineFloat Callback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPointLightComponent*> PointLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> OnUseStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> OnReleaseStatusEffect;
    
public:
    AZipLineProjectile();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTimelineTick(float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShoot(FVector Origin, FVector EndLocation);
    
};

