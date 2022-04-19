#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "Components/TimelineComponent.h"
#include "UObject/NoExportTypes.h"
#include "ZipLineProjectile.generated.h"

class UPointLightComponent;
class UMaterialInstanceDynamic;
class UTimelineComponent;
class UStatusEffect;
class UCurveFloat;

UCLASS(Abstract)
class AZipLineProjectile : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTimelineComponent* Timeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaterialGlow;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnTimelineFloat Callback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LightCurve;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPointLightComponent*> PointLights;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
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

