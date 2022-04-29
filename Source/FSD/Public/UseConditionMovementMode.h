#pragma once
#include "CoreMinimal.h"
#include "UseConditionBase.h"
#include "MovementModeCombo.h"
#include "UseConditionMovementMode.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UUseConditionMovementMode : public UUseConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Invert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovementModeCombo> MovementModes;
    
    UUseConditionMovementMode();
};

