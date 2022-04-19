#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "SentryGunAnimInstance.generated.h"

class ASentryGun;
class ARedeployableSentryGun;

UCLASS(Abstract, NonTransient)
class USentryGunAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    ASentryGun* SentryGun;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    ARedeployableSentryGun* RedeployableSentryGun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator TurretRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuildProgress;
    
public:
    USentryGunAnimInstance();
};

