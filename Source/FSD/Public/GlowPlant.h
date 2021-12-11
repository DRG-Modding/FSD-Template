#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GlowPlant.generated.h"

class UStaticMeshComponent;
class UPointLightComponent;
class UPrimitiveComponent;

UCLASS(Abstract)
class AGlowPlant : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* TrunkMesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UPointLightComponent* MainLight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IntensityBase;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RadiusBase;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IntensityPerPart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RadiusPerPart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IntensityAllParts;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RadiusAllParts;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxIntensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinIntensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeOnMaxLight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IntensityFadeInTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IntensityFadeOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxEmissive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinEmissive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EmissiveFadeInTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EmissiveFadeOutTime;
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnDeath();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnDamage(UPrimitiveComponent* hitSphere);
    
    AGlowPlant();
};

