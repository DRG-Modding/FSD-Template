#pragma once
#include "CoreMinimal.h"
#include "EElectroBeamState.h"
#include "ElectroBeam.h"
#include "RecalculatedElectroBeam.generated.h"

UCLASS(Blueprintable)
class ARecalculatedElectroBeam : public AElectroBeam {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBeamRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateRateSeconds;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_BeamState, meta=(AllowPrivateAccess=true))
    EElectroBeamState BeamState;
    
public:
    ARecalculatedElectroBeam(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartRecalculatingBeam();
    
    UFUNCTION(BlueprintCallable)
    void SetMaxRange(const float InMaxRange);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_BeamState();
    
};

