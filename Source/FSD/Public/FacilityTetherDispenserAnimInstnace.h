#pragma once
#include "CoreMinimal.h"
#include "ItemDispenserAnimInstance.h"
#include "EHackingPodState.h"
#include "FacilityTetherDispenserAnimInstnace.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFacilityTetherDispenserAnimInstnace : public UItemDispenserAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHackingPodState PodState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShouldShowDispenser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShouldCloseFromDispenser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShouldShowButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShouldHideButton;
    
public:
    UFacilityTetherDispenserAnimInstnace();
};

