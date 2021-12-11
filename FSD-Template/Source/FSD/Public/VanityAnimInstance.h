#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EVanitySlot.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "VanityAnimInstance.generated.h"

UCLASS(NonTransient)
class UVanityAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EVanitySlot VanitySlot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool ArmorCoversBeard;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FVector ArmorChestThickness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FRotator ArmorChestRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector ExternalForce;
    
    UPROPERTY(EditAnywhere)
    float ExternalForceMultiplier;
    
    UPROPERTY(EditAnywhere)
    float MaxForce;
    
public:
    UVanityAnimInstance();
};

