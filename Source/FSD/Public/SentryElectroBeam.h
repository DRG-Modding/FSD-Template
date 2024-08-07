#pragma once
#include "CoreMinimal.h"
#include "RecalculatedElectroBeam.h"
#include "SentryElectroBeam.generated.h"

class ARedeployableSentryGun;

UCLASS(Blueprintable)
class ASentryElectroBeam : public ARecalculatedElectroBeam {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ARedeployableSentryGun*> Sentries;
    
public:
    ASentryElectroBeam(const FObjectInitializer& ObjectInitializer);

};

