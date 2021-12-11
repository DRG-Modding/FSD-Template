#pragma once
#include "CoreMinimal.h"
#include "ThrowableActor.h"
#include "ShieldGeneratorActor.generated.h"

UCLASS()
class AShieldGeneratorActor : public AThrowableActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    float GeneratorRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    float DeployDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bPushStatusEffectOnExit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GeneratorLifetime;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AShieldGeneratorActor();
};

