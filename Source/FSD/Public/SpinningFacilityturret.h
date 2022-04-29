#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FacilityTurret.h"
#include "RandRange.h"
#include "SpinningFacilityturret.generated.h"

UCLASS(Blueprintable)
class ASpinningFacilityturret : public AFacilityTurret {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FRotator TargetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange AimAtTargetEveryTurn;
    
    UPROPERTY(EditAnywhere)
    float TurnCooldown;
    
    UPROPERTY(EditAnywhere)
    float TurnTimer;
    
    UPROPERTY(EditAnywhere)
    float Acceptance;
    
    UPROPERTY(EditAnywhere)
    float TurnSpeed;
    
public:
    ASpinningFacilityturret();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

