#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "DualWieldWeapon.generated.h"

class UAnimMontage;
class UFirstPersonSkeletalMeshComponent;
class USkeletalMeshComponent;
class UFXSystemAsset;

UCLASS(Abstract)
class ADualWieldWeapon : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UFirstPersonSkeletalMeshComponent* FPMeshLeft;
    
    UPROPERTY(Export, VisibleAnywhere)
    USkeletalMeshComponent* TPMeshLeft;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* WPN_Left_Reload;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* WPN_Left_TP_Reload;
    
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* CasingParticlesLeft;
    
    UPROPERTY(EditAnywhere)
    FName MuzzleLeft;
    
public:
    ADualWieldWeapon();
};

