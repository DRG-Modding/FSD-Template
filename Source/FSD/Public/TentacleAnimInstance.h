#pragma once
#include "CoreMinimal.h"
#include "TentacleAnimInstanceProxy.h"
#include "Animation/AnimInstance.h"
#include "TentacleAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UTentacleAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTentacleAnimInstanceProxy AnimInstanceProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseActorRotationDuringExtension;
    
public:
    UTentacleAnimInstance();
};

