#pragma once
#include "CoreMinimal.h"
#include "ItemDispenserAnimInstance.h"
#include "EHackingPodState.h"
#include "FacilityTetherDispenserAnimInstnace.generated.h"

UCLASS(NonTransient)
class UFacilityTetherDispenserAnimInstnace : public UItemDispenserAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EHackingPodState PodState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool ShouldShowDispenser;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool ShouldCloseFromDispenser;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool ShouldShowButton;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool ShouldHideButton;
    
public:
    UFacilityTetherDispenserAnimInstnace();
};

