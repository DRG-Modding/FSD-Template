#pragma once
#include "CoreMinimal.h"
#include "ThrowableActor.h"
#include "ShieldGeneratorActor.generated.h"

UCLASS(Blueprintable)
class AShieldGeneratorActor : public AThrowableActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Replicated)
    float GeneratorRadius;
    
    UPROPERTY(EditAnywhere, Replicated)
    float DeployDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPushStatusEffectOnExit;
    
    UPROPERTY(EditAnywhere)
    float GeneratorLifetime;
    
public:
    AShieldGeneratorActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

