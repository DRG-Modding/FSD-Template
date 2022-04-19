#pragma once
#include "CoreMinimal.h"
#include "SentryGunMuzzleSetup.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSentryGunMuzzleSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FireMontage;
    
    FSD_API FSentryGunMuzzleSetup();
};

