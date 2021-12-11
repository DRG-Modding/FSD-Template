#pragma once
#include "CoreMinimal.h"
#include "AttackEffect.h"
#include "NoiseCarveAttackEffect.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class UNoiseCarveAttackEffect : public UAttackEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float ExpensiveNoise;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CarveDiameterCM;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CarveNoiseCM;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CarveBurnThicknessCM;
    
    UPROPERTY(EditAnywhere)
    float CarverOffset;
    
    UPROPERTY(EditAnywhere)
    FName Socket;
    
public:
    UNoiseCarveAttackEffect();
};

