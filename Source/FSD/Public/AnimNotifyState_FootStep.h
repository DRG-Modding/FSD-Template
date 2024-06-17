#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_FootStep.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UAnimNotifyState_FootStep : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LegNr;
    
    UAnimNotifyState_FootStep();

};

