#pragma once
#include "CoreMinimal.h"
#include "SentryGunMuzzleSetup.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSentryGunMuzzleSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* FireMontage;
    
    FSD_API FSentryGunMuzzleSetup();
};

