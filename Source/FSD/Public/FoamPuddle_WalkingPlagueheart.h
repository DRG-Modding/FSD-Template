#pragma once
#include "CoreMinimal.h"
#include "FoamPuddle.h"
#include "FoamPuddle_WalkingPlagueheart.generated.h"

UCLASS(Blueprintable)
class AFoamPuddle_WalkingPlagueheart : public AFoamPuddle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoamCleanRadius;
    
    AFoamPuddle_WalkingPlagueheart();
};

