#pragma once
#include "CoreMinimal.h"
#include "Engine/DPICustomScalingRule.h"
#include "FSDCustomDPIScalingRule.generated.h"

UCLASS(Blueprintable)
class UFSDCustomDPIScalingRule : public UDPICustomScalingRule {
    GENERATED_BODY()
public:
    UFSDCustomDPIScalingRule();
};

