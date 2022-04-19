#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "JellyEggAnimInstance.generated.h"

UCLASS(NonTransient)
class UJellyEggAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector force;
    
public:
    UJellyEggAnimInstance();
};

