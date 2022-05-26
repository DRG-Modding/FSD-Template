#pragma once
#include "CoreMinimal.h"
#include "ChargedWeaponAnimInstance.h"
#include "CoilGunAnimInstance.generated.h"

class ACoilGun;

UCLASS(Blueprintable, NonTransient)
class UCoilGunAnimInstance : public UChargedWeaponAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindUpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindDownSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxExtention;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HandleExtend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCoilSpeed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACoilGun* CoilGun;
    
public:
    UCoilGunAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCoilSpeed(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCoilAngle(int32 Index) const;
    
};

