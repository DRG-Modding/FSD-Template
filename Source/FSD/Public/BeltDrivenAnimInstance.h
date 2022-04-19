#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeaponAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "BeltDrivenAnimInstance.generated.h"

UCLASS(NonTransient)
class UBeltDrivenAnimInstance : public UAmmoDrivenWeaponAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrelSpinRate;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float CurrentBarrelSpinRate;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector ExternalForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExternalForceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExternalForceBoneName;
    
public:
    UBeltDrivenAnimInstance();
};

