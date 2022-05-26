#pragma once
#include "CoreMinimal.h"
#include "ElectroBeam.h"
#include "CrossbowElectroBeam.generated.h"

class ACrossbowProjectileStuck;

UCLASS(Blueprintable)
class ACrossbowElectroBeam : public AElectroBeam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ACrossbowProjectileStuck* Arrow0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ACrossbowProjectileStuck* Arrow1;
    
    ACrossbowElectroBeam();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void RecalculateMovingBeam();
    
};

