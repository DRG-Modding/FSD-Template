#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Test.generated.h"

UCLASS(NonTransient)
class UTest : public UAnimInstance {
    GENERATED_BODY()
public:
    UTest();
};

