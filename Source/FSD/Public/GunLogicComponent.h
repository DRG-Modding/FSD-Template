#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GunLogicComponent.generated.h"

class UMeshComponent;
class USoundCue;
class UParticleSystem;
class UWeaponFireComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UGunLogicComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UWeaponFireComponent* WeaponFire;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RateOfFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MuzzleParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TracerParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* FireSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTracerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TracerSpeed;
    
public:
    UGunLogicComponent();
    UFUNCTION(BlueprintCallable)
    void SetMesh(UMeshComponent* NewMesh);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWeaponFireEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponFired(const FVector& Location);
    
};

