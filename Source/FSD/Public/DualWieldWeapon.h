#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "DualWieldWeapon.generated.h"

class UFirstPersonSkeletalMeshComponent;
class UFXSystemAsset;
class USkeletalMeshComponent;
class UAnimMontage;

UCLASS(Abstract)
class ADualWieldWeapon : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UFirstPersonSkeletalMeshComponent* FPMeshLeft;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* TPMeshLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WPN_Left_Reload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WPN_Left_TP_Reload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* CasingParticlesLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MuzzleLeft;
    
public:
    ADualWieldWeapon();
};

