#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EImpulseDirectionSource.h"
#include "DamageImpulse.generated.h"

UCLASS(Blueprintable)
class UDamageImpulse : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ImpactForce;
    
    UPROPERTY(EditAnywhere)
    float UpwardForceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EImpulseDirectionSource ImpulseSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ApplyImpulseToWholeBody;
    
    UDamageImpulse();
};

