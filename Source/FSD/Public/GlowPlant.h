#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GlowPlant.generated.h"

class UStaticMeshComponent;
class UPointLightComponent;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class AGlowPlant : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* TrunkMesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPointLightComponent* MainLight;
    
    UPROPERTY(EditAnywhere)
    float IntensityBase;
    
    UPROPERTY(EditAnywhere)
    float RadiusBase;
    
    UPROPERTY(EditAnywhere)
    float IntensityPerPart;
    
    UPROPERTY(EditAnywhere)
    float RadiusPerPart;
    
    UPROPERTY(EditAnywhere)
    float IntensityAllParts;
    
    UPROPERTY(EditAnywhere)
    float RadiusAllParts;
    
    UPROPERTY(EditAnywhere)
    float MaxIntensity;
    
    UPROPERTY(EditAnywhere)
    float MinIntensity;
    
    UPROPERTY(EditAnywhere)
    float TimeOnMaxLight;
    
    UPROPERTY(EditAnywhere)
    float IntensityFadeInTime;
    
    UPROPERTY(EditAnywhere)
    float IntensityFadeOutTime;
    
    UPROPERTY(EditAnywhere)
    float MaxEmissive;
    
    UPROPERTY(EditAnywhere)
    float MinEmissive;
    
    UPROPERTY(EditAnywhere)
    float EmissiveFadeInTime;
    
    UPROPERTY(EditAnywhere)
    float EmissiveFadeOutTime;
    
public:
    AGlowPlant();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnDeath();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnDamage(UPrimitiveComponent* hitSphere);
    
};

