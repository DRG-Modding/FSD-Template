#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_FootStep.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UAnimNotify_FootStep : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool IsLeft;
    
    UAnimNotify_FootStep();
};

