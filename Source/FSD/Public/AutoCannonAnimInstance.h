#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AutoCannonAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UAutoCannonAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UAutoCannonAnimInstance();
};

