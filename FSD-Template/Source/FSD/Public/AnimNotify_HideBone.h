#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_HideBone.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UAnimNotify_HideBone : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    UAnimNotify_HideBone();
};

