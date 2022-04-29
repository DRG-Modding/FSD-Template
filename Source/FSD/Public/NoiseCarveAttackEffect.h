#pragma once
#include "CoreMinimal.h"
#include "AttackEffect.h"
#include "NoiseCarveAttackEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNoiseCarveAttackEffect : public UAttackEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float ExpensiveNoise;
    
    UPROPERTY(EditAnywhere)
    float CarveDiameterCM;
    
    UPROPERTY(EditAnywhere)
    float CarveNoiseCM;
    
    UPROPERTY(EditAnywhere)
    float CarveBurnThicknessCM;
    
    UPROPERTY(EditAnywhere)
    float CarverOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Socket;
    
public:
    UNoiseCarveAttackEffect();
};

