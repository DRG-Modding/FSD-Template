#pragma once
#include "CoreMinimal.h"
#include "TentacleBase.h"
#include "TentacleTarget.h"
#include "StabberVine.generated.h"

UCLASS(Abstract)
class AStabberVine : public ATentacleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_DesiredTarget, meta=(AllowPrivateAccess=true))
    FTentacleTarget DesiredTarget;
    
public:
    AStabberVine();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DesiredTarget();
    
};

