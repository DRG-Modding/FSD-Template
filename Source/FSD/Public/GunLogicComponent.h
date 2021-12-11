#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "GunLogicComponent.generated.h"

class UWeaponFireComponent;
class UMeshComponent;
class UParticleSystem;
class USoundCue;

UCLASS(BlueprintType)
class UGunLogicComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UWeaponFireComponent* WeaponFire;
    
    UPROPERTY(Export, Transient)
    UMeshComponent* Mesh;
    
    UPROPERTY(EditAnywhere)
    float RateOfFire;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* MuzzleParticles;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* TracerParticles;
    
    UPROPERTY(EditAnywhere)
    USoundCue* FireSound;
    
    UPROPERTY(EditAnywhere)
    float MinTracerDistance;
    
    UPROPERTY(EditAnywhere)
    float TracerSpeed;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMesh(UMeshComponent* NewMesh);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWeaponFireEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponFired(const FVector& Location);
    
public:
    UGunLogicComponent();
};

