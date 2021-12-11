#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "PlayerCharacterMontageAfflictionEffect.generated.h"

class UAnimMontage;

UCLASS()
class UPlayerCharacterMontageAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UAnimMontage* FP_Montage;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* TP_Montage;
    
    UPROPERTY(EditAnywhere)
    float BlendOut;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> RandomStarts;
    
public:
    UPlayerCharacterMontageAfflictionEffect();
};

