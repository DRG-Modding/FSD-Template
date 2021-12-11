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
    UPROPERTY(EditAnywhere)
    float BarrelSpinRate;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CurrentBarrelSpinRate;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector ExternalForce;
    
    UPROPERTY(EditAnywhere)
    float ExternalForceScale;
    
    UPROPERTY(EditAnywhere)
    FName ExternalForceBoneName;
    
public:
    UBeltDrivenAnimInstance();
};

