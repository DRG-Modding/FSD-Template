#pragma once
#include "CoreMinimal.h"
#include "ElectroBeam.h"
#include "CrossbowElectroBeam.generated.h"

class ACrossbowProjectileStuck;

UCLASS()
class ACrossbowElectroBeam : public AElectroBeam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ACrossbowProjectileStuck* Arrow0;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ACrossbowProjectileStuck* Arrow1;
    
    ACrossbowElectroBeam();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void RecalculateMovingBeam();
    
};

