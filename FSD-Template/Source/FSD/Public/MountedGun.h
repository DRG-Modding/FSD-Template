#pragma once
#include "CoreMinimal.h"
#include "Steerable.h"
#include "GameFramework/Actor.h"
#include "WeaponFireOwner.h"
#include "MountedGun.generated.h"

class UGunLogicComponent;
class USkeletalMeshComponent;
class UWeaponFireComponent;

UCLASS()
class AMountedGun : public AActor, public ISteerable, public IWeaponFireOwner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* Mesh;
    
protected:
    UPROPERTY(Export, Transient)
    UWeaponFireComponent* WeaponFire;
    
    UPROPERTY(Export, Transient)
    UGunLogicComponent* GunLogic;
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Test();
    
    AMountedGun();
    
    // Fix for true pure virtual functions not being implemented
};

