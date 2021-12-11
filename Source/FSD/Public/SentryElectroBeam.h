#pragma once
#include "CoreMinimal.h"
#include "ElectroBeam.h"
#include "SentryElectroBeam.generated.h"

class ARedeployableSentryGun;

UCLASS()
class ASentryElectroBeam : public AElectroBeam {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<ARedeployableSentryGun*> Sentries;
    
public:
    ASentryElectroBeam();
};

