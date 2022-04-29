#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "SentryGunAnimInstance.generated.h"

class ASentryGun;
class ARedeployableSentryGun;

UCLASS(Abstract, Blueprintable, NonTransient)
class USentryGunAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASentryGun* SentryGun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARedeployableSentryGun* RedeployableSentryGun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator TurretRotation;
    
    UPROPERTY(EditAnywhere)
    float YawOffset;
    
    UPROPERTY(EditAnywhere)
    float BuildProgress;
    
public:
    USentryGunAnimInstance();
};

