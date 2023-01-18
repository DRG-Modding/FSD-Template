#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "UObject/NoExportTypes.h"
#include "AnimNotifyState_OverrideItemOffset.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UAnimNotifyState_OverrideItemOffset : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraOffset;
    
public:
    UAnimNotifyState_OverrideItemOffset();
};

