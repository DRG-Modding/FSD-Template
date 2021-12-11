#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_UnHideBone.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UAnimNotify_UnHideBone : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    UAnimNotify_UnHideBone();
};

