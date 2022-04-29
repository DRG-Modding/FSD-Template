#pragma once
#include "CoreMinimal.h"
#include "ElectroBeam.h"
#include "SentryElectroBeam.generated.h"

class ARedeployableSentryGun;

UCLASS(Blueprintable)
class ASentryElectroBeam : public AElectroBeam {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ARedeployableSentryGun*> Sentries;
    
public:
    ASentryElectroBeam();
};

